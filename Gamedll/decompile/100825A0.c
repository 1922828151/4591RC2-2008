/*
 * func-name: ?SetIntensity@Effect_LaserParticle@@UAEXM@Z_0
 * func-address: 0x100825a0
 * callers: 0x1000b3ca
 * callees: 0x1000ae9d, 0x102c9fe0
 */

void __thiscall Effect_LaserParticle::SetIntensity(Effect_LaserParticle *this, float a2)
{
  double v2; // st7
  int v4; // edi
  float v5; // [esp+4h] [ebp-Ch]

  v2 = a2;
  v4 = *((_DWORD *)this + 263);
  if ( v4 && *((float *)this + 265) != v2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 36))(v4, (int)(v2 * (double)*((int *)this + 284)));
    v2 = a2;
  }
  v5 = v2;
  Effect_Base::SetIntensity(this, v5);
}
