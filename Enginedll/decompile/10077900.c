/*
 * func-name: ??4ClothSimulator@@QAEAAV0@ABV0@@Z
 * func-address: 0x10077900
 * callers: none
 * callees: 0x10077220, 0x100773f0
 */

_DWORD *__thiscall ClothSimulator::operator=(_DWORD *this, int a2)
{
  sub_10077220((int)this, a2);
  sub_100773F0((int)(this + 4), a2 + 16);
  this[8] = *(_DWORD *)(a2 + 32);
  return this;
}
