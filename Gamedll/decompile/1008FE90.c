/*
 * func-name: ??1Effect_ParticleSystem@@UAE@XZ_0
 * func-address: 0x1008fe90
 * callers: 0x1000e174
 * callees: 0x1000daf3
 */

void __thiscall Effect_ParticleSystem::~Effect_ParticleSystem(struct Texture **this)
{
  *this = (struct Texture *)&Effect_ParticleSystem::`vftable';
  Precacher::PurgeTexture(this + 319);
  Precacher::PurgeModel(this + 179);
  Effect_Base::~Effect_Base((Effect_Base *)this);
}
