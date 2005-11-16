/*---------------------------------------------------------------------\
|                          ____ _   __ __ ___                          |
|                         |__  / \ / / . \ . \                         |
|                           / / \ V /|  _/  _/                         |
|                          / /__ | | | | | |                           |
|                         /_____||_| |_| |_|                           |
|                                                                      |
\---------------------------------------------------------------------*/
/** \file zypp/detail/ScriptImpl.h
 *
*/
#ifndef ZYPP_SOURCE_YUM_YUMSCRIPTIMPL_H
#define ZYPP_SOURCE_YUM_YUMSCRIPTIMPL_H

#include "zypp/detail/ScriptImpl.h"
#include "zypp/parser/yum/YUMParserData.h"

///////////////////////////////////////////////////////////////////
namespace zypp
{ /////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////
  namespace source
  { /////////////////////////////////////////////////////////////////
    namespace YUM
    { //////////////////////////////////////////////////////////////

      DEFINE_PTR_TYPE(YUMScriptImpl)
  
      ///////////////////////////////////////////////////////////////////
      //
      //        CLASS NAME : YUMScriptImpl
      //
      /** Class representing an update script */
      class YUMScriptImpl : public detail::ScriptImpl
      {
      public:
        /** Default ctor */
        YUMScriptImpl( const zypp::parser::YUM::YUMPatchScript & parsed );
       };
      ///////////////////////////////////////////////////////////////////
    } // namespace YUM
    /////////////////////////////////////////////////////////////////
  } // namespace source
  ///////////////////////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////
} // namespace zypp
///////////////////////////////////////////////////////////////////
#endif // ZYPP_SOURCE_YUM_YUMSCRIPTIMPL_H
