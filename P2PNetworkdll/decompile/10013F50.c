/*
 * func-name: sub_10013F50
 * func-address: 0x10013f50
 * callers: 0x10013db0, 0x10014520
 * callees: none
 */

int __cdecl sub_10013F50(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int result; // eax

  switch ( a2 )
  {
    case 11:
    case 13:
    case 15:
      result = 0;
      break;
    case 16:
      if ( (*(int (__cdecl **)(int, int, int, const char *))(a5 + 24))(a5, a3 + 2 * *(_DWORD *)(a5 + 64), a4, "ENTITY") )
      {
        *a1 = sub_10014080;
        result = 0;
      }
      else if ( (*(int (__cdecl **)(int, int, int, const char *))(a5 + 24))(
                  a5,
                  a3 + 2 * *(_DWORD *)(a5 + 64),
                  a4,
                  "ATTLIST") )
      {
        *a1 = sub_100144E0;
        result = 0;
      }
      else if ( (*(int (__cdecl **)(int, int, int, const char *))(a5 + 24))(
                  a5,
                  a3 + 2 * *(_DWORD *)(a5 + 64),
                  a4,
                  "ELEMENT") )
      {
        *a1 = sub_100148B0;
        result = 0;
      }
      else
      {
        if ( !(*(int (__cdecl **)(int, int, int, const char *))(a5 + 24))(
                a5,
                a3 + 2 * *(_DWORD *)(a5 + 64),
                a4,
                "NOTATION") )
          goto LABEL_13;
        *a1 = sub_10014380;
        result = 0;
      }
      break;
    case 26:
      *a1 = sub_10013F20;
      result = 0;
      break;
    case 28:
      result = 48;
      break;
    default:
LABEL_13:
      *a1 = sub_10014D60;
      result = -1;
      break;
  }
  return result;
}
