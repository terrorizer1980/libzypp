/*---------------------------------------------------------------------\
|                          ____ _   __ __ ___                          |
|                         |__  / \ / / . \ . \                         |
|                           / / \ V /|  _/  _/                         |
|                          / /__ | | | | | |                           |
|                         /_____||_| |_| |_|                           |
|                                                                      |
----------------------------------------------------------------------/
*
* This file contains private API, this might break at any time between releases.
* You have been warned!
*
*/
#ifndef ZYPP_NG_MEDIADEBUG_H_INCLUDED
#define ZYPP_NG_MEDIADEBUG_H_INCLUDED

#include <zypp-core/base/LogControl.h>
namespace zypp {
  L_ENV_CONSTR_FWD_DECLARE_FUNC(ZYPP_MEDIA_CURL_DEBUG);
}

#ifdef ZYPP_BASE_LOGGER_LOGGROUP
#undef ZYPP_BASE_LOGGER_LOGGROUP
#endif

#define ZYPP_BASE_LOGGER_LOGGROUP "ZYPP_MEDIA_CURL"

#define XXX_MEDIA L_XXX_MEDIA( ZYPP_BASE_LOGGER_LOGGROUP )
#define DBG_MEDIA L_DBG_MEDIA( ZYPP_BASE_LOGGER_LOGGROUP )
#define MIL_MEDIA L_MIL_MEDIA( ZYPP_BASE_LOGGER_LOGGROUP )
#define WAR_MEDIA L_WAR_MEDIA( ZYPP_BASE_LOGGER_LOGGROUP )
#define ERR_MEDIA L_ERR_MEDIA( ZYPP_BASE_LOGGER_LOGGROUP )
#define SEC_MEDIA L_SEC_MEDIA( ZYPP_BASE_LOGGER_LOGGROUP )
#define INT_MEDIA L_INT_MEDIA( ZYPP_BASE_LOGGER_LOGGROUP )
#define USR_MEDIA L_USR_MEDIA( ZYPP_BASE_LOGGER_LOGGROUP )

#define L_XXX_MEDIA(GROUP) L_ENV_CONSTR( ZYPP_MEDIA_CURL_DEBUG, GROUP, zypp::base::logger::E_XXX )
#define L_DBG_MEDIA(GROUP) L_ENV_CONSTR( ZYPP_MEDIA_CURL_DEBUG, GROUP"++", zypp::base::logger::E_MIL )
#define L_MIL_MEDIA(GROUP) L_ENV_CONSTR( ZYPP_MEDIA_CURL_DEBUG, GROUP, zypp::base::logger::E_MIL )
#define L_WAR_MEDIA(GROUP) L_ENV_CONSTR( ZYPP_MEDIA_CURL_DEBUG, GROUP, zypp::base::logger::E_WAR )
#define L_ERR_MEDIA(GROUP) L_ENV_CONSTR( ZYPP_MEDIA_CURL_DEBUG, GROUP, zypp::base::logger::E_ERR )
#define L_SEC_MEDIA(GROUP) L_ENV_CONSTR( ZYPP_MEDIA_CURL_DEBUG, GROUP, zypp::base::logger::E_SEC )
#define L_INT_MEDIA(GROUP) L_ENV_CONSTR( ZYPP_MEDIA_CURL_DEBUG, GROUP, zypp::base::logger::E_INT )
#define L_USR_MEDIA(GROUP) L_ENV_CONSTR( ZYPP_MEDIA_CURL_DEBUG, GROUP, zypp::base::logger::E_USR )

#endif // ZYPP_NG_MEDIADEBUG_H_INCLUDED
