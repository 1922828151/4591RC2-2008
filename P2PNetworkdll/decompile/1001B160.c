/*
 * func-name: sub_1001B160
 * func-address: 0x1001b160
 * callers: 0x1001b280, 0x1001c330
 * callees: 0x10017ef0
 */

int __usercall sub_1001B160@<eax>(char *a1@<edx>, char *a2@<edi>, int a3, char **a4)
{
  char *v4; // edx
  int v5; // esi
  int v6; // eax
  char *v8; // edx

  if ( a1 == a2 )
    return -1;
  if ( !*a1 && a1[1] == 45 )
  {
    v4 = a1 + 2;
    if ( v4 != a2 )
    {
      v5 = a2 - v4;
      while ( 1 )
      {
        if ( *v4 )
          v6 = sub_10017EF0(*v4, v4[1]);
        else
          v6 = *(unsigned __int8 *)((unsigned __int8)v4[1] + a3 + 72);
        switch ( v6 )
        {
          case 0:
          case 1:
          case 8:
            *a4 = v4;
            return 0;
          case 5:
            if ( v5 < 2 )
              return -2;
            goto LABEL_11;
          case 6:
            if ( v5 < 3 )
              return -2;
            v4 += 3;
            v5 -= 3;
            goto LABEL_12;
          case 7:
            if ( v5 < 4 )
              return -2;
            v4 += 4;
            v5 -= 4;
LABEL_12:
            if ( v4 == a2 )
              return -1;
            break;
          case 27:
            v4 += 2;
            v5 -= 2;
            if ( v4 == a2 )
              return -1;
            if ( *v4 || v4[1] != 45 )
              goto LABEL_12;
            v8 = v4 + 2;
            if ( v8 == a2 )
              return -1;
            if ( *v8 || v8[1] != 62 )
            {
              *a4 = v8;
              return 0;
            }
            else
            {
              *a4 = v8 + 2;
              return 13;
            }
          default:
LABEL_11:
            v4 += 2;
            v5 -= 2;
            goto LABEL_12;
        }
      }
    }
    return -1;
  }
  *a4 = a1;
  return 0;
}
