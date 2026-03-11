/*
 * func-name: ?GetArmor@DamageUnit@GameClient@@QAEABUArmorInfo@12@I@Z_0
 * func-address: 0x10043800
 * callers: 0x10006e5b
 * callees: none
 */

const struct GameClient::DamageUnit::ArmorInfo *__thiscall GameClient::DamageUnit::GetArmor(
        GameClient::DamageUnit *this,
        unsigned int a2)
{
  int v3; // eax

  v3 = *((_DWORD *)this + 2);
  if ( !v3 || a2 >= (*((_DWORD *)this + 3) - v3) / 20 )
    _invalid_parameter_noinfo();
  return (const struct GameClient::DamageUnit::ArmorInfo *)(*((_DWORD *)this + 2) + 20 * a2);
}
