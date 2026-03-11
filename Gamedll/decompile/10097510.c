/*
 * func-name: ?StopSpawningParticles@Effect_ShadedParticles@@UAEXXZ_0
 * func-address: 0x10097510
 * callers: 0x10017305
 * callees: none
 */

void __thiscall Effect_ShadedParticles::StopSpawningParticles(Effect_ShadedParticles *this)
{
  FXManager *v1; // eax
  struct FXSystem *FXSystemFromHash; // eax

  if ( *((_DWORD *)this + 306) )
  {
    v1 = (FXManager *)FXManager::Instance(*((_DWORD *)this + 305), *((_DWORD *)this + 306));
    FXSystemFromHash = FXManager::GetFXSystemFromHash(v1);
    if ( FXSystemFromHash )
      (*(void (__thiscall **)(struct FXSystem *))(*(_DWORD *)FXSystemFromHash + 16))(FXSystemFromHash);
  }
}
