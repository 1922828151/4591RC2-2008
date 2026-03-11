/*
 * func-name: ?SetDefaultsMoving@ParticleSystem@@UAEXXZ_0
 * func-address: 0x10084d00
 * callers: 0x10013b06
 * callees: none
 */

void __thiscall ParticleSystem::SetDefaultsMoving(ParticleSystem *this)
{
  unsigned int v1; // edi
  int i; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax

  v1 = 0;
  for ( i = 0; ; i += 96 )
  {
    v4 = *((_DWORD *)this + 48);
    if ( !v4 || v1 >= (*((_DWORD *)this + 49) - v4) / 96 )
      break;
    v5 = *((_DWORD *)this + 48);
    if ( !v5 || v1 >= (*((_DWORD *)this + 49) - v5) / 96 )
      _invalid_parameter_noinfo();
    (*(void (__thiscall **)(ParticleSystem *, int))(*(_DWORD *)this + 24))(this, i + *((_DWORD *)this + 48));
    v6 = *((_DWORD *)this + 48);
    if ( !v6 || v1 >= (*((_DWORD *)this + 49) - v6) / 96 )
      _invalid_parameter_noinfo();
    *(float *)(i + *((_DWORD *)this + 48) + 52) = 0.0;
    ++v1;
  }
}
