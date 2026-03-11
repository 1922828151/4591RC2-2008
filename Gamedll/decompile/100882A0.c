/*
 * func-name: sub_100882A0
 * func-address: 0x100882a0
 * callers: 0x1000d710
 * callees: 0x100076ad, 0x102c9d98
 */

Effect_LightBeam *__stdcall sub_100882A0(struct World *a1)
{
  Effect_LightBeam *v1; // eax

  v1 = (Effect_LightBeam *)operator new(0x4A0u);
  if ( v1 )
    return Effect_LightBeam::Effect_LightBeam(v1, a1);
  else
    return 0;
}
