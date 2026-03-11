/*
 * func-name: sub_1001AC40
 * func-address: 0x1001ac40
 * callers: none
 * callees: none
 */

int __cdecl sub_1001AC40(int a1, int a2)
{
  int result; // eax
  char *v3; // edx
  char v4; // cl
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  bool v8; // zf

  result = 0;
  v3 = (char *)(a2 + 4);
  if ( !*(_BYTE *)(a2 + 5) && *v3 == 120 )
  {
    do
    {
      v4 = v3[3];
      v3 += 2;
      if ( v4 )
      {
        v5 = -1;
      }
      else
      {
        if ( *v3 == 59 )
          goto LABEL_19;
        v5 = *v3;
      }
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
    }
    while ( result < 1114112 );
    return -1;
  }
  while ( v3[1] )
  {
    v6 = -1;
LABEL_17:
    result = v6 + 10 * result - 48;
    if ( result >= 1114112 )
      return -1;
    v3 += 2;
  }
  if ( *v3 != 59 )
  {
    v6 = *v3;
    goto LABEL_17;
  }
LABEL_19:
  v7 = result >> 8;
  if ( result >> 8 > 223 )
  {
    if ( v7 != 255 )
      return result;
    if ( result != 65534 )
    {
      v8 = result == 0xFFFF;
LABEL_26:
      if ( !v8 )
        return result;
    }
  }
  else if ( v7 < 216 )
  {
    if ( v7 )
      return result;
    v8 = byte_10028950[result] == 0;
    goto LABEL_26;
  }
  return -1;
}
