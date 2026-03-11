/*
 * func-name: sub_101CA110
 * func-address: 0x101ca110
 * callers: 0x1001a82a
 * callees: 0x10006a0f, 0x10019dd0
 */

_DWORD *__thiscall sub_101CA110(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_10019DD0();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_10006A0F((int)a2);
  return this;
}
