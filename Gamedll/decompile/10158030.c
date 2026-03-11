/*
 * func-name: ?OnTakeRepair@DamageUnit@GameClient@@UAEXMMM@Z_0
 * func-address: 0x10158030
 * callers: 0x100158a7
 * callees: none
 */

void __thiscall GameClient::DamageUnit::OnTakeRepair(GameClient::DamageUnit *this, float a2, float a3, float a4)
{
  unsigned int v4; // edi
  int i; // ebp
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  void (__cdecl *v12)(); // ebx
  int v13; // ecx
  double v14; // st7
  int v15; // edx
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  int v19; // eax
  int v20; // ebp
  int v21; // edx
  int v22; // eax
  int v23; // ebp
  float v24; // [esp+10h] [ebp-4h]

  v4 = 0;
  for ( i = 0; ; i += 20 )
  {
    v7 = *((_DWORD *)this + 2);
    if ( !v7 || v4 >= (*((_DWORD *)this + 3) - v7) / 20 )
      break;
    v8 = *((_DWORD *)this + 2);
    if ( !v8 || v4 >= (*((_DWORD *)this + 3) - v8) / 20 )
      _invalid_parameter_noinfo();
    v9 = *((_DWORD *)this + 2);
    v10 = i + v9;
    if ( !v9 || v4 >= (*((_DWORD *)this + 3) - v9) / 20 )
      _invalid_parameter_noinfo();
    if ( (double)*(int *)(*((_DWORD *)this + 2) + i + 4) > *(float *)(v10 + 8) )
    {
      v11 = *((_DWORD *)this + 2);
      if ( v11 && v4 < (*((_DWORD *)this + 3) - v11) / 20 )
      {
        v12 = _invalid_parameter_noinfo;
      }
      else
      {
        v12 = _invalid_parameter_noinfo;
        _invalid_parameter_noinfo();
      }
      v13 = *((_DWORD *)this + 2);
      if ( *(_DWORD *)(v13 + i) == 1 )
      {
        v14 = a2;
      }
      else
      {
        if ( !v13 || v4 >= (*((_DWORD *)this + 3) - v13) / 20 )
          v12();
        v15 = *((_DWORD *)this + 2);
        if ( *(_DWORD *)(v15 + i) == 2 )
        {
          v14 = a3;
        }
        else
        {
          if ( !v15 || v4 >= (*((_DWORD *)this + 3) - v15) / 20 )
            v12();
          if ( *(_DWORD *)(*((_DWORD *)this + 2) + i) != 4 )
            goto LABEL_28;
          v14 = a4;
        }
      }
      v24 = v14;
      if ( v24 > 0.0 )
      {
        v16 = *((_DWORD *)this + 2);
        if ( !v16 || v4 >= (*((_DWORD *)this + 3) - v16) / 20 )
          v12();
        v17 = 20 * v4;
        *(float *)(20 * v4 + *((_DWORD *)this + 2) + 8) = *(float *)(20 * v4 + *((_DWORD *)this + 2) + 8) + v24;
        v18 = *((_DWORD *)this + 2);
        if ( !v18 || v4 >= (*((_DWORD *)this + 3) - v18) / 20 )
          _invalid_parameter_noinfo();
        v19 = *((_DWORD *)this + 2);
        v20 = v17 + v19;
        if ( !v19 || v4 >= (*((_DWORD *)this + 3) - v19) / 20 )
          _invalid_parameter_noinfo();
        v21 = *((_DWORD *)this + 2);
        if ( (double)*(int *)(v17 + v21 + 4) < *(float *)(v20 + 8) )
        {
          if ( !v21 || v4 >= (*((_DWORD *)this + 3) - v21) / 20 )
            _invalid_parameter_noinfo();
          v22 = *((_DWORD *)this + 2);
          v23 = v17 + v22;
          if ( !v22 || v4 >= (*((_DWORD *)this + 3) - v22) / 20 )
            _invalid_parameter_noinfo();
          *(float *)(v17 + *((_DWORD *)this + 2) + 8) = (float)*(int *)(v23 + 4);
        }
        return;
      }
    }
LABEL_28:
    ++v4;
  }
}
