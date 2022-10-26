// ---------------------------------------------------------------------------
// wxluacan.h - headers and wxLua types for wxLua binding
//
// This file was generated by genwxbind.lua 
// Any changes made to this file will be lost when the file is regenerated
// ---------------------------------------------------------------------------

#ifndef __HOOK_WXLUA_wxluacan_H__
#define __HOOK_WXLUA_wxluacan_H__

#include "wxbind/include/wxcore_bind.h"

#include "wxlua/wxlstate.h"
#include "wxlua/wxlbind.h"

// ---------------------------------------------------------------------------
// Check if the version of binding generator used to create this is older than
//   the current version of the bindings.
//   See 'bindings/genwxbind.lua' and 'modules/wxlua/wxldefs.h'
#if WXLUA_BINDING_VERSION > 42
#   error "The WXLUA_BINDING_VERSION in the bindings is too old, regenerate bindings."
#endif //WXLUA_BINDING_VERSION > 42
// ---------------------------------------------------------------------------

// binding class
class WXLUA_NO_DLLIMPEXP wxLuaBinding_wxluacan : public wxLuaBinding
{
public:
    wxLuaBinding_wxluacan();


private:
    DECLARE_DYNAMIC_CLASS(wxLuaBinding_wxluacan)
};


// initialize wxLuaBinding_wxluacan for all wxLuaStates
extern WXLUA_NO_DLLIMPEXP wxLuaBinding* wxLuaBinding_wxluacan_init();

// ---------------------------------------------------------------------------
// Includes
// ---------------------------------------------------------------------------

#include "cancom.h"
#include "canlua.h"
#include "cansim.h"
#include "wx/gdicmn.h"

// ---------------------------------------------------------------------------
// Lua Tag Method Values and Tables for each Class
// ---------------------------------------------------------------------------

extern WXLUA_NO_DLLIMPEXP_DATA(int) wxluatype_wxlCan;
extern WXLUA_NO_DLLIMPEXP_DATA(int) wxluatype_wxlCanObj;
extern WXLUA_NO_DLLIMPEXP_DATA(int) wxluatype_wxlCanObjAddScript;
extern WXLUA_NO_DLLIMPEXP_DATA(int) wxluatype_wxlCanObjCircle;
extern WXLUA_NO_DLLIMPEXP_DATA(int) wxluatype_wxlCanObjRect;
extern WXLUA_NO_DLLIMPEXP_DATA(int) wxluatype_wxlCanObjScript;
extern WXLUA_NO_DLLIMPEXP_DATA(int) wxluatype_wxlLuaCanCmd;



#endif // __HOOK_WXLUA_wxluacan_H__

