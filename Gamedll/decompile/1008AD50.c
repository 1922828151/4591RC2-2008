/*
 * func-name: ?SetWorld@Effect_MultiTexParticles@@UAEXPAVWorld@@@Z_0
 * func-address: 0x1008ad50
 * callers: 0x10016a36
 * callees: none
 */

void __thiscall Effect_MultiTexParticles::SetWorld(Effect_MultiTexParticles *this, struct World *a2)
{
  FXManager *v3; // eax
  struct FXSystem *FXSystemFromHash; // eax

  Actor::SetWorld(this, a2);
  if ( *((_DWORD *)this + 315) )
  {
    v3 = (FXManager *)FXManager::Instance(*((_DWORD *)this + 313), *((_DWORD *)this + 315));
    FXSystemFromHash = FXManager::GetFXSystemFromHash(v3);
    if ( FXSystemFromHash )
      *((_DWORD *)FXSystemFromHash + 29) = a2;
  }
}
