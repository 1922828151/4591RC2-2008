/*
 * func-name: ?PreRender@AEquip@GameClient@@UAEXPAVCamera@@@Z_0
 * func-address: 0x100fe7a0
 * callers: 0x100168f6
 * callees: 0x10016f5e
 */

void __thiscall GameClient::AEquip::PreRender(GameClient::AEquip *this, struct Camera *a2)
{
  int v3; // eax

  if ( *((_DWORD *)this + 341) && *((_BYTE *)this + 1384) )
  {
    v3 = *((_DWORD *)this + 179);
    if ( v3 )
      sub_10016F5E(v3 + 288);
    (***((void (__thiscall ****)(_DWORD, struct Camera *, _DWORD, _DWORD, _DWORD, GameClient::AEquip *, int))this + 341))(
      *((_DWORD *)this + 341),
      a2,
      *((_DWORD *)this + 178),
      0,
      0,
      this,
      1);
  }
  Actor::PreRender(this, a2);
}
