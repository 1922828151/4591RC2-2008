/*
 * func-name: ?StartSpawningNow@ParticleSystem@@UAEXXZ_0
 * func-address: 0x100ac480
 * callers: 0x10016d83
 * callees: none
 */

void __thiscall ParticleSystem::StartSpawningNow(ParticleSystem *this)
{
  int v2; // eax
  int v3; // ebp
  int v4; // eax
  int v5; // eax
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax

  *((_BYTE *)this + 212) = 0;
  v2 = *((_DWORD *)this + 48);
  v3 = 0;
  if ( v2 && (*((_DWORD *)this + 49) - v2) / 96 )
  {
    v4 = *((_DWORD *)this + 48);
    if ( v4 )
      v5 = (*((_DWORD *)this + 49) - v4) / 96;
    else
      v5 = 0;
    v6 = v5 - 1;
    v7 = 0;
    for ( *((_DWORD *)this + 51) = v6; (signed int)v7 <= *((_DWORD *)this + 51); v3 += 96 )
    {
      v8 = *((_DWORD *)this + 48);
      if ( !v8 || v7 >= (*((_DWORD *)this + 49) - v8) / 96 )
        _invalid_parameter_noinfo();
      *(float *)(*((_DWORD *)this + 48) + v3 + 52) = 0.0;
      ++v7;
    }
  }
  else
  {
    *((_DWORD *)this + 51) = 0;
  }
}
