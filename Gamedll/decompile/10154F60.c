/*
 * func-name: ?GetArmorProg@DamageManager@GameClient@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ARMOR_TYPE@@@Z_0
 * func-address: 0x10154f60
 * callers: 0x10016324
 * callees: 0x10013b2e
 */

void *__thiscall GameClient::DamageManager::GetArmorProg(_DWORD *this, void *a2, char a3)
{
  int v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // ebx
  _DWORD *v9; // [esp+10h] [ebp-8h] BYREF
  int v10; // [esp+14h] [ebp-4h]

  v9 = 0;
  sub_10013B2E((int)&v9, (int)&a3);
  v4 = this[12];
  v5 = this + 11;
  v6 = v9;
  if ( !v9 || v9 != v5 )
    _invalid_parameter_noinfo();
  v7 = v10;
  if ( v10 == v4 )
  {
    std::string::string(a2, &unk_10313FF3);
    return a2;
  }
  else
  {
    if ( !v6 )
      _invalid_parameter_noinfo();
    if ( v7 == v6[1] )
      _invalid_parameter_noinfo();
    std::string::string(a2, (void *)(v7 + 12));
    return a2;
  }
}
