/*
 * func-name: sub_10017800
 * func-address: 0x10017800
 * callers: none
 * callees: none
 */

int __cdecl sub_10017800(int a1, int a2)
{
  char v2; // cl
  int v3; // edx
  int result; // eax
  char v5; // cl
  int i; // edx
  int v7; // ecx
  bool v8; // zf

  v2 = *(_BYTE *)(a2 + 2);
  v3 = a2 + 2;
  result = 0;
  if ( v2 == 120 )
  {
    v5 = *(_BYTE *)(a2 + 3);
    for ( i = a2 + 3; v5 != 59; v5 = *(_BYTE *)++i )
    {
      switch ( v5 )
      {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
          result = (v5 - 48) | (16 * result);
          break;
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
          result = 16 * result + v5 - 55;
          break;
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
          result = 16 * result + v5 - 87;
          break;
        default:
          break;
      }
      if ( result >= 1114112 )
        return -1;
    }
  }
  else
  {
    for ( ; v2 != 59; v2 = *(_BYTE *)++v3 )
    {
      result = v2 + 10 * result - 48;
      if ( result >= 1114112 )
        return -1;
    }
  }
  v7 = result >> 8;
  if ( result >> 8 > 223 )
  {
    if ( v7 != 255 )
      return result;
    if ( result == 65534 )
      return -1;
    v8 = result == 0xFFFF;
LABEL_20:
    if ( !v8 )
      return result;
    return -1;
  }
  if ( v7 < 216 )
  {
    if ( v7 )
      return result;
    v8 = byte_10028950[result] == 0;
    goto LABEL_20;
  }
  return -1;
}
