/*
 * func-name: ?RefreshSystem@Effect_MultiTexParticlesEx@@MAEXXZ_0
 * func-address: 0x1008b1b0
 * callers: 0x10012bed
 * callees: 0x1000663b
 */

void __thiscall Effect_MultiTexParticlesEx::RefreshSystem(Effect_MultiTexParticlesEx *this)
{
  FXManager *v2; // eax
  float *FXSystemFromHash; // eax

  Effect_MultiTexParticles::RefreshSystem(this);
  if ( *((_DWORD *)this + 315) && *((_BYTE *)this + 1256) )
  {
    v2 = (FXManager *)FXManager::Instance(*((_DWORD *)this + 313), *((_DWORD *)this + 315));
    FXSystemFromHash = (float *)FXManager::GetFXSystemFromHash(v2);
    if ( FXSystemFromHash )
    {
      FXSystemFromHash[103] = *((float *)this + 316);
      FXSystemFromHash[105] = *((float *)this + 317);
      FXSystemFromHash[104] = *((float *)this + 318);
    }
  }
}
