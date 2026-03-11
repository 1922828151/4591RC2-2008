/*
 * func-name: sub_100509D0
 * func-address: 0x100509d0
 * callers: none
 * callees: 0x10052ae0, 0x10104470
 */

int __thiscall sub_100509D0(_DWORD *this, int a2, _DWORD *a3)
{
  _DWORD *v3; // edi
  unsigned int i; // ebp
  int v5; // esi
  int v6; // ecx
  unsigned int j; // ebx
  int v8; // ecx
  int v9; // esi
  int v10; // ecx
  int v11; // esi
  int *v12; // ebp
  int v13; // ecx
  int v14; // esi
  int v15; // ecx
  int v16; // esi
  unsigned int v18; // [esp+10h] [ebp-8h]

  v3 = this;
  (*(void (__thiscall **)(_DWORD *, int, int))(*a3 + 28))(a3, this[1] + 868, this[1] + 856);
  *(_DWORD *)(v3[1] + 716) = a3;
  for ( i = 0; ; ++i )
  {
    v5 = *(_DWORD *)(v3[1] + 712);
    v6 = *(_DWORD *)(v5 + 3240);
    v18 = i;
    if ( !v6 || i >= (*(_DWORD *)(v5 + 3244) - v6) >> 2 )
      break;
    if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v5 + 3240) + 4 * i) + 421) && *(_BYTE *)(v3[1] + 421) )
    {
      for ( j = 0; ; ++j )
      {
        v8 = a3[73];
        if ( !v8 || j >= (a3[74] - v8) >> 2 )
          break;
        v9 = *(_DWORD *)(this[1] + 712);
        v10 = *(_DWORD *)(v9 + 3240);
        v11 = v9 + 3236;
        v12 = (int *)(a3[73] + 4 * j);
        if ( !v10 || v18 >= (*(_DWORD *)(v11 + 8) - v10) >> 2 )
          invalid_parameter_noinfo();
        v13 = *v12;
        i = v18;
        if ( v13 == *(_DWORD *)(4 * v18 + *(_DWORD *)(v11 + 4)) )
          goto LABEL_18;
      }
      v14 = *(_DWORD *)(this[1] + 712);
      v15 = *(_DWORD *)(v14 + 3240);
      v16 = v14 + 3236;
      if ( !v15 || i >= (*(_DWORD *)(v16 + 8) - v15) >> 2 )
        invalid_parameter_noinfo();
      sub_10052AE0((int)(a3 + 72), 4 * i + *(_DWORD *)(v16 + 4));
      ++a3[76];
LABEL_18:
      v3 = this;
    }
  }
  return sub_10104470(v3[1]);
}
