/*
 * func-name: sub_1001DD00
 * func-address: 0x1001dd00
 * callers: none
 * callees: 0x10017ef0
 */

int __cdecl sub_1001DD00(int a1, int a2)
{
  int v2; // edx
  int v3; // eax

  v2 = a2;
  while ( 1 )
  {
    if ( *(_BYTE *)v2 )
      v3 = sub_10017EF0(*(_BYTE *)v2, *(_BYTE *)(v2 + 1));
    else
      v3 = *(unsigned __int8 *)(*(unsigned __int8 *)(v2 + 1) + a1 + 72);
    switch ( v3 )
    {
      case 5:
      case 22:
      case 24:
      case 25:
      case 26:
      case 27:
      case 29:
        v2 += 2;
        break;
      case 6:
        v2 += 3;
        break;
      case 7:
        v2 += 4;
        break;
      default:
        return v2 - a2;
    }
  }
}
