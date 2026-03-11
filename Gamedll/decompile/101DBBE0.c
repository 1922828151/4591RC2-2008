/*
 * func-name: sub_101DBBE0
 * func-address: 0x101dbbe0
 * callers: 0x10005614
 * callees: 0x1000fa65, 0x10014b55
 */

_DWORD *__thiscall sub_101DBBE0(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_10014B55();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_1000FA65((int)a2);
  return this;
}
