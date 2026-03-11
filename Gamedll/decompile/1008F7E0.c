/*
 * func-name: ??0Effect_MultiTexParticlesEx@@QAE@ABV0@@Z_0
 * func-address: 0x1008f7e0
 * callers: 0x100060dc
 * callees: 0x10007c3e
 */

Effect_MultiTexParticlesEx *__thiscall Effect_MultiTexParticlesEx::Effect_MultiTexParticlesEx(
        Effect_MultiTexParticlesEx *this,
        const struct Effect_MultiTexParticlesEx *a2)
{
  Effect_MultiTexParticlesEx *result; // eax

  Effect_MultiTexParticles::Effect_MultiTexParticles(this, a2);
  *(_DWORD *)this = &Effect_MultiTexParticlesEx::`vftable';
  *((float *)this + 316) = *((float *)a2 + 316);
  result = this;
  *((float *)this + 317) = *((float *)a2 + 317);
  *((float *)this + 318) = *((float *)a2 + 318);
  return result;
}
