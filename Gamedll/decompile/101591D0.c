/*
 * func-name: ?UnloadResource@Equip@GameClient@@UAEXXZ_0
 * func-address: 0x101591d0
 * callers: 0x1001507d
 * callees: none
 */

void __thiscall GameClient::Equip::UnloadResource(GameClient::Equip *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx

  (*(void (__thiscall **)(GameClient::Equip *))(*(_DWORD *)this + 156))(this);
  v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 44);
  if ( v2 )
  {
    (**v2)(v2, 1);
    *((_DWORD *)this + 44) = 0;
  }
  GameClient::SystemPart::UnloadResource(this);
}
