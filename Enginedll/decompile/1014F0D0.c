/*
 * func-name: sub_1014F0D0
 * func-address: 0x1014f0d0
 * callers: 0x1014f720
 * callees: 0x1014e280, 0x1014e8e0
 */

_DWORD *__thiscall sub_1014F0D0(char **this, _DWORD *a2, int a3, char *a4, int a5, char *a6)
{
  char *v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = (char *)sub_1014E280(a6, this[2], a4);
    sub_1014E8E0((int)v7, (int)this[2]);
    this[2] = v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
