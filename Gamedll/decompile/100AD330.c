/*
 * func-name: ?SetParticleDefaults@RandomTextureParticles@@UAEXAAVParticle@@@Z_0
 * func-address: 0x100ad330
 * callers: 0x1001295e
 * callees: 0x10019d1c
 */

void __thiscall RandomTextureParticles::SetParticleDefaults(RandomTextureParticles *this, struct Particle *a2)
{
  char *v3; // ecx
  unsigned int v4; // esi
  bool v5; // cf
  int v6; // eax
  unsigned int v7; // esi
  int v8; // ecx

  ParticleSystem::SetParticleDefaults(this, a2);
  if ( *((_BYTE *)this + 404) )
  {
    v3 = (char *)this + 372;
    if ( *((_BYTE *)this + 405) )
    {
      v4 = std::vector<Material *>::size(v3);
      *((_DWORD *)a2 + 22) = rand() % v4;
      return;
    }
    *((_DWORD *)a2 + 22) = (*((_DWORD *)this + 102))++;
    v5 = *((_DWORD *)this + 102) < (unsigned int)std::vector<Material *>::size(v3);
    goto LABEL_11;
  }
  if ( !*((_BYTE *)this + 405) )
  {
    *((_DWORD *)a2 + 22) = (*((_DWORD *)this + 102))++;
    v8 = *((_DWORD *)this + 90);
    if ( !v8 )
    {
LABEL_12:
      *((_DWORD *)this + 102) = 0;
      return;
    }
    v5 = *((_DWORD *)this + 102) < (unsigned int)((*((_DWORD *)this + 91) - v8) >> 2);
LABEL_11:
    if ( v5 )
      return;
    goto LABEL_12;
  }
  v6 = *((_DWORD *)this + 90);
  if ( v6 )
  {
    v7 = (*((_DWORD *)this + 91) - v6) >> 2;
    *((_DWORD *)a2 + 22) = rand() % v7;
  }
  else
  {
    *((_DWORD *)a2 + 22) = rand() % 0u;
  }
}
