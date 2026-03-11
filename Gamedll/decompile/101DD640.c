/*
 * func-name: ?create@LogicFactory@GameClient@@QAEPAVSerializeObject@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x101dd640
 * callers: 0x100028dd
 * callees: 0x10009980
 */

int __thiscall GameClient::LogicFactory::create(_DWORD *this, int a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  int v6; // ebx
  _DWORD *v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h]

  sub_10009980((int)&v8, a2);
  v3 = this[2];
  v4 = this + 1;
  v5 = v8;
  if ( !v8 || v8 != v4 )
    _invalid_parameter_noinfo();
  v6 = v9;
  if ( v9 == v3 )
    return 0;
  if ( !v5 )
    _invalid_parameter_noinfo();
  if ( v6 == v5[1] )
    _invalid_parameter_noinfo();
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v6 + 36) + 4))(*(_DWORD *)(v6 + 36));
}
