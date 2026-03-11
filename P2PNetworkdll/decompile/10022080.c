/*
 * func-name: sub_10022080
 * func-address: 0x10022080
 * callers: 0x10020f30
 * callees: 0x1001e520, 0x10023030, 0x10023100
 */

int __usercall sub_10022080@<eax>(int a1@<eax>, _DWORD *a2, int a3, int a4)
{
  _DWORD *v4; // ebx
  int v5; // ebp
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  int v10; // edi
  _BYTE v12[4]; // [esp+10h] [ebp-4h] BYREF

  v4 = a2;
  v5 = a3;
LABEL_2:
  while ( 2 )
  {
    switch ( (*(int (__cdecl **)(int, int, int, int *))(v5 + 16))(v5, a1, a4, &a3) )
    {
      case -4:
        return 0;
      case -3:
        a3 = a1 + *(_DWORD *)(v5 + 64);
        goto LABEL_6;
      case -1:
        if ( v5 != v4[30] )
          return 4;
        v4[61] = a1;
        return 4;
      case 0:
        if ( v5 == v4[30] )
          v4[61] = a3;
        return 4;
      case 6:
      case 9:
        if ( sub_10023030(a1) )
          goto LABEL_4;
        return 1;
      case 7:
LABEL_6:
        if ( a2[91] == a2[92] && !sub_10023100() )
          return 1;
        *(_BYTE *)a2[92]++ = 10;
        a1 = a3;
        continue;
      case 10:
        v7 = (*(int (__cdecl **)(int, int))(v5 + 40))(v5, a1);
        if ( v7 < 0 )
        {
          if ( v5 == v4[30] )
            v4[61] = a1;
          return 14;
        }
        else
        {
          v8 = sub_1001E520(v7, v12);
          v9 = v8;
          if ( v8 )
          {
            v10 = 0;
            if ( v8 <= 0 )
            {
LABEL_4:
              v4 = a2;
              a1 = a3;
              continue;
            }
            while ( a2[91] != a2[92] || sub_10023100() )
            {
              *(_BYTE *)a2[92]++ = v12[v10];
              if ( ++v10 >= v9 )
              {
                v4 = a2;
                a1 = a3;
                goto LABEL_2;
              }
            }
            return 1;
          }
          else
          {
            if ( v5 == a2[30] )
              a2[61] = a1;
            return 14;
          }
        }
      case 28:
        v4[61] = a1;
        return 2;
      default:
        abort();
    }
  }
}
