/*
 * func-name: sub_1001CC70
 * func-address: 0x1001cc70
 * callers: none
 * callees: 0x10017ef0
 */

int __usercall sub_1001CC70@<eax>(int a1@<edx>, int a2@<ebx>, int a3@<edi>, int a4, _DWORD *a5)
{
  int v5; // esi
  int v6; // eax
  int result; // eax
  int v8; // eax

  if ( a1 == a3 )
    return -1;
  v5 = a3 - a1;
  while ( 2 )
  {
    if ( *(_BYTE *)a1 )
      v6 = sub_10017EF0(*(_BYTE *)a1, *(_BYTE *)(a1 + 1));
    else
      v6 = *(unsigned __int8 *)(*(unsigned __int8 *)(a1 + 1) + a4 + 72);
    switch ( v6 )
    {
      case 0:
      case 1:
      case 8:
        *a5 = a1;
        return 0;
      case 5:
        if ( v5 < 2 )
          return -2;
        goto LABEL_8;
      case 6:
        if ( v5 < 3 )
          return -2;
        a1 += 3;
        v5 -= 3;
        goto LABEL_9;
      case 7:
        if ( v5 >= 4 )
        {
          a1 += 4;
          v5 -= 4;
LABEL_9:
          if ( a1 == a3 )
            return -1;
          continue;
        }
        return -2;
      case 12:
      case 13:
        a1 += 2;
        v5 -= 2;
        if ( v6 != a2 )
          goto LABEL_9;
        if ( a1 == a3 )
          return -27;
        *a5 = a1;
        if ( *(_BYTE *)a1 )
          v8 = sub_10017EF0(*(_BYTE *)a1, *(_BYTE *)(a1 + 1));
        else
          v8 = *(unsigned __int8 *)(*(unsigned __int8 *)(a1 + 1) + a4 + 72);
        switch ( v8 )
        {
          case 9:
          case 10:
          case 11:
          case 20:
          case 21:
          case 30:
            result = 27;
            break;
          default:
            return 0;
        }
        return result;
      default:
LABEL_8:
        a1 += 2;
        v5 -= 2;
        goto LABEL_9;
    }
  }
}
