/*
 * func-name: ?Stop@Weapon@GameClient@@UAEXXZ_0
 * func-address: 0x10195130
 * callers: 0x10013291
 * callees: 0x1000bf05, 0x100163b0, 0x1001a5d2
 */

void __thiscall GameClient::Weapon::Stop(GameClient::Weapon *this)
{
  int v2; // ecx

  *((_DWORD *)this + 186) = 0;
  *((_DWORD *)this + 189) = 0;
  if ( sub_1000BF05() && (unsigned __int8)sub_100163B0() )
    sub_1001A5D2(0);
  v2 = *((_DWORD *)this + 285);
  if ( v2 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 40))(v2) )
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 285) + 44))(*((_DWORD *)this + 285));
  GameClient::Equip::Stop(this);
}
