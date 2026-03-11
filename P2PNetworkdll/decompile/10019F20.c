/*
 * func-name: sub_10019F20
 * func-address: 0x10019f20
 * callers: none
 * callees: 0x10017ef0
 */

int __usercall sub_10019F20@<eax>(
        unsigned __int8 *a1@<edx>,
        int a2@<ebx>,
        unsigned __int8 *a3@<edi>,
        int a4,
        unsigned __int8 **a5)
{
  int v5; // esi
  char v6; // al
  int v7; // eax
  int result; // eax
  char v9; // al
  int v10; // eax

  if ( a1 == a3 )
    return -1;
  v5 = a3 - a1;
  while ( 2 )
  {
    v6 = a1[1];
    if ( v6 )
      v7 = sub_10017EF0(v6, *a1);
    else
      v7 = *(unsigned __int8 *)(*a1 + a4 + 72);
    switch ( v7 )
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
        if ( v7 != a2 )
          goto LABEL_9;
        if ( a1 == a3 )
          return -27;
        *a5 = a1;
        v9 = a1[1];
        if ( v9 )
          v10 = sub_10017EF0(v9, *a1);
        else
          v10 = *(unsigned __int8 *)(*a1 + a4 + 72);
        switch ( v10 )
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
