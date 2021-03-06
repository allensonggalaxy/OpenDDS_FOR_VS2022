/* -*- C++ -*- */

//=============================================================================
/**
*  @file UpdateableServerInfo.h
*
*  $Id$
*
*/
//=============================================================================

#ifndef UPDATEABLE_SERVER_INFO_H
#define UPDATEABLE_SERVER_INFO_H

#include "Server_Info.h"
#include "ImR_LocatorC.h"

class Locator_Repository;
typedef ACE_Strong_Bound_Ptr<Locator_Repository, ACE_Null_Mutex> Repository_Ptr;

/**
* @class UpdateableServerInfo
*
* @brief Class for managing changes to ServerInfo memory to ensure
* it is persisted
*
*/
class UpdateableServerInfo
{
public:
  /// constructor
  /// @param repo the repo to report updates to
  /// @param name the name of the server to retrieve
  /// @param pid an optional process id to further discriminate the server
  UpdateableServerInfo(const Repository_Ptr& repo,
                       const ACE_CString& name,
                       int pid = 0);

  /// constructor
  /// @param repo the repo to report updates to
  /// @param si an already retrieved Server_Info_Ptr
  /// @param reset_start_count controls the reset of the start count value
  UpdateableServerInfo(const Repository_Ptr& repo,
                       const Server_Info_Ptr& si,
                       bool reset_start_count = false);

  UpdateableServerInfo(UpdateableServerInfo& other );

  /// destructor (updates repo if needed)
  ~UpdateableServerInfo(void);

  /// explicitly update repo if needed
  void update_repo(void);

  /// update remote access state
  void notify_remote_access (ImplementationRepository::AAM_Status state);

  /// assign a server info
  void server_info (const Server_Info_Ptr& si);

  /// const Server_Info access
  const Server_Info* operator->() const;

  /// const Server_Info& access
  const Server_Info& operator*() const;

  /// retrieve smart pointer to non-const Server_Info
  /// and indicate repo update required
  const Server_Info_Ptr& edit(bool active = true);

  /// indicate it Server_Info_Ptr is null
  bool null(void) const;

private:
  const UpdateableServerInfo& operator=(const UpdateableServerInfo& );

  /// the repo
  Repository_Ptr repo_;

  /// the retrieved, passed, or non-stored server info
  Server_Info_Ptr si_;

  /// the server info has changes and needs to be updated to the repo
  bool needs_update_;
};

#endif /* UPDATEABLE_SERVER_INFO_H */
