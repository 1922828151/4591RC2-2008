/*
 * func-name: sub_1016CC60
 * func-address: 0x1016cc60
 * callers: 0x10018d68
 * callees: 0x1000e282, 0x100180f7
 */

_DWORD *__thiscall sub_1016CC60(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_1000E282();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_100180F7((int)a2);
  return this;
}
