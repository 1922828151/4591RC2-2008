/*
 * func-name: sub_1007A870
 * func-address: 0x1007a870
 * callers: 0x100131a1
 * callees: 0x100018b1, 0x1000e205
 */

_DWORD *__thiscall sub_1007A870(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_100018B1();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_1000E205((int)a2);
  return this;
}
