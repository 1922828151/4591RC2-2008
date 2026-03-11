/*
 * func-name: ?AddNode@ParticleTrail@@QAEXVVector@@@Z_0
 * func-address: 0x100b70c0
 * callers: 0x1000527c
 * callees: 0x10016761, 0x10019dfd, 0x102c9d98
 */

void __thiscall ParticleTrail::AddNode(ParticleTrail *this, char a2, int a3, int a4)
{
  struct ParticleTrailNode *v5; // ecx
  int v6; // eax
  float *v7; // eax

  if ( !dword_103AE624 )
    goto LABEL_7;
  v5 = dword_103AE624;
  if ( dword_103AE620 == dword_103AE624 )
    dword_103AE620 = 0;
  v6 = *(_DWORD *)dword_103AE624;
  dword_103AE624 = (struct ParticleTrailNode *)v6;
  if ( v6 )
    *(_DWORD *)(v6 + 4) = 0;
  --dword_103AE628;
  v7 = (float *)v5;
  if ( !v5 )
  {
LABEL_7:
    v7 = (float *)operator new(0x4Cu);
    if ( v7 )
    {
      *v7 = 0.0;
      v7[2] = 0.0;
      v7[1] = 0.0;
      v7[3] = 0.0;
      v7[4] = 0.0;
      v7[5] = 0.0;
      v7[6] = 0.0;
      v7[7] = 0.0;
      v7[13] = 0.0;
      v7[14] = 0.0;
      v7[15] = 0.0;
      v7[16] = 0.0;
      v7[17] = 0.0;
      v7[18] = 0.0;
    }
    else
    {
      v7 = 0;
    }
  }
  ParticleTrail::SetupParticle(this, (struct ParticleTrailNode *)v7, (struct Vector *)&a2);
  ParticleTrail::CalculateAverageDirections(this);
}
