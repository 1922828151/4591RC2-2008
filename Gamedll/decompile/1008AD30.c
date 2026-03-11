/*
 * func-name: ?PreRender@Effect_MultiTexParticles@@UAEXPAVCamera@@@Z_0
 * func-address: 0x1008ad30
 * callers: 0x1000fa56
 * callees: none
 */

void __thiscall Effect_MultiTexParticles::PreRender(Effect_MultiTexParticles *this, struct Camera *a2)
{
  (*(void (__thiscall **)(Effect_MultiTexParticles *))(*(_DWORD *)this + 116))(this);
  Actor::PreRender(this, a2);
}
