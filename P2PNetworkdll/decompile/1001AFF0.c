/*
 * func-name: sub_1001AFF0
 * func-address: 0x1001aff0
 * callers: none
 * callees: 0x10017ef0
 */

unsigned __int8 *__cdecl sub_1001AFF0(int a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // edx
  char v3; // al
  int v4; // eax

  v2 = a2;
  while ( 1 )
  {
    v3 = v2[1];
    if ( v3 )
      v4 = sub_10017EF0(v3, *v2);
    else
      v4 = *(unsigned __int8 *)(*v2 + a1 + 72);
    switch ( v4 )
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
        return (unsigned __int8 *)(v2 - a2);
    }
  }
}
