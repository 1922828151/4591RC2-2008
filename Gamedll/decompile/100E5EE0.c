/*
 * func-name: ?Tick@SampleBullet@@UAEXXZ_0
 * func-address: 0x100e5ee0
 * callers: 0x10010dd4
 * callees: none
 */

void __thiscall SampleBullet::Tick(ActorGroup **this)
{
  ActorGroup::SetTransform(this[263], (struct Vector *)(this + 214), (struct Matrix *)(this + 217));
  Actor::Tick((Actor *)this);
}
