/*
 * func-name: sub_10064FF0
 * func-address: 0x10064ff0
 * callers: 0x1000cf3b
 * callees: 0x1000bfb9, 0x10015c4e
 */

_DWORD *__thiscall sub_10064FF0(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_10015C4E();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_1000BFB9((int)a2);
  return this;
}
