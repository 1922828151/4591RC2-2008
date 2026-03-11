/*
 * func-name: ?RemoveOutBlockers@PRTSettings@@QAEXAAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
 * func-address: 0x100290f0
 * callers: none
 * callees: 0x100246c0, 0x100993b0
 */

unsigned int __thiscall PRTSettings::RemoveOutBlockers(char *this, int a2)
{
  unsigned int result; // eax
  int *v5; // esi
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // [esp+Ch] [ebp-18h]
  int v14; // [esp+10h] [ebp-14h]
  int v15; // [esp+1Ch] [ebp-8h] BYREF
  int i; // [esp+28h] [ebp+4h]

  v13 = 0;
  result = sub_100993B0(a2);
  if ( result )
  {
    v5 = (int *)(this + 2247);
    v14 = 0;
    do
    {
      v6 = 0;
      for ( i = 0; ; i += 28 )
      {
        v7 = v5[1];
        if ( !v7 || v6 >= (v5[2] - v7) / 28 )
          break;
        v8 = *(_DWORD *)(a2 + 4);
        if ( !v8 || v13 >= (*(_DWORD *)(a2 + 8) - v8) / 28 )
          invalid_parameter_noinfo();
        v9 = v5[1];
        v10 = v14 + *(_DWORD *)(a2 + 4);
        if ( !v9 || v6 >= (v5[2] - v9) / 28 )
          invalid_parameter_noinfo();
        if ( (unsigned __int8)std::operator==<char>(i + v5[1], v10) )
        {
          v11 = v5[1];
          if ( v11 > v5[2] )
            invalid_parameter_noinfo();
          v12 = v11 + 28 * v6;
          if ( v12 > v5[2] || v12 < v5[1] )
            invalid_parameter_noinfo();
          sub_100246C0(v5, &v15, (int)v5, v12);
          break;
        }
        ++v6;
      }
      v14 += 28;
      ++v13;
      result = sub_100993B0(a2);
    }
    while ( v13 < result );
  }
  return result;
}
