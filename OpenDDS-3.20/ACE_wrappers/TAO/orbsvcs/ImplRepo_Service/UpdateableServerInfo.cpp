// $Id$

#include "orbsvcs/Log_Macros.h"
#include "Locator_Repository.h"
#include "UpdateableServerInfo.h"

UpdateableServerInfo::UpdateableServerInfo (const Repository_Ptr& repo,
                                            const ACE_CString& name,
                                            int pid)
: repo_(repo),
  si_(repo->get_active_server (name,pid)),
  needs_update_(false)
{
}

UpdateableServerInfo::UpdateableServerInfo (const Repository_Ptr& repo,
                                            const Server_Info_Ptr& si,
                                            bool reset_start_count)
: repo_(repo),
  si_(si),
  needs_update_(false)
{
  if (reset_start_count)
    {
      needs_update_ = repo_.get() != 0;
      si_->active_info ()->start_count_ = 0;
    }
}

UpdateableServerInfo::UpdateableServerInfo (UpdateableServerInfo& other)
  :repo_ (other.repo_),
   si_ (other.si_),
   needs_update_(other.needs_update_)
{
  other.needs_update_ = false;
}

UpdateableServerInfo::~UpdateableServerInfo ()
{
  update_repo ();
}

void
UpdateableServerInfo::server_info (const Server_Info_Ptr& si)
{
  this->si_ = si;
}

void
UpdateableServerInfo::notify_remote_access
(ImplementationRepository::AAM_Status state)
{
  repo_->notify_remote_access (this->si_->ping_id (), state);
}

void
UpdateableServerInfo::update_repo ()
{
  if (!needs_update_)
    return;

  needs_update_ = false;
  int err = repo_->update_server (si_);
  if (err == 0 && !si_->alt_info_.null ())
    {
      err = repo_->update_server (si_->alt_info_);
    }
  if (err != 0)
    {
      ORBSVCS_ERROR ((LM_ERROR,"(%P|%t) update repo failed err = %d, %p\n",
                      err, "update_server"));
    }
}

const Server_Info*
UpdateableServerInfo::operator-> () const
{
  return si_.get();
}

const Server_Info&
UpdateableServerInfo::operator* () const
{
  return *(si_.get());
}


const Server_Info_Ptr&
UpdateableServerInfo::edit (bool active)
{
  needs_update_ = active && repo_.get() != 0;
  return si_;
}

bool
UpdateableServerInfo::null() const
{
  return si_.null();
}
