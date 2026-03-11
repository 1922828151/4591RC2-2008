/*
 * func-name: ?Tick@ParticleTrail@@UAEXXZ_0
 * func-address: 0x100b7160
 * callers: 0x1000738d
 * callees: 0x1000c0e0, 0x1000f83a, 0x1001abf9
 */

void __thiscall ParticleTrail::Tick(ParticleTrail *this)
{
  int v2; // esi
  int v3; // ebx
  float v4; // [esp+14h] [ebp-4h]

  v4 = GDeltaTime;
  if ( GDeltaTime > 0.1000000014901161 )
    v4 = 0.1;
  ParticleTrail::UpdateTextureIndex(this, v4);
  v2 = *((_DWORD *)this + 60);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)(v2 + 4);
      if ( ParticleTrail::UpdateParticle(this, (struct ParticleTrailNode *)v2, v4) )
      {
        sub_1000C0E0(v2);
        if ( dword_103AE620 )
        {
          *(_DWORD *)v2 = dword_103AE624;
          *((_DWORD *)dword_103AE624 + 1) = v2;
          dword_103AE624 = (struct ParticleTrailNode *)v2;
        }
        else
        {
          dword_103AE620 = (void *)v2;
          dword_103AE624 = (struct ParticleTrailNode *)v2;
          *(_DWORD *)v2 = 0;
        }
        *(_DWORD *)(v2 + 4) = 0;
        ++dword_103AE628;
      }
      v2 = v3;
    }
    while ( v3 );
  }
}
