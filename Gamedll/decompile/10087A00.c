/*
 * func-name: ??1Effect_LightBeam@@UAE@XZ_0
 * func-address: 0x10087a00
 * callers: 0x1000f7ae
 * callees: 0x1000daf3
 */

void __thiscall Effect_LightBeam::~Effect_LightBeam(struct Texture **this)
{
  *this = (struct Texture *)&Effect_LightBeam::`vftable';
  Precacher::PurgeTexture(this + 295);
  Precacher::PurgeModel(this + 179);
  Effect_Base::~Effect_Base((Effect_Base *)this);
}
