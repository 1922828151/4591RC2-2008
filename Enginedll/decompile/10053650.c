/*
 * func-name: sub_10053650
 * func-address: 0x10053650
 * callers: 0x10053b70, 0x10144030
 * callees: 0x10052e90, 0x10053240
 */

_DWORD *__thiscall sub_10053650(char **this, _DWORD *a2, int a3, int a4, int a5, char *a6)
{
  int v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( (char *)a4 != a6 )
  {
    v7 = sub_10052E90(a6, this[2], a4);
    sub_10053240(v7, (int)this[2]);
    this[2] = (char *)v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
