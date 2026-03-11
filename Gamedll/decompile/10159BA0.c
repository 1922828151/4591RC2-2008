/*
 * func-name: ?UnloadHUD@Equip@GameClient@@QAEXXZ_0
 * func-address: 0x10159ba0
 * callers: 0x10005af1
 * callees: none
 */

void __thiscall GameClient::Equip::UnloadHUD(GameClient::Equip *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 44);
  if ( v2 )
  {
    (**v2)(v2, 1);
    *((_DWORD *)this + 44) = 0;
  }
}
