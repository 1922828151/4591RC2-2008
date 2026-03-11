/*
 * func-name: sub_10013C70
 * func-address: 0x10013c70
 * callers: 0x10013ba0
 * callees: none
 */

int __cdecl sub_10013C70(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int result; // eax

  switch ( a2 )
  {
    case 11:
    case 13:
    case 14:
    case 15:
      result = 0;
      break;
    case 16:
      if ( !(*(int (__cdecl **)(int, int, int, const char *))(a5 + 24))(
              a5,
              a3 + 2 * *(_DWORD *)(a5 + 64),
              a4,
              "DOCTYPE") )
        goto LABEL_6;
      *a1 = sub_10013D70;
      result = 0;
      break;
    case 29:
      *a1 = sub_10014D60;
      result = 2;
      break;
    default:
LABEL_6:
      *a1 = sub_10014D60;
      result = -1;
      break;
  }
  return result;
}
