/*
 * func-name: ?UpdateTextureIndex@ParticleTrail@@IAE_NM@Z_0
 * func-address: 0x100b6200
 * callers: 0x1000f83a
 * callees: 0x1000d3d2
 */

char __thiscall ParticleTrail::UpdateTextureIndex(ParticleTrail *this, float a2)
{
  int v4; // eax
  double v5; // st7
  int v6; // eax
  float v7; // [esp+Ch] [ebp+4h]

  if ( !*((_BYTE *)this + 232) )
    return 0;
  if ( !std::vector<Material *>::size((char *)this + 204) )
  {
    v4 = *((_DWORD *)this + 47);
    if ( !v4 || !((*((_DWORD *)this + 48) - v4) >> 2) )
      return 0;
  }
  v7 = *((float *)this + 56) + a2;
  *((float *)this + 56) = v7;
  if ( *((float *)this + 55) > (double)v7 )
    return 0;
  v5 = v7 - *((float *)this + 55);
  ++*((_DWORD *)this + 57);
  *((float *)this + 56) = v5;
  if ( std::vector<Material *>::size((char *)this + 204) )
  {
    if ( *((_DWORD *)this + 57) >= std::vector<Material *>::size((char *)this + 204) )
      *((_DWORD *)this + 57) = 0;
    *((_DWORD *)this + 50) = *(_DWORD *)std::vector<Material *>::operator[]((char *)this + 204, *((_DWORD *)this + 57));
  }
  v6 = *((_DWORD *)this + 47);
  if ( v6 && (*((_DWORD *)this + 48) - v6) >> 2 )
  {
    if ( *((_DWORD *)this + 57) >= (*((_DWORD *)this + 48) - v6) >> 2 )
      *((_DWORD *)this + 57) = 0;
    *((_DWORD *)this + 45) = *(_DWORD *)sub_1000D3D2(*((_DWORD *)this + 57));
  }
  return 1;
}
