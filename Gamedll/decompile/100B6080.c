/*
 * func-name: ?Clear@ParticleTrail@@QAEXXZ_0
 * func-address: 0x100b6080
 * callers: 0x10005b5f
 * callees: none
 */

void __thiscall ParticleTrail::Clear(ParticleTrail *this)
{
  struct ParticleTrailNode *v1; // eax
  int v2; // edx
  bool v3; // zf

  while ( 1 )
  {
    v1 = (struct ParticleTrailNode *)*((_DWORD *)this + 61);
    if ( !v1 )
      break;
    if ( *((struct ParticleTrailNode **)this + 60) == v1 )
      *((_DWORD *)this + 60) = 0;
    v2 = *(_DWORD *)v1;
    v3 = *(_DWORD *)v1 == 0;
    *((_DWORD *)this + 61) = *(_DWORD *)v1;
    if ( !v3 )
      *(_DWORD *)(v2 + 4) = 0;
    --*((_DWORD *)this + 62);
    if ( dword_103AE620 )
    {
      *(_DWORD *)v1 = dword_103AE624;
      *((_DWORD *)dword_103AE624 + 1) = v1;
      dword_103AE624 = v1;
    }
    else
    {
      dword_103AE620 = v1;
      dword_103AE624 = v1;
      *(_DWORD *)v1 = 0;
    }
    *((_DWORD *)v1 + 1) = 0;
    ++dword_103AE628;
  }
}
