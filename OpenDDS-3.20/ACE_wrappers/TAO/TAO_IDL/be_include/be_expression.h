
//=============================================================================
/**
 *  @file    be_expression.h
 *
 *  $Id$
 *
 *  Extension of class AST_Expression that provides additional means for C++
 *  mapping.
 *
 *
 *  @author Copyright 1994-1995 by Sun Microsystems
 *  @author Inc. and Aniruddha Gokhale
 */
//=============================================================================

#ifndef BE_EXPRESSION_H
#define BE_EXPRESSION_H

#include "ast_expression.h"

class be_visitor;

class be_expression : public virtual AST_Expression
{
public:
  // Constructors.
  be_expression (UTL_ScopedName *n);

  be_expression (AST_Expression *b,
                 AST_Expression::ExprType t);

  be_expression (AST_Expression::ExprComb c,
                 AST_Expression *v1,
                 AST_Expression *v2);

  be_expression (ACE_CDR::Long l);

  be_expression (ACE_CDR::LongLong ll);

  be_expression (ACE_CDR::Boolean b);

  be_expression (ACE_CDR::ULong ul);

  be_expression (ACE_CDR::ULongLong ull);

  be_expression (ACE_CDR::ULong l,
                 AST_Expression::ExprType t);

  be_expression (UTL_String *s);

  be_expression (char *s);

  be_expression (ACE_CDR::Char c);

  be_expression (ACE_OutputCDR::from_wchar wc);

  be_expression (ACE_CDR::Double d);

  be_expression (const ACE_CDR::Fixed &f);

  // Visiting.
  virtual int accept (be_visitor *visitor);
};

#endif
