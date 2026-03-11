/*
 * func-name: sub_10017920
 * func-address: 0x10017920
 * callers: none
 * callees: none
 */

int __cdecl sub_10017920(int a1, _BYTE *a2, int a3)
{
  switch ( a3 - (_DWORD)a2 )
  {
    case 2:
      if ( a2[1] == 116 )
      {
        if ( *a2 == 103 )
          return 62;
        if ( *a2 == 108 )
          return 60;
      }
      break;
    case 3:
      if ( *a2 == 97 && a2[1] == 109 && a2[2] == 112 )
        return 38;
      break;
    case 4:
      if ( *a2 == 97 )
      {
        if ( a2[1] == 112 && a2[2] == 111 && a2[3] == 115 )
          return 39;
      }
      else if ( *a2 == 113 && a2[1] == 117 && a2[2] == 111 && a2[3] == 116 )
      {
        return 34;
      }
      break;
  }
  return 0;
}
