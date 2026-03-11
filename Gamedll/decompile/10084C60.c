/*
 * func-name: ?SetDefaults@ParticleSystem@@UAEXXZ_0
 * func-address: 0x10084c60
 * callers: 0x1000a41b
 * callees: none
 */

void __thiscall ParticleSystem::SetDefaults(ParticleSystem *this)
{
  unsigned int v1; // edi
  int i; // ebx
  int v4; // eax
  int v5; // eax

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
    ++v1;
  }
}
