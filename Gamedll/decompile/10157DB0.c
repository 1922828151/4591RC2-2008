/*
 * func-name: ?AutoRepair@DamageUnit@GameClient@@QAEMMM@Z_0
 * func-address: 0x10157db0
 * callers: 0x10005fa6
 * callees: none
 */

double __thiscall GameClient::DamageUnit::AutoRepair(GameClient::DamageUnit *this, float a2, float a3)
{
  unsigned int v3; // edi
  int i; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ebx
  int v11; // ecx
  int v12; // edx
  double v13; // st7
  int v14; // eax
  float *v15; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // ebx
  int v19; // edx
  int v20; // eax
  int v21; // ebx
  float v23; // [esp+8h] [ebp-8h]
  float v24; // [esp+Ch] [ebp-4h]

  v23 = 0.0;
  v3 = 0;
  for ( i = 0; ; i += 20 )
  {
    v6 = *((_DWORD *)this + 2);
    if ( !v6 || v3 >= (*((_DWORD *)this + 3) - v6) / 20 )
      break;
    v7 = *((_DWORD *)this + 2);
    if ( !v7 || v3 >= (*((_DWORD *)this + 3) - v7) / 20 )
      _invalid_parameter_noinfo();
    if ( *(float *)(*((_DWORD *)this + 2) + i + 16) > 0.0 )
    {
      v8 = *((_DWORD *)this + 2);
      if ( !v8 || v3 >= (*((_DWORD *)this + 3) - v8) / 20 )
        _invalid_parameter_noinfo();
      v9 = *((_DWORD *)this + 2);
      v10 = i + v9;
      if ( !v9 || v3 >= (*((_DWORD *)this + 3) - v9) / 20 )
        _invalid_parameter_noinfo();
      v11 = *((_DWORD *)this + 2);
      if ( (double)*(int *)(v11 + i + 4) > *(float *)(v10 + 8) )
      {
        if ( !v11 || v3 >= (*((_DWORD *)this + 3) - v11) / 20 )
          _invalid_parameter_noinfo();
        v12 = *((_DWORD *)this + 2);
        v24 = *(float *)(v12 + i + 12) * a2;
        v13 = v24 + v23;
        if ( a3 < v13 )
          return v23;
        v23 = v13;
        if ( !v12 || v3 >= (*((_DWORD *)this + 3) - v12) / 20 )
          _invalid_parameter_noinfo();
        v14 = *((_DWORD *)this + 2);
        v15 = (float *)(v14 + i + 8);
        if ( !v14 || v3 >= (*((_DWORD *)this + 3) - v14) / 20 )
          _invalid_parameter_noinfo();
        *v15 = *(float *)(*((_DWORD *)this + 2) + i + 16) * a2 + *v15;
        v16 = *((_DWORD *)this + 2);
        if ( !v16 || v3 >= (*((_DWORD *)this + 3) - v16) / 20 )
          _invalid_parameter_noinfo();
        v17 = *((_DWORD *)this + 2);
        v18 = i + v17;
        if ( !v17 || v3 >= (*((_DWORD *)this + 3) - v17) / 20 )
          _invalid_parameter_noinfo();
        v19 = *((_DWORD *)this + 2);
        if ( (double)*(int *)(v19 + i + 4) < *(float *)(v18 + 8) )
        {
          if ( !v19 || v3 >= (*((_DWORD *)this + 3) - v19) / 20 )
            _invalid_parameter_noinfo();
          v20 = *((_DWORD *)this + 2);
          v21 = i + v20;
          if ( !v20 || v3 >= (*((_DWORD *)this + 3) - v20) / 20 )
            _invalid_parameter_noinfo();
          *(float *)(*((_DWORD *)this + 2) + i + 8) = (float)*(int *)(v21 + 4);
        }
      }
    }
    ++v3;
  }
  return v23;
}
