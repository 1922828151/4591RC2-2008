/*
 * func-name: sub_100BD080
 * func-address: 0x100bd080
 * callers: 0x10013570
 * callees: 0x1000daf3
 */

void __thiscall sub_100BD080(struct Model **this)
{
  *this = (struct Model *)&DecalActor::`vftable';
  Precacher::PurgeModel(this + 179);
  Precacher::PurgeTexture(this + 284);
  Effect_Base::~Effect_Base((Effect_Base *)this);
}
