/*
 * func-name: sub_100655F0
 * func-address: 0x100655f0
 * callers: 0x100014ec
 * callees: 0x100100e6, 0x100105be
 */

_DWORD *__thiscall sub_100655F0(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_100105BE();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_100100E6((int)a2);
  return this;
}
