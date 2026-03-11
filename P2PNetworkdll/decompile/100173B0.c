/*
 * func-name: sub_100173B0
 * func-address: 0x100173b0
 * callers: none
 * callees: 0x10015a90, 0x10016750
 */

int __cdecl sub_100173B0(_BYTE *a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v4; // eax
  int result; // eax
  unsigned __int8 *v6; // eax

  v4 = a2;
  if ( a2 == a3 )
    return -4;
  while ( 2 )
  {
    switch ( a1[*v4 + 72] )
    {
      case 3:
        if ( v4 != a2 )
          goto LABEL_9;
        return sub_10015A90(v4 + 1, a1, a3, a4);
      case 5:
        v4 += 2;
        goto LABEL_8;
      case 6:
        v4 += 3;
        goto LABEL_8;
      case 7:
        v4 += 4;
        goto LABEL_8;
      case 9:
        if ( v4 == a2 )
        {
          v6 = v4 + 1;
          if ( v6 == a3 )
          {
            return -3;
          }
          else
          {
            if ( a1[*v6 + 72] == 10 )
              ++v6;
            *a4 = v6;
            return 7;
          }
        }
        else
        {
          *a4 = v4;
          return 6;
        }
      case 0xA:
        if ( v4 != a2 )
          goto LABEL_9;
        *a4 = v4 + 1;
        return 7;
      case 0x1E:
        if ( v4 != a2 )
          goto LABEL_9;
        return sub_10016750(v4 + 1, a1, a3, a4);
      default:
        ++v4;
LABEL_8:
        if ( v4 != a3 )
          continue;
LABEL_9:
        *a4 = v4;
        result = 6;
        break;
    }
    return result;
  }
}
