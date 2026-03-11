/*
 * func-name: sub_10017BD0
 * func-address: 0x10017bd0
 * callers: none
 * callees: none
 */

unsigned __int8 *__cdecl sub_10017BD0(int a1, unsigned __int8 *a2, unsigned __int8 *a3, _DWORD *a4)
{
  unsigned __int8 *result; // eax

  for ( result = a2; result != a3; ++a4[1] )
  {
    switch ( *(_BYTE *)(*result + a1 + 72) )
    {
      case 5:
        result += 2;
        break;
      case 6:
        result += 3;
        break;
      case 7:
        result += 4;
        break;
      case 9:
        ++*a4;
        if ( ++result != a3 && *(_BYTE *)(*result + a1 + 72) == 10 )
          ++result;
        a4[1] = -1;
        break;
      case 0xA:
        ++*a4;
        a4[1] = -1;
        goto LABEL_7;
      default:
LABEL_7:
        ++result;
        break;
    }
  }
  return result;
}
