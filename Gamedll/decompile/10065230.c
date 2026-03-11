/*
 * func-name: sub_10065230
 * func-address: 0x10065230
 * callers: 0x100152e9
 * callees: 0x1000678f, 0x1000df2b
 */

_DWORD *__thiscall sub_10065230(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_1000678F();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_1000DF2B((int)a2);
  return this;
}
