/*
 * func-name: ?DeserializationComplete@Effect_MultiTexParticles@@UAEXXZ_0
 * func-address: 0x1008ad10
 * callers: 0x1001652c
 * callees: none
 */

void __thiscall Effect_MultiTexParticles::DeserializationComplete(Effect_MultiTexParticles *this)
{
  (*(void (__thiscall **)(Effect_MultiTexParticles *))(*(_DWORD *)this + 116))(this);
  Actor::DeserializationComplete(this);
}
