/*
 * func-name: sub_1001DDE0
 * func-address: 0x1001dde0
 * callers: none
 * callees: 0x10017ef0
 */

void __cdecl sub_1001DDE0(int a1, int a2, int a3, _DWORD *a4)
{
  int i; // edx
  int v5; // eax
  int v6; // eax

  for ( i = a2; i != a3; ++a4[1] )
  {
    if ( *(_BYTE *)i )
      v5 = sub_10017EF0(*(_BYTE *)i, *(_BYTE *)(i + 1));
    else
      v5 = *(unsigned __int8 *)(*(unsigned __int8 *)(i + 1) + a1 + 72);
    switch ( v5 )
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
          if ( *(_BYTE *)i )
            v6 = sub_10017EF0(*(_BYTE *)i, *(_BYTE *)(i + 1));
          else
            v6 = *(unsigned __int8 *)(*(unsigned __int8 *)(i + 1) + a1 + 72);
          if ( v6 == 10 )
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
