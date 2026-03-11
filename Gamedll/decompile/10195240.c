/*
 * func-name: ?SwitchWeaponPattern@Weapon@GameClient@@QAEXH@Z_0
 * func-address: 0x10195240
 * callers: 0x10006c21
 * callees: 0x10006a19
 */

void __thiscall GameClient::Weapon::SwitchWeaponPattern(GameClient::Weapon *this, int a2)
{
  GameClient::WorldObject *v3; // ecx
  int v4; // ecx

  v3 = (GameClient::WorldObject *)*((_DWORD *)this + 37);
  *((_DWORD *)this + 185) = a2;
  if ( v3 && GameClient::WorldObject::IsLocal(v3) )
  {
    v4 = *((_DWORD *)this + 365);
    if ( v4 )
      (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)v4 + 36))(0, 0.75);
  }
}
