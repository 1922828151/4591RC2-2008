/*
 * func-name: ??1Effect_DynamicLasers@@UAE@XZ_0
 * func-address: 0x1007f230
 * callers: 0x100173d2
 * callees: 0x1000daf3
 */

void __thiscall Effect_DynamicLasers::~Effect_DynamicLasers(struct Model **this)
{
  *this = (struct Model *)&Effect_DynamicLasers::`vftable';
  Precacher::PurgeModel(this + 179);
  Precacher::PurgeTexture(this + 284);
  Effect_Base::~Effect_Base((Effect_Base *)this);
}
