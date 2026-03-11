/*
 * func-name: sub_100653B0
 * func-address: 0x100653b0
 * callers: 0x1000e3db
 * callees: 0x1000ee5d, 0x10014fb5
 */

_DWORD *__thiscall sub_100653B0(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_10014FB5();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_1000EE5D((int)a2);
  return this;
}
