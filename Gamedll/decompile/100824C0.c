/*
 * func-name: ?StopSpawningParticles@Effect_LaserParticle@@UAEXXZ_0
 * func-address: 0x100824c0
 * callers: 0x1001123e
 * callees: none
 */

void __thiscall Effect_LaserParticle::StopSpawningParticles(Effect_LaserParticle *this)
{
  int v1; // ecx

  v1 = *((_DWORD *)this + 263);
  if ( v1 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 16))(v1);
}
