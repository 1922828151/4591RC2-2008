/*
 * func-name: ?AddTexture@ParticleTrail@@QAEXPAVTexture@@@Z_0
 * func-address: 0x100b7b10
 * callers: 0x100108b1
 * callees: 0x10010f50
 */

void __thiscall ParticleTrail::AddTexture(ParticleTrail *this, struct Texture *a2)
{
  char *v3; // esi
  int v4; // ecx

  v3 = (char *)this + 184;
  sub_10010F50((char *)this + 184, (int)&a2);
  v4 = *((_DWORD *)v3 + 1);
  if ( v4 && (*((_DWORD *)v3 + 2) - v4) >> 2 == 1 )
  {
    if ( !((*((_DWORD *)v3 + 2) - v4) >> 2) )
      _invalid_parameter_noinfo();
    *((_DWORD *)this + 45) = **((_DWORD **)v3 + 1);
  }
}
