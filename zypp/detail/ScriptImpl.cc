/*---------------------------------------------------------------------\
|                          ____ _   __ __ ___                          |
|                         |__  / \ / / . \ . \                         |
|                           / / \ V /|  _/  _/                         |
|                          / /__ | | | | | |                           |
|                         /_____||_| |_| |_|                           |
|                                                                      |
\---------------------------------------------------------------------*/
/** \file zypp/detail/ScriptImpl.cc
 *
*/
#include <iostream>

#include "zypp/base/Logger.h"
#include "zypp/detail/ScriptImpl.h"
#include "zypp/Script.h"

using namespace std;

///////////////////////////////////////////////////////////////////
namespace zypp
{ /////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////
  namespace detail
  { /////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////
    //
    //	CLASS NAME : ScriptImpl
    //
    ///////////////////////////////////////////////////////////////////

    /** Default ctor */
    ScriptImpl::ScriptImpl( const ResName & name_r,
			    const Edition & edition_r,
			    const Arch & arch_r )
    : ResolvableImpl (ResKind ("script"),
		      ResName (name_r),
		      Edition (edition_r),
		      Arch (arch_r))
    {
    }
    /** Dtor */
    ScriptImpl::~ScriptImpl()
    {
    }

    std::string ScriptImpl::do_script () const {
      return _do_script;
    }

    std::string ScriptImpl::undo_script () const {
      return _undo_script;
    }

    bool ScriptImpl::undo_available () const {
      return _undo_script != "";
    }

    /////////////////////////////////////////////////////////////////
  } // namespace detail
  ///////////////////////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////
} // namespace zypp
///////////////////////////////////////////////////////////////////
