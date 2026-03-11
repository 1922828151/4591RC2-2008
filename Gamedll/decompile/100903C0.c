/*
 * func-name: ?Clone@Effect_ParticleSystemEx@@UAEXPAVActor@@_N@Z_0
 * func-address: 0x100903c0
 * callers: 0x1000e49e
 * callees: 0x1000eb24
 */

void __thiscall Effect_ParticleSystemEx::Clone(Effect_ParticleSystemEx *this, struct Actor *a2, bool a3)
{
  Effect_ParticleSystem::Clone(this, a2, a3);
  *((float *)a2 + 320) = *((float *)this + 320);
  *((float *)a2 + 321) = *((float *)this + 321);
  *((float *)a2 + 322) = *((float *)this + 322);
  *((_BYTE *)a2 + 1293) = *((_BYTE *)this + 1293);
  *((float *)a2 + 324) = *((float *)this + 324);
}
