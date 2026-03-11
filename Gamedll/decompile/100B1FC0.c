/*
 * func-name: ?SetMaxParticles@ParticleSystem@@UAEXH@Z_0
 * func-address: 0x100b1fc0
 * callers: 0x100093e5
 * callees: 0x10014966
 */

void __thiscall ParticleSystem::SetMaxParticles(ParticleSystem *this, int a2)
{
  ParticleSystem *v2; // ebp
  char *v3; // esi
  signed int v4; // eax
  unsigned int v5; // ebx
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ebp
  int v11; // edi
  double v12; // st7
  int v13; // eax
  int i; // [esp+10h] [ebp+4h]

  v2 = this;
  if ( *((_DWORD *)this + 54) != a2 && a2 > 0 )
  {
    v3 = (char *)this + 188;
    *((_DWORD *)this + 54) = a2;
    sub_10014966((char *)this + 188, a2);
    v4 = *((_DWORD *)v2 + 54);
    if ( *((_BYTE *)v2 + 317) )
    {
      v5 = *((_DWORD *)v2 + 51);
      if ( (int)v5 < v4 - 1 && (int)v5 < v4 )
      {
        v6 = 96 * v5;
        for ( i = 96 * v5; ; v6 = i )
        {
          v7 = *((_DWORD *)v3 + 1);
          if ( !v7 || v5 >= (*((_DWORD *)v3 + 2) - v7) / 96 )
            _invalid_parameter_noinfo();
          (*(void (__thiscall **)(ParticleSystem *, int))(*(_DWORD *)v2 + 24))(v2, v6 + *((_DWORD *)v3 + 1));
          v8 = *((_DWORD *)v3 + 1);
          if ( !v8 || v5 >= (*((_DWORD *)v3 + 2) - v8) / 96 )
            _invalid_parameter_noinfo();
          v9 = *((_DWORD *)v3 + 1);
          v10 = v6 + v9;
          if ( !v9 || v5 >= (*((_DWORD *)v3 + 2) - v9) / 96 )
            _invalid_parameter_noinfo();
          v11 = i + *((_DWORD *)v3 + 1);
          i += 96;
          ++v5;
          v12 = (double)rand() / 32767.0 * *(float *)(v10 + 52);
          v2 = this;
          *(float *)(v11 + 52) = v12;
          if ( (signed int)v5 >= *((_DWORD *)this + 54) )
            break;
        }
      }
      *((_DWORD *)v2 + 51) = *((_DWORD *)v2 + 54) - 1;
    }
    else
    {
      v13 = v4 - 1;
      if ( *((_DWORD *)v2 + 51) > v13 )
        *((_DWORD *)v2 + 51) = v13;
    }
  }
}
