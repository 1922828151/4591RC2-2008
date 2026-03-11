/*
 * func-name: ?AddInBlockers@PRTSettings@@QAEXAAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
 * func-address: 0x1002d4c0
 * callers: none
 * callees: 0x100116a0, 0x100993b0
 */

unsigned int __thiscall PRTSettings::AddInBlockers(char *this, int a2)
{
  unsigned int v4; // esi
  unsigned int result; // eax
  _DWORD *v6; // edi
  unsigned int v7; // ebp
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // esi
  char v12; // al
  int v13; // eax
  int i; // [esp+Ch] [ebp-8h]
  unsigned int v15; // [esp+10h] [ebp-4h]
  int v16; // [esp+18h] [ebp+4h]

  v4 = 0;
  v15 = 0;
  result = sub_100993B0(a2);
  if ( result )
  {
    v6 = this + 2231;
    v16 = 0;
    do
    {
      v7 = 0;
      for ( i = 0; ; i += 28 )
      {
        v8 = v6[1];
        if ( !v8 || v7 >= (v6[2] - v8) / 28 )
          break;
        v9 = *(_DWORD *)(a2 + 4);
        if ( !v9 || v4 >= (*(_DWORD *)(a2 + 8) - v9) / 28 )
          invalid_parameter_noinfo();
        v10 = v6[1];
        v11 = v16 + *(_DWORD *)(a2 + 4);
        if ( !v10 || v7 >= (v6[2] - v10) / 28 )
          invalid_parameter_noinfo();
        v12 = std::operator==<char>(i + v6[1], v11);
        v4 = v15;
        if ( v12 )
          goto LABEL_18;
        ++v7;
      }
      v13 = *(_DWORD *)(a2 + 4);
      if ( !v13 || v4 >= (*(_DWORD *)(a2 + 8) - v13) / 28 )
        invalid_parameter_noinfo();
      sub_100116A0(v6, (void *)(v16 + *(_DWORD *)(a2 + 4)));
LABEL_18:
      v16 += 28;
      v15 = ++v4;
      result = sub_100993B0(a2);
    }
    while ( v4 < result );
  }
  return result;
}
