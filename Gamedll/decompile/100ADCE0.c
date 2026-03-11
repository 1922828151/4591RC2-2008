/*
 * func-name: ?SetParticleDefaults@RandomTextureParticlesEx@@UAEXAAVParticle@@@Z_0
 * func-address: 0x100adce0
 * callers: 0x10008a94
 * callees: 0x1001295e
 */

void __thiscall RandomTextureParticlesEx::SetParticleDefaults(RandomTextureParticlesEx *this, struct Particle *a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  float v7; // [esp+10h] [ebp+4h]
  float v8; // [esp+10h] [ebp+4h]
  float v9; // [esp+10h] [ebp+4h]

  RandomTextureParticles::SetParticleDefaults(this, a2);
  v4 = rand();
  v7 = (double)v4 / 32767.0 + (double)v4 / 32767.0 - 1.0;
  *((float *)a2 + 9) = v7 * 3.140000104904175;
  if ( *((_BYTE *)this + 424) )
  {
    if ( rand() % 100 <= 49 )
    {
      v6 = rand();
      v9 = (double)v6 / 32767.0 + (double)v6 / 32767.0 - 1.0;
      *((float *)a2 + 10) = *((float *)this + 105) * v9 - *((float *)this + 103);
    }
    else
    {
      v5 = rand();
      v8 = (double)v5 / 32767.0 + (double)v5 / 32767.0 - 1.0;
      *((float *)a2 + 10) = *((float *)this + 105) * v8 + *((float *)this + 103);
    }
  }
  else
  {
    *((float *)a2 + 10) = (double)rand() / 32767.0 * *((float *)this + 105) + *((float *)this + 103);
  }
}
