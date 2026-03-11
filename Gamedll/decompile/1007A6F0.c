/*
 * func-name: sub_1007A6F0
 * func-address: 0x1007a6f0
 * callers: 0x1000f786
 * callees: 0x1000634d, 0x1001462d
 */

_DWORD *__thiscall sub_1007A6F0(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_1001462D();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_1000634D((int)a2);
  return this;
}
