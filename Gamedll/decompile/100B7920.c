/*
 * func-name: ?PostRender@ParticleTrail@@UAEXAAVCamera@@@Z_0
 * func-address: 0x100b7920
 * callers: 0x10001e06
 * callees: 0x100023f1, 0x1001180b
 */

void __thiscall ParticleTrail::PostRender(ParticleTrail *this, struct Camera *a2)
{
  if ( *((int *)this + 62) >= 2 )
  {
    ParticleTrail::RenderTrail(this, a2);
    ParticleTrail::RenderBillboardQuads(this, a2);
  }
}
