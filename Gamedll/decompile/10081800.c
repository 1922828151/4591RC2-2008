/*
 * func-name: ?SignedRand@ParticleSystem@@QAEMXZ_0
 * func-address: 0x10081800
 * callers: 0x1000b33e
 * callees: none
 */

double __thiscall ParticleSystem::SignedRand(ParticleSystem *this)
{
  int v1; // eax

  v1 = rand();
  return (float)((double)v1 / 32767.0 + (double)v1 / 32767.0 - 1.0);
}
