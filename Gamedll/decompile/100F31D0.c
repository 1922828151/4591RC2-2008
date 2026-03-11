/*
 * func-name: ?GetNodeMatrix@AdapterActor@GameClient@@UAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAVMatrix@@_N@Z_0
 * func-address: 0x100f31d0
 * callers: 0x10003567
 * callees: 0x1000df7b
 */

char __thiscall GameClient::AdapterActor::GetNodeMatrix(_DWORD *this, int a2, void *a3, char a4)
{
  int v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // ebx
  _DWORD *v10; // [esp+10h] [ebp-8h] BYREF
  int v11; // [esp+14h] [ebp-4h]

  sub_1000DF7B((int)&v10, a2);
  v5 = this[286];
  v6 = this + 285;
  v7 = v10;
  if ( !v10 || v10 != v6 )
    _invalid_parameter_noinfo();
  v8 = v11;
  if ( v11 == v5 )
    return 0;
  if ( a4 )
  {
    if ( !v7 )
      _invalid_parameter_noinfo();
    if ( v8 == v7[1] )
      _invalid_parameter_noinfo();
    qmemcpy(a3, (const void *)(*(_DWORD *)(v8 + 36) + 100), 0x40u);
    return 1;
  }
  else
  {
    if ( !v7 )
      _invalid_parameter_noinfo();
    if ( v8 == v7[1] )
      _invalid_parameter_noinfo();
    qmemcpy(a3, (const void *)(*(_DWORD *)(v8 + 36) + 164), 0x40u);
    return 1;
  }
}
