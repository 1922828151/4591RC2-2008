/*
 * func-name: ??1Effect_Laser@@UAE@XZ_0
 * func-address: 0x100802a0
 * callers: 0x1001a677
 * callees: 0x1000daf3
 */

void __thiscall Effect_Laser::~Effect_Laser(struct Model **this)
{
  *this = (struct Model *)&Effect_Laser::`vftable';
  Precacher::PurgeModel(this + 179);
  Precacher::PurgeTexture(this + 285);
  Effect_Base::~Effect_Base((Effect_Base *)this);
}
