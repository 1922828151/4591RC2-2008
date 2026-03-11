/*
 * func-name: ??4SampleBullet@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x100e5650
 * callers: 0x10012328
 * callees: none
 */

_DWORD *__thiscall SampleBullet::operator=(_DWORD *this, int a2)
{
  Actor::operator=(a2);
  this[263] = *(_DWORD *)(a2 + 1052);
  this[264] = *(_DWORD *)(a2 + 1056);
  return this;
}
