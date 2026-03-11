/*
 * func-name: ?RemoveArmor@DamageUnit@GameClient@@QAEXH@Z_0
 * func-address: 0x101582f0
 * callers: 0x100080df
 * callees: 0x10013327
 */

void __thiscall GameClient::DamageUnit::RemoveArmor(GameClient::DamageUnit *this, unsigned int a2)
{
  int v3; // eax
  unsigned int v4; // edi

  v3 = *((_DWORD *)this + 2);
  if ( v3 && a2 < (*((_DWORD *)this + 3) - v3) / 20 )
  {
    v4 = *((_DWORD *)this + 2);
    if ( v4 > *((_DWORD *)this + 3) && (_invalid_parameter_noinfo(), v4 > *((_DWORD *)this + 3))
      || v4 < *((_DWORD *)this + 2) )
    {
      _invalid_parameter_noinfo();
    }
    sub_10013327(v4 + 20, *((_DWORD *)this + 3), v4);
    *((_DWORD *)this + 3) -= 20;
  }
}
