/*
 * func-name: sub_10021CD0
 * func-address: 0x10021cd0
 * callers: 0x10020130, 0x10021c70, 0x10021cd0
 * callees: 0x1001e520, 0x10021cd0, 0x10022d40, 0x10023030, 0x10023100
 */

int __cdecl sub_10021CD0(_DWORD *a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int result; // eax
  int v11; // edx
  char v12; // al
  int v13; // edx
  _DWORD *v14; // esi
  int v15; // edi
  int v16; // eax
  int v17; // edi
  int v18; // ecx
  int v19; // [esp-8h] [ebp-20h]
  int v20; // [esp+10h] [ebp-8h] BYREF
  _BYTE v21[4]; // [esp+14h] [ebp-4h] BYREF
  int v22; // [esp+20h] [ebp+8h]
  char v23; // [esp+20h] [ebp+8h]

  while ( 2 )
  {
    switch ( (*(int (__cdecl **)(int, int, int, int *))(a2 + 12))(a2, a4, a5, &v20) )
    {
      case -4:
        return 0;
      case -3:
        v20 = a4 + *(_DWORD *)(a2 + 64);
        goto LABEL_17;
      case -1:
        if ( a2 == a1[30] )
          a1[61] = a4;
        return 4;
      case 0:
        if ( a2 == a1[30] )
          a1[61] = v20;
        return 4;
      case 6:
        if ( !sub_10023030(a4) )
          return 1;
        goto LABEL_44;
      case 7:
      case 39:
LABEL_17:
        if ( !a3 && (a6[3] == a6[4] || *(_BYTE *)(a6[3] - 1) == 32) )
          goto LABEL_44;
        if ( a6[3] == a6[2] && !sub_10023100() )
          return 1;
        *(_BYTE *)a6[3] = 32;
        v11 = v20;
        ++a6[3];
        a4 = v11;
        continue;
      case 9:
        v12 = (*(int (__cdecl **)(int, int, int))(a2 + 44))(a2, a4 + *(_DWORD *)(a2 + 64), v20 - *(_DWORD *)(a2 + 64));
        v23 = v12;
        if ( v12 )
        {
          if ( a6[3] == a6[2] )
          {
            if ( !sub_10023100() )
              return 1;
            v12 = v23;
          }
          *(_BYTE *)a6[3] = v12;
          v13 = v20;
          ++a6[3];
          a4 = v13;
          continue;
        }
        v14 = a1;
        if ( !sub_10023030(*(_DWORD *)(a2 + 64) + a4) )
          return 1;
        if ( a1[117] == a1[116] )
        {
          if ( !sub_10023100() )
            return 1;
          v14 = a1;
        }
        *(_BYTE *)a1[117]++ = 0;
        v15 = a1[118];
        if ( !v15 )
          return 1;
        v16 = sub_10022D40(v15, 0);
        v17 = v16;
        v14[117] = v14[118];
        if ( !v16 )
        {
          if ( v14[94] )
          {
            if ( a2 == v14[30] )
              v14[61] = a4;
            return 11;
          }
          goto LABEL_44;
        }
        if ( *(_BYTE *)(v16 + 28) )
        {
          if ( a2 == v14[30] )
            v14[61] = a4;
          return 12;
        }
        if ( *(_DWORD *)(v16 + 24) )
        {
          if ( a2 == v14[30] )
            v14[61] = a4;
          return 15;
        }
        v18 = *(_DWORD *)(v16 + 4);
        if ( !v18 )
        {
          if ( a2 == v14[30] )
            v14[61] = a4;
          return 16;
        }
        v19 = v18 + *(_DWORD *)(v16 + 8);
        *(_BYTE *)(v16 + 28) = 1;
        result = sub_10021CD0(v14, v14[50], a3, v18, v19, a6);
        *(_BYTE *)(v17 + 28) = 0;
        if ( result )
          return result;
        a4 = v20;
        continue;
      case 10:
        v7 = (*(int (__cdecl **)(int, int))(a2 + 40))(a2, a4);
        if ( v7 < 0 )
          goto LABEL_52;
        if ( !a3 && v7 == 32 && (a6[3] == a6[4] || *(_BYTE *)(a6[3] - 1) == 32) )
          goto LABEL_44;
        v8 = sub_1001E520(v7, v21);
        v22 = v8;
        if ( v8 )
        {
          v9 = 0;
          if ( v8 <= 0 )
          {
LABEL_44:
            a4 = v20;
          }
          else
          {
            do
            {
              if ( a6[3] == a6[2] )
              {
                if ( !sub_10023100() )
                  return 1;
                v8 = v22;
              }
              *(_BYTE *)a6[3]++ = v21[v9++];
            }
            while ( v9 < v8 );
            a4 = v20;
          }
          continue;
        }
LABEL_52:
        if ( a2 == a1[30] )
          a1[61] = a4;
        return 14;
      default:
        abort();
    }
  }
}
