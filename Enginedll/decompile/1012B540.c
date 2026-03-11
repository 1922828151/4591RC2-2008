/*
 * func-name: sub_1012B540
 * func-address: 0x1012b540
 * callers: 0x1012bf70
 * callees: 0x1012b250
 */

_DWORD *__thiscall sub_1012B540(char **this, _DWORD *a2, int a3, int a4, int a5, char *a6)
{
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( (char *)a4 != a6 )
    this[2] = (char *)sub_1012B250(a6, this[2], a4);
  result = a2;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
