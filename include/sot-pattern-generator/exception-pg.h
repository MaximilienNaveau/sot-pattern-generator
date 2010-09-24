/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 * Copyright Projet JRL-Japan, 2008
 *+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * File:      ExceptionPatternGenerator.h
 * Project:   SOT
 * Author:    Olivier Stasse
 *
 * Version control
 * ===============
 *
 *  $Id$
 *
 * Description
 * ============
 *
 *
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


#ifndef __SOT_PATTERN_GENERATOR_EXCEPTION_H
#define __SOT_PATTERN_GENERATOR_EXCEPTION_H

/* --------------------------------------------------------------------- */
/* --- INCLUDE --------------------------------------------------------- */
/* --------------------------------------------------------------------- */


#include <sot-core/exception-abstract.h>

/* --------------------------------------------------------------------- */
/* --- CLASS ----------------------------------------------------------- */
/* --------------------------------------------------------------------- */

namespace sot {

/* \class ExceptionPatternGenerator
 */
class ExceptionPatternGenerator
:public ExceptionAbstract

{
 public:
  enum ErrorCodeEnum
    {
      GENERIC = ExceptionAbstract::PATTERN_GENERATOR
      ,READ_FILE
      ,CANT_DESTROY_SIGNAL
      ,JOINT_RANK
      ,PATTERN_GENERATOR_JRL
      ,SELECTOR_RANK
      ,BAD_CAST
    };

  static const std::string EXCEPTION_NAME;
  virtual const std::string& getExceptionName( void ) const { return EXCEPTION_NAME; }
  
public:

  ExceptionPatternGenerator ( const ExceptionPatternGenerator::ErrorCodeEnum& errcode,
		       const std::string & msg = "" );
  ExceptionPatternGenerator( const ExceptionPatternGenerator::ErrorCodeEnum& errcode,
			const std::string & msg,const char* format, ... );
  virtual ~ExceptionPatternGenerator( void ) throw() {}


};


} // namespace sot


#endif /* #ifndef __SOT_PATTERN_GENERATOR_EXCEPTION_H */

