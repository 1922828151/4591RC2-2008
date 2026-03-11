/*
 * func-name: ?Clone@Effect_MultiTexParticlesEx@@UAEXPAVActor@@_N@Z_0
 * func-address: 0x1008c830
 * callers: 0x10004e1c
 * callees: 0x10018a39
 */

void __thiscall Effect_MultiTexParticlesEx::Clone(Effect_MultiTexParticlesEx *this, struct Actor *a2, bool a3)
{
  Effect_MultiTexParticles::Clone(this, a2, a3);
  *((float *)a2 + 316) = *((float *)this + 316);
  *((float *)a2 + 317) = *((float *)this + 317);
  *((float *)a2 + 318) = *((float *)this + 318);
}
