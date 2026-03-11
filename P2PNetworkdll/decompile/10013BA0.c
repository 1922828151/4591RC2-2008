/*
 * func-name: sub_10013BA0
 * func-address: 0x10013ba0
 * callers: 0x1001ef60
 * callees: none
 */

int __cdecl sub_10013BA0(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int result; // eax

  switch ( a2 )
  {
    case 11:
      *a1 = sub_10013C70;
      return 0;
    case 12:
      *a1 = sub_10013C70;
      return 1;
    case 13:
    case 15:
      *a1 = sub_10013C70;
      return 0;
    case 14:
      return 0;
    case 16:
      if ( !(*(int (__cdecl **)(int, int, int, const char *))(a5 + 24))(
              a5,
              a3 + 2 * *(_DWORD *)(a5 + 64),
              a4,
              "DOCTYPE") )
        goto LABEL_9;
      *a1 = sub_10013D70;
      result = 0;
      break;
    case 29:
      *a1 = sub_10014D60;
      return 2;
    default:
LABEL_9:
      *a1 = sub_10014D60;
      result = -1;
      break;
  }
  return result;
}
