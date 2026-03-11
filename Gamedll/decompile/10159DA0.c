/*
 * func-name: ?UnloadResourceFPV@Equip@GameClient@@UAEXXZ_0
 * func-address: 0x10159da0
 * callers: 0x10013453
 * callees: none
 */

void __thiscall GameClient::Equip::UnloadResourceFPV(GameClient::Equip *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 45) + 148))(*((_DWORD *)this + 45));
  v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 44);
  if ( v2 )
  {
    (**v2)(v2, 1);
    *((_DWORD *)this + 44) = 0;
  }
}
