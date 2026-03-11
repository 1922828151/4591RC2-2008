/*
 * func-name: ??1SampleBullet@@UAE@XZ_0
 * func-address: 0x100e5e60
 * callers: 0x1000b2ad
 * callees: none
 */

void __thiscall SampleBullet::~SampleBullet(struct ActorGroup **this)
{
  *this = (struct ActorGroup *)&SampleBullet::`vftable';
  Precacher::PurgeActorGroup(this + 263);
  Precacher::PurgeSound(this + 264);
  Actor::~Actor((Actor *)this);
}
