/*
 * func-name: sub_1013F500
 * func-address: 0x1013f500
 * callers: 0x10014c18
 * callees: 0x102c9d50, 0x102c9fe0
 */

void __thiscall sub_1013F500(int this)
{
  int v1; // ebp
  float *v2; // esi
  int v3; // edi
  float *v4; // ebx
  float *v5; // edi
  double v6; // st7
  int v7; // eax
  _DWORD *v8; // ebp
  void (__cdecl **v9)(_DWORD *, int, int, int, int, int, int, int); // ebp
  int v10; // edi
  int v11; // [esp-4h] [ebp-44h]
  float v12; // [esp+10h] [ebp-30h]
  _DWORD *v14; // [esp+24h] [ebp-1Ch]
  int v15; // [esp+28h] [ebp-18h]
  int v16; // [esp+30h] [ebp-10h]
  int v17; // [esp+3Ch] [ebp-4h]

  v1 = this;
  v2 = **(float ***)(this + 8);
  v3 = this + 4;
  v15 = this + 4;
  while ( 1 )
  {
    v4 = *(float **)(v1 + 8);
    if ( !v3 || v3 != v1 + 4 )
      _invalid_parameter_noinfo();
    if ( v2 == v4 )
      break;
    if ( !v3 )
      _invalid_parameter_noinfo();
    if ( v2 == *(float **)(v3 + 4) )
      _invalid_parameter_noinfo();
    v12 = v2[10] - *(float *)(v1 + 32) * GDeltaTime;
    v2[10] = v12;
    if ( *(float *)(v1 + 20) <= (double)v12 )
    {
      if ( *(float *)(v1 + 36) >= (double)v12 )
      {
        if ( *(float *)(v1 + 40) <= (double)v2[10] )
          v6 = 1.0;
        else
          v6 = (v2[10] - *(float *)(v1 + 20)) / (*(float *)(v1 + 40) - *(float *)(v1 + 20));
      }
      else
      {
        v6 = (*(float *)(v1 + 28) - v2[10]) / (*(float *)(v1 + 28) - *(float *)(v1 + 36));
      }
      v2[14] = v6;
      if ( v2 == *(float **)(v3 + 4) )
        _invalid_parameter_noinfo();
      std::string::c_str(v2 + 2);
      v7 = Canvas::Instance();
      Canvas::GetTextSize(v7);
      v8 = (_DWORD *)Canvas::Instance();
      v14 = v8;
      if ( v2 == *(float **)(v3 + 4) )
      {
        _invalid_parameter_noinfo();
        if ( v2 == *(float **)(v3 + 4) )
          _invalid_parameter_noinfo();
      }
      v9 = (void (__cdecl **)(_DWORD *, int, int, int, int, int, int, int))(*v8 + 52);
      v10 = (__int64)(255.0 * v2[13])
          | (((unsigned int)(__int64)(v2[12] * 255.0)
            | (((unsigned int)(__int64)(v2[11] * 255.0) | ((unsigned int)(__int64)(v2[14] * 255.0) << 8)) << 8)) << 8);
      v11 = std::string::c_str(v2 + 2);
      (*v9)(
        v14,
        2,
        v10,
        (int)*(float *)(this + 16),
        (int)(v2[10] - (double)v17),
        (int)*(float *)(this + 24),
        (int)v2[10],
        v11);
      if ( v2 == *(float **)(v15 + 4) )
        _invalid_parameter_noinfo();
      v2 = *(float **)v2;
      v3 = v15;
      v1 = this;
    }
    else
    {
      v16 = v3;
      if ( v2 == *(float **)(v3 + 4) )
        _invalid_parameter_noinfo();
      v5 = *(float **)v2;
      if ( v2 != *(float **)(v1 + 8) )
      {
        **((_DWORD **)v2 + 1) = v5;
        *(float *)(*(_DWORD *)v2 + 4) = v2[1];
        std::string::~string(v2 + 2);
        operator delete(v2);
        --*(_DWORD *)(v1 + 12);
      }
      v2 = v5;
      v15 = v16;
      v3 = v16;
    }
  }
}
