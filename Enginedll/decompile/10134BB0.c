/*
 * func-name: sub_10134BB0
 * func-address: 0x10134bb0
 * callers: 0x10134090
 * callees: 0x1012b2b0
 */

_DWORD *__thiscall sub_10134BB0(char **this, _DWORD *a2, int a3, int a4)
{
  _DWORD *result; // eax

  sub_1012B2B0((char *)(a4 + 176), this[2], a4);
  result = a2;
  this[2] -= 176;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
