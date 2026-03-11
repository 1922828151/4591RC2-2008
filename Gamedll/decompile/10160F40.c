/*
 * func-name: ?Update@Item@GameClient@@UAEXM@Z_0
 * func-address: 0x10160f40
 * callers: 0x100167ca
 * callees: 0x1000f85d
 */

void __thiscall GameClient::Item::Update(GameClient::Item *this, float a2)
{
  if ( *((_DWORD *)this + 192) )
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 192) + 36))(LODWORD(a2));
  if ( *((_DWORD *)this + 193) )
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 193) + 36))(LODWORD(a2));
  GameClient::Equip::Update(this, a2);
}
