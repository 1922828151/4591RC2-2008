/*
 * func-name: ?RemoveDamageUnit@DamageManager@GameClient@@QAEXK@Z_0
 * func-address: 0x10154e90
 * callers: 0x10019d6c
 * callees: 0x1000e99e, 0x10013336
 */

void __thiscall GameClient::DamageManager::RemoveDamageUnit(GameClient::DamageManager *this, unsigned int a2)
{
  int v3; // edi
  void *v4; // ebx
  int v5; // [esp+Ch] [ebp-8h] BYREF
  void *v6; // [esp+10h] [ebp-4h]

  sub_1000E99E((int)&v5, (int)&a2);
  v3 = v5;
  v4 = (void *)*((_DWORD *)this + 2);
  if ( !v5 || (GameClient::DamageManager *)v5 != (GameClient::DamageManager *)((char *)this + 4) )
    _invalid_parameter_noinfo();
  if ( v6 != v4 )
    sub_10013336((int)&v5, v3, v6);
}
