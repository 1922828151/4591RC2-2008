/*
 * func-name: sub_10065170
 * func-address: 0x10065170
 * callers: 0x100024c3
 * callees: 0x100118fb, 0x100185a2
 */

_DWORD *__thiscall sub_10065170(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_100185A2();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_100118FB((int)a2);
  return this;
}
