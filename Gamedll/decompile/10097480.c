/*
 * func-name: ?StartSpawningParticles@Effect_ShadedParticles@@UAEXXZ_0
 * func-address: 0x10097480
 * callers: 0x1000c513
 * callees: 0x102c0ed0
 */

void __thiscall Effect_ShadedParticles::StartSpawningParticles(Effect_ShadedParticles *this)
{
  int v2; // eax
  FXManager *v3; // eax
  struct FXSystem *FXSystemFromHash; // eax
  struct FXSystem *v5; // esi
  _DWORD *v6; // eax
  int v7; // edx
  _BYTE v8[12]; // [esp+8h] [ebp-Ch] BYREF

  v2 = *((_DWORD *)this + 306);
  if ( v2 )
  {
    v3 = (FXManager *)FXManager::Instance(*((_DWORD *)this + 305), v2);
    FXSystemFromHash = FXManager::GetFXSystemFromHash(v3);
    v5 = FXSystemFromHash;
    if ( FXSystemFromHash )
    {
      *((_DWORD *)FXSystemFromHash + 5) = *((_DWORD *)this + 214);
      *((_DWORD *)FXSystemFromHash + 6) = *((_DWORD *)this + 215);
      *((_DWORD *)FXSystemFromHash + 7) = *((_DWORD *)this + 216);
      v6 = (_DWORD *)sub_102C0ED0(v8);
      *((_DWORD *)v5 + 58) = *v6;
      *((_DWORD *)v5 + 59) = v6[1];
      *((_DWORD *)v5 + 60) = v6[2];
      v7 = *(_DWORD *)v5;
      *((_BYTE *)v5 + 112) = *((_BYTE *)this + 816);
      (*(void (__thiscall **)(struct FXSystem *))(v7 + 48))(v5);
    }
  }
}
