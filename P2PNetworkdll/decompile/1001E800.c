/*
 * func-name: sub_1001E800
 * func-address: 0x1001e800
 * callers: 0x10020d60
 * callees: 0x1001e520
 */

_DWORD *__cdecl sub_1001E800(_DWORD *a1, int a2, int a3, int a4)
{
  _BYTE *v5; // eax
  int v6; // esi
  int i; // eax
  char v8; // cl
  _WORD *v9; // ecx
  int v10; // edi
  _BYTE *v11; // esi
  int v12; // ebx
  char v14; // al
  int v15; // eax
  bool v16; // cc
  int v17; // edx
  int v18; // eax
  int v19; // [esp+8h] [ebp-4h]
  _WORD *v20; // [esp+10h] [ebp+4h]

  v5 = a1;
  v6 = 364;
  do
  {
    *v5 = v5[(char *)off_10028908 - (char *)a1];
    ++v5;
    --v6;
  }
  while ( v6 );
  for ( i = 0; i < 128; ++i )
  {
    v8 = byte_10028950[i];
    if ( v8 != 28 && v8 && *(_DWORD *)(a2 + 4 * i) != i )
      return 0;
  }
  v9 = a1 + 93;
  v10 = 0;
  v20 = a1 + 93;
  v11 = a1 + 221;
  do
  {
    v12 = *(_DWORD *)(a2 + 4 * v10);
    if ( v12 == -1 )
    {
      *((_BYTE *)a1 + v10 + 72) = 1;
      *v9 = -1;
      *v11 = 1;
      v11[1] = 0;
      goto LABEL_36;
    }
    if ( v12 < 0 )
    {
      if ( v12 < -4 )
        return 0;
      *((_BYTE *)a1 + v10 + 72) = 3 - v12;
      *v11 = 0;
      *v9 = 0;
      goto LABEL_36;
    }
    if ( v12 >= 128 )
    {
      v15 = v12 >> 8;
      v19 = v12 >> 8;
      if ( v12 >> 8 > 223 )
      {
        if ( v15 == 255 )
        {
          if ( v12 == 65534 || (v16 = v12 <= 0xFFFF, v12 == 0xFFFF) )
          {
LABEL_33:
            *((_BYTE *)a1 + v10 + 72) = 0;
            *v9 = -1;
            *v11 = 1;
            v11[1] = 0;
            goto LABEL_36;
          }
          goto LABEL_27;
        }
      }
      else if ( v15 >= 216 || !v15 && !byte_10028950[v12] )
      {
        goto LABEL_33;
      }
      v16 = v12 <= 0xFFFF;
LABEL_27:
      if ( !v16 )
        return 0;
      v17 = 1 << (v12 & 0x1F);
      v18 = (v12 >> 5) & 7;
      if ( (v17 & dword_10027F10[8 * (unsigned __int8)byte_10028410[v19] + v18]) != 0 )
        *((_BYTE *)a1 + v10 + 72) = 22;
      else
        *((_BYTE *)a1 + v10 + 72) = 2 * ((v17 & dword_10027F10[8 * (unsigned __int8)byte_10028510[v19] + v18]) == 0)
                                  + 26;
      *v11 = sub_1001E520(v12, v11 + 1);
      *v20 = v12;
      v9 = v20;
      goto LABEL_36;
    }
    v14 = byte_10028950[v12];
    if ( v14 != 28 && v14 && v12 != v10 )
      return 0;
    *((_BYTE *)a1 + v10 + 72) = v14;
    *v11 = 1;
    v11[1] = v12;
    if ( !v12 )
      LOWORD(v12) = -1;
    *v9 = v12;
LABEL_36:
    ++v10;
    ++v9;
    v11 += 4;
    v20 = v9;
  }
  while ( v10 < 256 );
  a1[92] = a4;
  a1[91] = a3;
  if ( a3 )
  {
    a1[82] = sub_1001E5C0;
    a1[83] = sub_1001E5C0;
    a1[84] = sub_1001E5C0;
    a1[85] = sub_1001E620;
    a1[86] = sub_1001E620;
    a1[87] = sub_1001E620;
    a1[88] = sub_1001E680;
    a1[89] = sub_1001E680;
    a1[90] = sub_1001E680;
  }
  a1[14] = sub_1001E6F0;
  a1[15] = sub_1001E790;
  return a1;
}
