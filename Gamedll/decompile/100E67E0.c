/*
 * func-name: ??0SampleBullet@@QAE@PAVWorld@@@Z_0
 * func-address: 0x100e67e0
 * callers: 0x100025ea
 * callees: 0x10005fbf
 */

SampleBullet *__thiscall SampleBullet::SampleBullet(SampleBullet *this, struct World *a2)
{
  Actor::Actor(this, a2);
  *((float *)this + 196) = -0.0099999998;
  *((float *)this + 197) = -0.0099999998;
  *((float *)this + 199) = 0.0099999998;
  *((float *)this + 198) = -0.0099999998;
  *((float *)this + 200) = 0.0099999998;
  *(_DWORD *)this = &SampleBullet::`vftable';
  *((_DWORD *)this + 183) = 34;
  *((float *)this + 201) = 0.0099999998;
  SampleBullet::LoadResource(this);
  return this;
}
