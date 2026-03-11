/*
 * func-name: ?RefreshOptions@Effect_ParticleSystemEx@@UAEXXZ_0
 * func-address: 0x10090420
 * callers: 0x1000256d
 * callees: 0x10001343
 */

void __thiscall Effect_ParticleSystemEx::RefreshOptions(Effect_ParticleSystemEx *this)
{
  int v2; // eax

  Effect_ParticleSystem::RefreshOptions(this);
  v2 = *((_DWORD *)this + 263);
  if ( v2 )
  {
    *(float *)(v2 + 356) = *((float *)this + 320);
    *(float *)(v2 + 364) = *((float *)this + 321);
    *(float *)(v2 + 360) = *((float *)this + 322);
    *(_BYTE *)(v2 + 377) = *((_BYTE *)this + 1293);
    *(float *)(v2 + 380) = *((float *)this + 324);
  }
}
