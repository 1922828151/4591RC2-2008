/*
 * func-name: sub_10013DB0
 * func-address: 0x10013db0
 * callers: 0x10013d70
 * callees: none
 */

int __cdecl sub_10013DB0(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int result; // eax

  switch ( a2 )
  {
    case 15:
      result = 0;
      break;
    case 17:
      *a1 = sub_10013D10;
      result = 6;
      break;
    case 18:
      if ( (*(int (__cdecl **)(int, int, int, const char *))(a5 + 24))(a5, a3, a4, "SYSTEM") )
      {
        *a1 = sub_10013EB0;
        result = 0;
      }
      else
      {
        if ( !(*(int (__cdecl **)(int, int, int, const char *))(a5 + 24))(a5, a3, a4, "PUBLIC") )
          goto LABEL_9;
        *a1 = sub_10013E80;
        result = 0;
      }
      break;
    case 25:
      *a1 = sub_10013F50;
      result = 0;
      break;
    default:
LABEL_9:
      *a1 = sub_10014D60;
      result = -1;
      break;
  }
  return result;
}
