/*
 * func-name: sub_103057A0
 * func-address: 0x103057a0
 * callers: 0x10303410
 * callees: 0x102c9d50
 */

void __cdecl sub_103057A0()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  ParticleTrail::ms_AvailableParticleTrailNodes = &ObjectNodeList::`vftable';
  if ( byte_103AE62C )
  {
    v0 = dword_103AE620;
    if ( dword_103AE620 )
    {
      do
      {
        v1 = (_DWORD *)v0[1];
        operator delete(v0);
        v0 = v1;
      }
      while ( v1 );
    }
  }
}
