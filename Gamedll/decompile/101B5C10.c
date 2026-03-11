/*
 * func-name: sub_101B5C10
 * func-address: 0x101b5c10
 * callers: 0x10006ad2
 * callees: 0x10016aa9, 0x10018dcc
 */

_DWORD *__thiscall sub_101B5C10(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_10016AA9();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_10018DCC((int)a2);
  return this;
}
