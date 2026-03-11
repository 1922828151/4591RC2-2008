/*
 * func-name: ?CreateImpactFX@Effect_Precipitation@@QAEXPAVVector@@0@Z_0
 * func-address: 0x10093460
 * callers: 0x100199de
 * callees: none
 */

void __thiscall Effect_Precipitation::CreateImpactFX(Effect_Precipitation *this, struct Vector *a2, struct Vector *a3)
{
  unsigned int i; // edi
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  _DWORD *v8; // eax
  int v9; // ecx
  _DWORD *v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx

  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)this + 321);
    if ( !v5 || i >= (*((_DWORD *)this + 322) - v5) >> 3 )
      break;
    if ( *(float *)(*((_DWORD *)this + 321) + 8 * i + 4) <= 0.0 )
    {
      v6 = *((_DWORD *)this + 321);
      if ( !v6 || i >= (*((_DWORD *)this + 322) - v6) >> 3 )
        _invalid_parameter_noinfo();
      *(float *)(*((_DWORD *)this + 321) + 8 * i + 4) = 1.2;
      v7 = *((_DWORD *)this + 321);
      if ( !v7 || i >= (*((_DWORD *)this + 322) - v7) >> 3 )
        _invalid_parameter_noinfo();
      v8 = (_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 321) + 8 * i) + 20);
      *v8 = *(_DWORD *)a2;
      v8[1] = *((_DWORD *)a2 + 1);
      v8[2] = *((_DWORD *)a2 + 2);
      v9 = *((_DWORD *)this + 321);
      if ( !v9 || i >= (*((_DWORD *)this + 322) - v9) >> 3 )
        _invalid_parameter_noinfo();
      v10 = (_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 321) + 8 * i) + 232);
      *v10 = *(_DWORD *)a3;
      v10[1] = *((_DWORD *)a3 + 1);
      v10[2] = *((_DWORD *)a3 + 2);
      v11 = *((_DWORD *)this + 321);
      if ( !v11 || i >= (*((_DWORD *)this + 322) - v11) >> 3 )
        _invalid_parameter_noinfo();
      *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 321) + 8 * i) + 112) = *((_BYTE *)this + 816);
      v12 = *((_DWORD *)this + 321);
      if ( !v12 || i >= (*((_DWORD *)this + 322) - v12) >> 3 )
        _invalid_parameter_noinfo();
      v13 = *(_DWORD *)(*((_DWORD *)this + 321) + 8 * i);
      (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 48))(v13);
      return;
    }
  }
}
