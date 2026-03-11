/*
 * func-name: ??0SampleBullet@@QAE@ABV0@@Z_0
 * func-address: 0x100e5600
 * callers: 0x100133fe
 * callees: none
 */

SampleBullet *__thiscall SampleBullet::SampleBullet(SampleBullet *this, const struct SampleBullet *a2)
{
  Actor::Actor(this, a2);
  *(_DWORD *)this = &SampleBullet::`vftable';
  *((_DWORD *)this + 263) = *((_DWORD *)a2 + 263);
  *((_DWORD *)this + 264) = *((_DWORD *)a2 + 264);
  return this;
}
