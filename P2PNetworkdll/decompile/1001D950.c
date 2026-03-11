/*
 * func-name: sub_1001D950
 * func-address: 0x1001d950
 * callers: none
 * callees: none
 */

int __cdecl sub_1001D950(int a1, int a2)
{
  int result; // eax
  _BYTE *v3; // esi
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  bool v7; // zf

  result = 0;
  v3 = (_BYTE *)(a2 + 4);
  if ( !*(_BYTE *)(a2 + 4) && *(_BYTE *)(a2 + 5) == 120 )
  {
    do
    {
      v3 += 2;
      if ( *v3 )
      {
        v4 = -1;
      }
      else
      {
        LOBYTE(v4) = v3[1];
        if ( (_BYTE)v4 == 59 )
          goto LABEL_19;
        v4 = (char)v4;
      }
      switch ( v4 )
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
          result = (v4 - 48) | (16 * result);
          break;
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
          result = 16 * result + v4 - 55;
          break;
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
          result = 16 * result + v4 - 87;
          break;
        default:
          break;
      }
    }
    while ( result < 1114112 );
    return -1;
  }
  while ( *v3 )
  {
    v5 = -1;
LABEL_17:
    result = v5 + 10 * result - 48;
    if ( result >= 1114112 )
      return -1;
    v3 += 2;
  }
  LOBYTE(v5) = v3[1];
  if ( (_BYTE)v5 != 59 )
  {
    v5 = (char)v5;
    goto LABEL_17;
  }
LABEL_19:
  v6 = result >> 8;
  if ( result >> 8 > 223 )
  {
    if ( v6 != 255 )
      return result;
    if ( result != 65534 )
    {
      v7 = result == 0xFFFF;
LABEL_26:
      if ( !v7 )
        return result;
    }
  }
  else if ( v6 < 216 )
  {
    if ( v6 )
      return result;
    v7 = byte_10028950[result] == 0;
    goto LABEL_26;
  }
  return -1;
}
