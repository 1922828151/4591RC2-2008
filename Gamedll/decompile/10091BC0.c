/*
 * func-name: ?SetIntensity@Effect_ParticleSystem@@UAEXM@Z_0
 * func-address: 0x10091bc0
 * callers: 0x10007d6f
 * callees: 0x1000ae9d
 */

void __thiscall Effect_ParticleSystem::SetIntensity(Effect_ParticleSystem *this, float a2)
{
  int v2; // edx
  double v3; // st7
  float v4; // [esp+Ch] [ebp-10h]
  float v5; // [esp+10h] [ebp-Ch]
  float v6; // [esp+14h] [ebp-8h]
  float v7; // [esp+18h] [ebp-4h]

  v2 = *((_DWORD *)this + 263);
  v3 = a2;
  if ( v2 )
  {
    v4 = *((float *)this + 274) * v3;
    v5 = *((float *)this + 275) * v3;
    v6 = *((float *)this + 276) * v3;
    v7 = *((float *)this + 277) * v3;
    *(_DWORD *)(v2 + 320) = (__int64)(255.0 * v6)
                          | (((unsigned int)(__int64)(v5 * 255.0)
                            | (((unsigned int)(__int64)(v4 * 255.0) | ((unsigned int)(__int64)(v7 * 255.0) << 8)) << 8)) << 8);
  }
  Effect_Base::SetIntensity(this, a2);
}
