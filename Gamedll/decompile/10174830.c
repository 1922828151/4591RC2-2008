/*
 * func-name: ?IsMatching@Robot@GameClient@@SA_NABV?$vector@PAVFSystemPart@GameClient@@V?$allocator@PAVFSystemPart@GameClient@@@std@@@std@@PAVFSystemPart@2@@Z_0
 * func-address: 0x10174830
 * callers: 0x1000e7b4
 * callees: 0x100050d8
 */

char __cdecl GameClient::Robot::IsMatching(int a1, int a2)
{
  unsigned int v2; // edi
  int v3; // ebp
  int v4; // ebx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  char v11; // [esp+13h] [ebp-9h]
  int v12; // [esp+14h] [ebp-8h]
  int v13; // [esp+18h] [ebp-4h]

  v2 = 0;
  v11 = *(_BYTE *)(a2 + 332);
  v3 = 0;
  v4 = 0;
  v12 = 0;
  v13 = 0;
  if ( sub_100050D8() )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(a1 + 4);
      if ( !v5 || v2 >= (*(_DWORD *)(a1 + 8) - v5) >> 2 )
        _invalid_parameter_noinfo();
      v6 = *(_DWORD *)(a1 + 4);
      v3 += *(_DWORD *)(*(_DWORD *)(v6 + 4 * v2) + 200);
      if ( !v6 || v2 >= (*(_DWORD *)(a1 + 8) - v6) >> 2 )
        _invalid_parameter_noinfo();
      v7 = *(_DWORD *)(a1 + 4);
      v4 += *(_DWORD *)(*(_DWORD *)(v7 + 4 * v2) + 204);
      if ( !v7 || v2 >= (*(_DWORD *)(a1 + 8) - v7) >> 2 )
        _invalid_parameter_noinfo();
      v8 = *(_DWORD *)(a1 + 4);
      if ( !*(_DWORD *)(*(_DWORD *)(v8 + 4 * v2) + 196) )
      {
        if ( !v8 || v2 >= (*(_DWORD *)(a1 + 8) - v8) >> 2 )
          _invalid_parameter_noinfo();
        v8 = *(_DWORD *)(a1 + 4);
        v12 = *(_DWORD *)(*(_DWORD *)(v8 + 4 * v2) + 380);
      }
      if ( !v8 || v2 >= (*(_DWORD *)(a1 + 8) - v8) >> 2 )
        _invalid_parameter_noinfo();
      v9 = *(_DWORD *)(a1 + 4);
      if ( *(_DWORD *)(*(_DWORD *)(v9 + 4 * v2) + 196) == 2 )
      {
        if ( !v9 || v2 >= (*(_DWORD *)(a1 + 8) - v9) >> 2 )
          _invalid_parameter_noinfo();
        v9 = *(_DWORD *)(a1 + 4);
        v13 = *(_DWORD *)(*(_DWORD *)(v9 + 4 * v2) + 272);
      }
      if ( v11 )
      {
        if ( !v9 || v2 >= (*(_DWORD *)(a1 + 8) - v9) >> 2 )
          _invalid_parameter_noinfo();
        if ( a2 == *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v2) )
          break;
      }
      if ( ++v2 >= sub_100050D8() )
        goto LABEL_30;
    }
  }
  else
  {
LABEL_30:
    if ( v3 + *(_DWORD *)(a2 + 200) <= v12 && v4 + *(_DWORD *)(a2 + 204) <= v13 )
      return 1;
  }
  return 0;
}
