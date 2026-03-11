/*
 * func-name: sub_10157A30
 * func-address: 0x10157a30
 * callers: 0x10015c21
 * callees: 0x100012b7, 0x1000e3ef
 */

_DWORD *__thiscall sub_10157A30(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_1000E3EF();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_100012B7((int)a2);
  return this;
}
