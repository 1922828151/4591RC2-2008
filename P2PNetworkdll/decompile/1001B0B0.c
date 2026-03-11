/*
 * func-name: sub_1001B0B0
 * func-address: 0x1001b0b0
 * callers: none
 * callees: 0x10017ef0
 */

void __cdecl sub_1001B0B0(int a1, unsigned __int8 *a2, unsigned __int8 *a3, _DWORD *a4)
{
  unsigned __int8 *i; // edx
  char v5; // al
  int v6; // eax
  char v7; // al
  int v8; // eax

  for ( i = a2; i != a3; ++a4[1] )
  {
    v5 = i[1];
    if ( v5 )
      v6 = sub_10017EF0(v5, *i);
    else
      v6 = *(unsigned __int8 *)(*i + a1 + 72);
    switch ( v6 )
    {
      case 6:
        i += 3;
        break;
      case 7:
        i += 4;
        break;
      case 9:
        ++*a4;
        i += 2;
        if ( i != a3 )
        {
          v7 = i[1];
          if ( v7 )
            v8 = sub_10017EF0(v7, *i);
          else
            v8 = *(unsigned __int8 *)(*i + a1 + 72);
          if ( v8 == 10 )
            i += 2;
        }
        a4[1] = -1;
        break;
      case 10:
        ++*a4;
        a4[1] = -1;
        goto LABEL_9;
      default:
LABEL_9:
        i += 2;
        break;
    }
  }
}
