/*
 * func-name: sub_1013EC90
 * func-address: 0x1013ec90
 * callers: 0x1000c897
 * callees: 0x102c9d50, 0x102c9fe0
 */

void __thiscall sub_1013EC90(int this)
{
  int v1; // ebx
  float *v2; // esi
  int v3; // edi
  float *v4; // ebp
  float *v5; // ebp
  int *v6; // esi
  int *v7; // ebx
  double v8; // st7
  double v9; // st7
  int v10; // eax
  int v11; // ecx
  int v12; // ebp
  _DWORD *v13; // ebx
  void (__cdecl **v14)(_DWORD *, int, int, int, int, int); // ebx
  int v15; // edi
  int v16; // [esp-Ch] [ebp-4Ch]
  int v17; // [esp-4h] [ebp-44h]
  float v18; // [esp+14h] [ebp-2Ch]
  float v19; // [esp+14h] [ebp-2Ch]
  int v21; // [esp+1Ch] [ebp-24h]
  float v22; // [esp+28h] [ebp-18h]
  double v23; // [esp+28h] [ebp-18h]
  _DWORD *v24; // [esp+34h] [ebp-Ch]
  int v25; // [esp+3Ch] [ebp-4h]

  v1 = this + 4;
  v2 = **(float ***)(this + 8);
  v3 = this + 4;
  while ( 1 )
  {
    v4 = *(float **)(v1 + 4);
    if ( !v3 || v3 != v1 )
      _invalid_parameter_noinfo();
    if ( v2 == v4 )
      break;
    if ( !v3 )
      _invalid_parameter_noinfo();
    if ( v2 == *(float **)(v3 + 4) )
      _invalid_parameter_noinfo();
    v2[10] = v2[10] + GDeltaTime;
    if ( v2 == *(float **)(v3 + 4) )
      _invalid_parameter_noinfo();
    if ( *(float *)(this + 32) >= (double)v2[10] )
    {
      if ( v2 == *(float **)(v3 + 4) )
        _invalid_parameter_noinfo();
      v2 = *(float **)v2;
    }
    else
    {
      v25 = (int)v2;
      if ( v2 == *(float **)(v3 + 4) )
        _invalid_parameter_noinfo();
      v5 = *(float **)v2;
      if ( v2 != *(float **)(v1 + 4) )
      {
        **((_DWORD **)v2 + 1) = v5;
        *(float *)(*(_DWORD *)v2 + 4) = v2[1];
        std::string::~string(v2 + 3);
        operator delete(v2);
        --*(_DWORD *)(v1 + 8);
      }
      v2 = v5;
    }
  }
  v6 = **(int ***)(v1 + 4);
  v21 = 0;
  while ( 1 )
  {
    v7 = *(int **)(this + 8);
    if ( this == -4 )
      _invalid_parameter_noinfo();
    if ( v6 == v7 )
      break;
    if ( this == -4 )
      _invalid_parameter_noinfo();
    if ( v6 == *(int **)(this + 8) )
      _invalid_parameter_noinfo();
    if ( *((_BYTE *)v6 + 60) )
    {
      if ( v6 == *(int **)(this + 8) )
        _invalid_parameter_noinfo();
      v18 = -*((float *)v6 + 10) - *((float *)v6 + 10);
      v19 = v18 - (double)(int)v18;
      if ( v19 <= 0.5 )
      {
        if ( v6 == *(int **)(this + 8) )
          _invalid_parameter_noinfo();
        v9 = 0.5 - v19;
      }
      else
      {
        if ( v6 == *(int **)(this + 8) )
          _invalid_parameter_noinfo();
        v9 = v19 - 0.5;
      }
      v8 = v9 + v9;
    }
    else
    {
      if ( v6 == *(int **)(this + 8) )
      {
        _invalid_parameter_noinfo();
        if ( v6 == *(int **)(this + 8) )
          _invalid_parameter_noinfo();
      }
      v8 = (*(float *)(this + 32) - *((float *)v6 + 10)) / *(float *)(this + 32);
    }
    *((float *)v6 + 14) = v8;
    if ( v6 == *(int **)(this + 8) )
      _invalid_parameter_noinfo();
    if ( *((float *)v6 + 14) > 1.0 )
    {
      if ( v6 == *(int **)(this + 8) )
        _invalid_parameter_noinfo();
      *((float *)v6 + 14) = 1.0;
    }
    if ( v6 == *(int **)(this + 8) )
      _invalid_parameter_noinfo();
    if ( *((float *)v6 + 14) < 0.0 )
    {
      if ( v6 == *(int **)(this + 8) )
        _invalid_parameter_noinfo();
      *((float *)v6 + 14) = 0.0;
    }
    if ( v6 == *(int **)(this + 8) )
      _invalid_parameter_noinfo();
    std::string::c_str(v6 + 3);
    v10 = Canvas::Instance();
    Canvas::GetTextSize(v10);
    v22 = (double)*(int *)(Canvas::Instance() + 68) * *(float *)(this + 20);
    v12 = RenderDevice::Instance(v11);
    v13 = (_DWORD *)Canvas::Instance();
    v24 = v13;
    if ( v6 == *(int **)(this + 8) )
    {
      _invalid_parameter_noinfo();
      if ( v6 == *(int **)(this + 8) )
        _invalid_parameter_noinfo();
    }
    v14 = (void (__cdecl **)(_DWORD *, int, int, int, int, int))(*v13 + 52);
    v15 = (__int64)(255.0 * *((float *)v6 + 13))
        | (((unsigned int)(__int64)(*((float *)v6 + 12) * 255.0)
          | (((unsigned int)(__int64)(*((float *)v6 + 11) * 255.0)
            | ((unsigned int)(__int64)(*((float *)v6 + 14) * 255.0) << 8)) << 8)) << 8);
    v23 = (double)v21 + v22;
    v17 = std::string::c_str(v6 + 3);
    v16 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v12 + 296))(v12, (int)((double)v25 + v23 + 1.0), v17);
    (*v14)(v24, 2, v15, (int)*(float *)(this + 16), (int)v23, v16);
    v21 += v25 + 1;
    if ( *(float *)(this + 28) < (double)v21 + *(float *)(this + 20) )
      break;
    if ( v6 == *(int **)(this + 8) )
      _invalid_parameter_noinfo();
    v6 = (int *)*v6;
  }
}
