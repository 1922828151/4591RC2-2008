/*
 * func-name: sub_1010F5F0
 * func-address: 0x1010f5f0
 * callers: 0x1000de8b
 * callees: 0x10007bf8, 0x10015384
 */

_DWORD *__thiscall sub_1010F5F0(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_10007BF8();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_10015384((int)a2);
  return this;
}
