/*
 * func-name: ??1Effect_LaserParticle@@UAE@XZ_0
 * func-address: 0x10082240
 * callers: 0x100097a5
 * callees: 0x1000daf3
 */

void __thiscall Effect_LaserParticle::~Effect_LaserParticle(struct Texture **this)
{
  *this = (struct Texture *)&Effect_LaserParticle::`vftable';
  Precacher::PurgeTexture(this + 311);
  Precacher::PurgeModel(this + 179);
  Effect_Base::~Effect_Base((Effect_Base *)this);
}
