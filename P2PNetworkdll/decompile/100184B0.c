/*
 * func-name: sub_100184B0
 * func-address: 0x100184b0
 * callers: 0x100185c0, 0x100195f0
 * callees: 0x10017ef0
 */

int __usercall sub_100184B0@<eax>(
        unsigned __int8 *a1@<edx>,
        int a2@<ebx>,
        unsigned __int8 *a3@<edi>,
        unsigned __int8 **a4)
{
  int v4; // esi
  char v5; // al
  int v6; // eax
  unsigned __int8 *v8; // edx

  if ( a1 == a3 )
    return -1;
  if ( !a1[1] && *a1 == 45 )
  {
    a1 += 2;
    if ( a1 != a3 )
    {
      v4 = a3 - a1;
      while ( 1 )
      {
        v5 = a1[1];
        if ( v5 )
          v6 = sub_10017EF0(v5, *a1);
        else
          v6 = *(unsigned __int8 *)(*a1 + a2 + 72);
        switch ( v6 )
        {
          case 0:
          case 1:
          case 8:
            goto LABEL_27;
          case 5:
            if ( v4 >= 2 )
              goto LABEL_11;
            return -2;
          case 6:
            if ( v4 < 3 )
              return -2;
            a1 += 3;
            v4 -= 3;
            goto LABEL_12;
          case 7:
            if ( v4 < 4 )
              return -2;
            a1 += 4;
            v4 -= 4;
LABEL_12:
            if ( a1 == a3 )
              return -1;
            break;
          case 27:
            a1 += 2;
            v4 -= 2;
            if ( a1 == a3 )
              return -1;
            if ( a1[1] || *a1 != 45 )
              goto LABEL_12;
            v8 = a1 + 2;
            if ( v8 == a3 )
              return -1;
            if ( v8[1] || *v8 != 62 )
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
            a1 += 2;
            v4 -= 2;
            goto LABEL_12;
        }
      }
    }
    return -1;
  }
LABEL_27:
  *a4 = a1;
  return 0;
}
