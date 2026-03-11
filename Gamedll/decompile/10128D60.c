/*
 * func-name: sub_10128D60
 * func-address: 0x10128d60
 * callers: 0x1000882d
 * callees: 0x10001c80, 0x100100d2
 */

_DWORD *__thiscall sub_10128D60(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_100100D2();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_10001C80((int)a2);
  return this;
}
