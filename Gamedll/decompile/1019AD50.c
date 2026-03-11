/*
 * func-name: ?Update@WorldObject@GameClient@@UAEXM@Z_0
 * func-address: 0x1019ad50
 * callers: 0x10012deb
 * callees: none
 */

void __thiscall GameClient::WorldObject::Update(GameClient::WorldObject *this, float a2)
{
  if ( *((_DWORD *)this + 36) )
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 36) + 36))(LODWORD(a2));
}
