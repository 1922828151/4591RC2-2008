/*
 * func-name: ?PreRender@Effect_ShadedParticles@@UAEXPAVCamera@@@Z_0
 * func-address: 0x100972c0
 * callers: 0x10001802
 * callees: none
 */

void __thiscall Effect_ShadedParticles::PreRender(Effect_ShadedParticles *this, struct Camera *a2)
{
  Actor::PreRender(this, a2);
  (*(void (__thiscall **)(Effect_ShadedParticles *))(*(_DWORD *)this + 120))(this);
}
