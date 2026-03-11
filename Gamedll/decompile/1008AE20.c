/*
 * func-name: ?StopSpawningParticles@Effect_MultiTexParticles@@UAEXXZ_0
 * func-address: 0x1008ae20
 * callers: 0x1000c941
 * callees: none
 */

void __thiscall Effect_MultiTexParticles::StopSpawningParticles(Effect_MultiTexParticles *this)
{
  FXManager *v1; // eax
  struct FXSystem *FXSystemFromHash; // eax

  if ( *((_DWORD *)this + 315) )
  {
    v1 = (FXManager *)FXManager::Instance(*((_DWORD *)this + 313), *((_DWORD *)this + 315));
    FXSystemFromHash = FXManager::GetFXSystemFromHash(v1);
    if ( FXSystemFromHash )
      (*(void (__thiscall **)(struct FXSystem *))(*(_DWORD *)FXSystemFromHash + 16))(FXSystemFromHash);
  }
}
