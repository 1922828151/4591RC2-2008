/*
 * func-name: ?GetCorpName@GroupManager@GameClient@@QAE_NJAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z_0
 * func-address: 0x101f89a0
 * callers: 0x1000460b
 * callees: 0x1000194c, 0x1000669f, 0x1000a240, 0x1001109a, 0x10011abd, 0x10019a74
 */

char __thiscall GameClient::GroupManager::GetCorpName(_DWORD *this, int a2, int a3, char a4)
{
  _DWORD *v5; // edi
  int v6; // ebx
  int v7; // ebp
  int v8; // ebx
  _DWORD *v9; // esi
  _DWORD *v10; // edi
  int v11; // eax
  int v13; // [esp-8h] [ebp-24h]
  int v14; // [esp-4h] [ebp-20h]
  _DWORD *v15; // [esp+10h] [ebp-Ch] BYREF
  int v16; // [esp+14h] [ebp-8h]

  sub_1000A240((int)&v15, (int)&a2);
  v5 = v15;
  v6 = this[61];
  if ( !v15 || v15 != this + 60 )
    _invalid_parameter_noinfo();
  v7 = v16;
  if ( v16 == v6 )
  {
    if ( a4 )
    {
      v8 = this[57];
      v9 = this + 56;
      v10 = (_DWORD *)sub_1001109A((int)&v15, (int)&a2);
      if ( !*v10 || (_DWORD *)*v10 != v9 )
        _invalid_parameter_noinfo();
      if ( v10[1] == v8 )
      {
        v11 = sub_1000194C(0);
        sub_10011ABD(*(_DWORD *)(v11 + 4), a2);
        sub_1000669F(v13, v14);
        sub_10019A74((int)&v15, (int)&a2);
      }
    }
    return 0;
  }
  else
  {
    if ( !v5 )
      _invalid_parameter_noinfo();
    if ( v7 == v5[1] )
      _invalid_parameter_noinfo();
    std::string::operator=(a3, v7 + 12);
    return 1;
  }
}
