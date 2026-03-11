/*
 * func-name: sub_1008F6A0
 * func-address: 0x1008f6a0
 * callers: 0x100156b3
 * callees: 0x1000227a, 0x102c9d98
 */

Effect_MultiTexParticlesEx *__stdcall sub_1008F6A0(struct World *a1)
{
  Effect_MultiTexParticlesEx *v1; // eax

  v1 = (Effect_MultiTexParticlesEx *)operator new(0x4FCu);
  if ( v1 )
    return Effect_MultiTexParticlesEx::Effect_MultiTexParticlesEx(v1, a1);
  else
    return 0;
}
