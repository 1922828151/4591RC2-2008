/*
 * func-name: sub_10013430
 * func-address: 0x10013430
 * callers: 0x10013360
 * callees: none
 */

int __cdecl sub_10013430(int a1, const char *a2)
{
  int result; // eax

  result = 0;
  if ( !strcmp(a2, "NewExternalIPAddress") )
    *(_DWORD *)(a1 + 4) = 1;
  return result;
}
