/*
 * func-name: sub_10031FF0
 * func-address: 0x10031ff0
 * callers: 0x100325e0
 * callees: 0x1001dc10, 0x10031b20
 */

_DWORD *__thiscall sub_10031FF0(_DWORD *this, _BYTE *a2)
{
  _DWORD *v3; // edi

  v3 = this + 1;
  *(_BYTE *)this = *a2;
  this[2] = sub_1001DC10();
  v3[2] = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_10031B20(this, (int)a2);
  return this;
}
