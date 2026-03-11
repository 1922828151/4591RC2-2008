/*
 * func-name: sub_10157B70
 * func-address: 0x10157b70
 * callers: 0x10010131
 * callees: 0x100039db, 0x1001a1c2
 */

_DWORD *__thiscall sub_10157B70(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_1001A1C2();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_100039DB((int)a2);
  return this;
}
