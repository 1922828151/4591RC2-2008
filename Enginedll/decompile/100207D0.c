/*
 * func-name: sub_100207D0
 * func-address: 0x100207d0
 * callers: 0x10023a80
 * callees: 0x1001c770
 */

_DWORD *__thiscall sub_100207D0(char **this, _DWORD *a2, int a3, int a4, int a5, char *a6)
{
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( (char *)a4 != a6 )
    this[2] = (char *)sub_1001C770(a6, this[2], a4);
  result = a2;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
