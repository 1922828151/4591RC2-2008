/*
 * func-name: sub_100D8BE0
 * func-address: 0x100d8be0
 * callers: 0x1000f736
 * callees: 0x1000b8ca
 */

void __thiscall sub_100D8BE0(ParticleSystem *this)
{
  Texture::~Texture((ParticleSystem *)((char *)this + 356));
  ParticleSystem::~ParticleSystem(this);
}
