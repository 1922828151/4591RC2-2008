/*
 * func-name: ?SetWorld@Effect_ShadedParticles@@UAEXPAVWorld@@@Z_0
 * func-address: 0x10097440
 * callers: 0x100179b8
 * callees: none
 */

void __thiscall Effect_ShadedParticles::SetWorld(Effect_ShadedParticles *this, struct World *a2)
{
  FXManager *v3; // eax
  struct FXSystem *FXSystemFromHash; // eax

  Actor::SetWorld(this, a2);
  if ( *((_DWORD *)this + 306) )
  {
    v3 = (FXManager *)FXManager::Instance(*((_DWORD *)this + 305), *((_DWORD *)this + 306));
    FXSystemFromHash = FXManager::GetFXSystemFromHash(v3);
    if ( FXSystemFromHash )
      *((_DWORD *)FXSystemFromHash + 29) = a2;
  }
}
