/*
 * func-name: sub_10022690
 * func-address: 0x10022690
 * callers: 0x10020130, 0x10020f30
 * callees: 0x10022d40, 0x10023030, 0x10023100
 */

_DWORD *__cdecl sub_10022690(_DWORD *a1, int a2, int a3)
{
  int v4; // ebx
  char *v5; // ebx
  _DWORD *result; // eax
  _DWORD *v7; // edx
  bool v8; // zf
  char v9; // cl
  char v10; // al
  int v11; // eax
  int v12; // edi
  int v13; // ecx
  _DWORD *v14; // eax
  int v15; // ecx
  int i; // [esp+8h] [ebp-4h]
  _DWORD *v17; // [esp+10h] [ebp+4h]

  if ( a1[92] == a1[91] && !sub_10023100() )
    return 0;
  *(_BYTE *)a1[92]++ = 0;
  if ( !sub_10023030(a3) || a1[92] == a1[91] && !sub_10023100() )
    return 0;
  *(_BYTE *)a1[92] = 0;
  v4 = a1[93];
  ++a1[92];
  if ( !v4 )
    return 0;
  v5 = (char *)(v4 + 1);
  result = (_DWORD *)sub_10022D40((int)v5, 0xCu);
  v7 = result;
  v17 = result;
  if ( !result )
    return 0;
  if ( (char *)*result != v5 )
  {
    a1[92] = a1[93];
    return result;
  }
  v8 = a1[52] == 0;
  a1[93] = a1[92];
  if ( !v8 )
  {
    v9 = *v5;
    if ( *v5 == 120 && v5[1] == 109 && v5[2] == 108 && v5[3] == 110 && v5[4] == 115 )
    {
      v10 = v5[5];
      if ( !v10 )
      {
        v7[1] = a1 + 96;
        *((_BYTE *)v7 + 9) = 1;
        return v7;
      }
      if ( v10 == 58 )
      {
        v17[1] = sub_10022D40((int)(v5 + 6), 8u);
        *((_BYTE *)v17 + 9) = 1;
        return v17;
      }
    }
    v11 = 0;
    if ( v9 )
    {
      while ( v9 != 58 )
      {
        v9 = v5[++v11];
        if ( !v9 )
          return v7;
      }
      v12 = 0;
      for ( i = v11; v12 < v11; ++v12 )
      {
        if ( a1[92] == a1[91] )
        {
          if ( !sub_10023100() )
            return 0;
          v11 = i;
        }
        *(_BYTE *)a1[92]++ = v5[v12];
      }
      if ( a1[92] != a1[91] || sub_10023100() )
      {
        *(_BYTE *)a1[92] = 0;
        v13 = a1[93];
        ++a1[92];
        v14 = (_DWORD *)sub_10022D40(v13, 8u);
        v7 = v17;
        v17[1] = v14;
        v15 = a1[93];
        if ( *v14 == v15 )
        {
          a1[93] = a1[92];
          return v17;
        }
        a1[92] = v15;
        return v7;
      }
      return 0;
    }
  }
  return v7;
}
