// This may look like C, but it's really -*- C++ -*-
// $Id$
/*

COPYRIGHT

Copyright 1992, 1993, 1994 Sun Microsystems, Inc.  Printed in the United
States of America.  All Rights Reserved.

This product is protected by copyright and distributed under the following
license restricting its use.

The Interface Definition Language Compiler Front End (CFE) is made
available for your use provided that you include this license and copyright
notice on all media and documentation and the software program in which
this product is incorporated in whole or part. You may copy and extend
functionality (but may not remove functionality) of the Interface
Definition Language CFE without charge, but you are not authorized to
license or distribute it to anyone else except as part of a product or
program developed by you or with the express written consent of Sun
Microsystems, Inc. ("Sun").

The names of Sun Microsystems, Inc. and any of its subsidiaries or
affiliates may not be used in advertising or publicity pertaining to
distribution of Interface Definition Language CFE as permitted herein.

This license is effective until terminated by Sun for failure to comply
with this license.  Upon termination, you shall destroy or return all code
and documentation for the Interface Definition Language CFE.

INTERFACE DEFINITION LANGUAGE CFE IS PROVIDED AS IS WITH NO WARRANTIES OF
ANY KIND INCLUDING THE WARRANTIES OF DESIGN, MERCHANTIBILITY AND FITNESS
FOR A PARTICULAR PURPOSE, NONINFRINGEMENT, OR ARISING FROM A COURSE OF
DEALING, USAGE OR TRADE PRACTICE.

INTERFACE DEFINITION LANGUAGE CFE IS PROVIDED WITH NO SUPPORT AND WITHOUT
ANY OBLIGATION ON THE PART OF Sun OR ANY OF ITS SUBSIDIARIES OR AFFILIATES
TO ASSIST IN ITS USE, CORRECTION, MODIFICATION OR ENHANCEMENT.

SUN OR ANY OF ITS SUBSIDIARIES OR AFFILIATES SHALL HAVE NO LIABILITY WITH
RESPECT TO THE INFRINGEMENT OF COPYRIGHTS, TRADE SECRETS OR ANY PATENTS BY
INTERFACE DEFINITION LANGUAGE CFE OR ANY PART THEREOF.

IN NO EVENT WILL SUN OR ANY OF ITS SUBSIDIARIES OR AFFILIATES BE LIABLE FOR
ANY LOST REVENUE OR PROFITS OR OTHER SPECIAL, INDIRECT AND CONSEQUENTIAL
DAMAGES, EVEN IF SUN HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.

Use, duplication, or disclosure by the government is subject to
restrictions as set forth in subparagraph (c)(1)(ii) of the Rights in
Technical Data and Computer Software clause at DFARS 252.227-7013 and FAR
52.227-19.

Sun, Sun Microsystems and the Sun logo are trademarks or registered
trademarks of Sun Microsystems, Inc.

SunSoft, Inc.
2550 Garcia Avenue
Mountain View, California  94043

NOTE:

SunOS, SunSoft, Sun, Solaris, Sun Microsystems or the Sun logo are
trademarks or registered trademarks of Sun Microsystems, Inc.

*/

#ifndef _AST_TYPEDEF_AST_TYPEDEF_HH
#define _AST_TYPEDEF_AST_TYPEDEF_HH

#include "ast_type.h"
#include "ast_field.h"

// Representation of typedef declaration.
// A typedef declaration is a renaming of a base type.

class TAO_IDL_FE_Export AST_Typedef : public virtual AST_Type,
                                      public virtual AST_Field
{
public:
  AST_Typedef (AST_Type *base_type,
               UTL_ScopedName *n,
               bool local,
               bool abstract);

  virtual ~AST_Typedef (void);

  AST_Type *primitive_base_type (void) const;
  // Return the most primitive base type by traversing the chain of typedefed
  // base types.

  // Data Accessors.
  AST_Type *base_type (void) const;

  virtual bool legal_for_primary_key (void) const;
  // Recursively called on valuetype to check for legal use as
  // a primary key. Overridden for valuetype, struct, sequence,
  // union, array, typedef, and interface.

  virtual bool is_local (void);
  // Override the base class method.

  bool owns_base_type (void) const;
  void owns_base_type (bool val);
  // Sometimes this has to be accessed or managed from outside.

  // Narrowing.
  DEF_NARROW_FROM_DECL (AST_Typedef);

  // AST Dumping.
  virtual void dump (ACE_OSTREAM_TYPE &o);

  // Visiting.
  virtual int ast_accept (ast_visitor *visitor);

  // Cleanup.
  virtual void destroy (void);

  static AST_Decl::NodeType const NT;

  virtual bool dump_annotations_inline () const { return true; }

  /**
   * Recursively acquired annotations from typedefs.
   */
  virtual AST_Annotation_Appls &annotations ();

protected:
  virtual int compute_size_type (void);
  // Compute the size type if it is unknown.

  /**
   * Cache of Recursively acquired annotations from typedefs.
   */
  ///{
  AST_Annotation_Appls cached_annotations_;
  bool has_cached_annotations_;
  ///}
};

#endif           // _AST_TYPEDEF_AST_TYPEDEF_HH
