/*
 * func-name: sub_10002260
 * func-address: 0x10002260
 * callers: 0x10002a00
 * callees: 0x10001610
 */

_DWORD *__thiscall sub_10002260(_DWORD *this, char a2, int a3, const char *a4)
{
  char *v5; // ecx

  this[3] = a3;
  v5 = (char *)(this + 4);
  *(_BYTE *)this = 1;
  *((_BYTE *)this + 8) = a2;
  *((_DWORD *)v5 + 5) = 15;
  *((_DWORD *)v5 + 4) = 0;
  *v5 = 0;
  *((_DWORD *)v5 + 6) = 0;
  sub_10001610(v5, a4);
  this[1] = strlen(a4) + 9;
  return this;
}
