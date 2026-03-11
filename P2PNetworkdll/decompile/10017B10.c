/*
 * func-name: sub_10017B10
 * func-address: 0x10017b10
 * callers: none
 * callees: none
 */

int __cdecl sub_10017B10(int a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // eax
  unsigned int v3; // ecx

  v2 = a2;
  v3 = *(unsigned __int8 *)(*a2 + a1 + 72) - 5;
  while ( 2 )
  {
    switch ( v3 )
    {
      case 0u:
        v2 += 2;
        goto LABEL_7;
      case 1u:
        v2 += 3;
        goto LABEL_7;
      case 2u:
        v2 += 4;
        goto LABEL_7;
      case 0x11u:
      case 0x13u:
      case 0x14u:
      case 0x15u:
      case 0x16u:
      case 0x18u:
        ++v2;
LABEL_7:
        v3 = *(unsigned __int8 *)(*v2 + a1 + 72) - 5;
        if ( v3 > 0x18 )
          return v2 - a2;
        continue;
      default:
        return v2 - a2;
    }
  }
}
