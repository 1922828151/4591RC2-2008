/*
 * func-name: ?ReMapping@Input@@QAEXAAVConfigFile@@PAUHWND__@@_N@Z
 * func-address: 0x100dcba0
 * callers: none
 * callees: 0x100dbc90, 0x100dca50
 */

void __thiscall Input::ReMapping(Input *this, struct ConfigFile *a2, HWND a3, bool a4)
{
  Input::Shutdown(this);
  Input::Initialize(this, a2, a3, a4);
}
