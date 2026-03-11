/*
 * func-name: ?SetParticleDefaults@ParticleSystemEx@@UAEXAAVParticle@@@Z_0
 * func-address: 0x100ad8c0
 * callers: 0x10019736
 * callees: 0x10019d1c
 */

void __thiscall ParticleSystemEx::SetParticleDefaults(ParticleSystemEx *this, struct Particle *a2)
{
  int v4; // eax
  double v5; // st7
  int v6; // eax
  int v7; // eax
  float v8; // [esp+10h] [ebp+4h]
  float v9; // [esp+10h] [ebp+4h]
  float v10; // [esp+10h] [ebp+4h]

  ParticleSystem::SetParticleDefaults(this, a2);
  if ( *((float *)this + 95) >= 0.0 )
  {
    v5 = *((float *)this + 95);
  }
  else
  {
    v4 = rand();
    v8 = (double)v4 / 32767.0 + (double)v4 / 32767.0 - 1.0;
    v5 = v8 * 3.140000104904175;
  }
  *((float *)a2 + 9) = v5;
  if ( *((_BYTE *)this + 368) )
  {
    if ( rand() % 100 <= 49 )
    {
      v7 = rand();
      v10 = (double)v7 / 32767.0 + (double)v7 / 32767.0 - 1.0;
      *((float *)a2 + 10) = *((float *)this + 91) * v10 - *((float *)this + 89);
    }
    else
    {
      v6 = rand();
      v9 = (double)v6 / 32767.0 + (double)v6 / 32767.0 - 1.0;
      *((float *)a2 + 10) = *((float *)this + 91) * v9 + *((float *)this + 89);
    }
  }
  else
  {
    *((float *)a2 + 10) = (double)rand() / 32767.0 * *((float *)this + 91) + *((float *)this + 89);
  }
}
