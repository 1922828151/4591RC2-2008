/*
 * func-name: ??4NxPhysics@@QAEAAV0@ABV0@@Z
 * func-address: 0x10054100
 * callers: none
 * callees: 0x10052860, 0x10053800, 0x10053de0, 0x10053f70
 */

_BYTE *__thiscall NxPhysics::operator=(_BYTE *this, int a2)
{
  *this = *(_BYTE *)a2;
  this[1] = *(_BYTE *)(a2 + 1);
  this[2] = *(_BYTE *)(a2 + 2);
  *((_DWORD *)this + 1) = *(_DWORD *)(a2 + 4);
  *((_DWORD *)this + 2) = *(_DWORD *)(a2 + 8);
  *((_DWORD *)this + 3) = *(_DWORD *)(a2 + 12);
  *((_DWORD *)this + 4) = *(_DWORD *)(a2 + 16);
  sub_10053800((int)(this + 24), a2 + 24);
  sub_10053DE0((int)(this + 48), a2 + 48);
  sub_10053F70((int)(this + 64), a2 + 64);
  sub_10052860((_DWORD *)this + 20, (_DWORD *)(a2 + 80));
  *((_DWORD *)this + 24) = *(_DWORD *)(a2 + 96);
  return this;
}
