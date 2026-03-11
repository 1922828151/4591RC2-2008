/*
 * func-name: ?SpecialUse@Weapon@GameClient@@UAE_NXZ_0
 * func-address: 0x10195ac0
 * callers: 0x1000feb6
 * callees: 0x10006a19
 */

bool __thiscall GameClient::Weapon::SpecialUse(GameClient::Weapon *this)
{
  int v2; // ecx
  GameClient::WorldObject *v4; // ecx
  int v5; // ecx

  if ( *(_BYTE *)(*((_DWORD *)this + 2) + 2404) )
    return 0;
  if ( *((_DWORD *)this + 186) )
    return 0;
  v2 = *((_DWORD *)this + 185);
  if ( *((float *)this + 18 * v2 + 191) > 0.0 )
    return 0;
  *((_DWORD *)this + 185) = v2 + 1;
  if ( v2 + 1 > 1 )
    *((_DWORD *)this + 185) = 0;
  v4 = (GameClient::WorldObject *)*((_DWORD *)this + 37);
  if ( v4 && GameClient::WorldObject::IsLocal(v4) )
  {
    v5 = *((_DWORD *)this + 365);
    if ( v5 )
      (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)v5 + 36))(0, 0.75);
  }
  return GameClient::Equip::SpecialUse(this);
}
