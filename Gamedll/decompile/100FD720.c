/*
 * func-name: sub_100FD720
 * func-address: 0x100fd720
 * callers: 0x100116d5
 * callees: 0x1001836d, 0x100189c6
 */

_DWORD *__thiscall sub_100FD720(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_1001836D();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_100189C6((int)a2);
  return this;
}
