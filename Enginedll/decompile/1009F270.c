/*
 * func-name: ?GetWorldBBox@ModelFrame@@QAE?AVBBox@@_N@Z
 * func-address: 0x1009f270
 * callers: 0x1009f270, 0x100eeba0
 * callees: 0x10001370, 0x10001440, 0x100217a0, 0x1002ed40, 0x1004d200, 0x1004d2e0, 0x1008fdf0, 0x1009f270, 0x1017a0b0, 0x101a26a0
 */

int __thiscall ModelFrame::GetWorldBBox(int *this, int a2, int a3)
{
  int v3; // ebp
  int *v4; // edi
  int v5; // ecx
  int v6; // esi
  float *v7; // eax
  int v8; // edx
  unsigned int i; // edi
  int v10; // eax
  int v11; // eax
  float *v12; // eax
  float *v13; // eax
  int v14; // edx
  float v17[3]; // [esp+18h] [ebp-4Ch] BYREF
  float v18[3]; // [esp+24h] [ebp-40h] BYREF
  float v19[10]; // [esp+30h] [ebp-34h] BYREF
  int v20; // [esp+60h] [ebp-4h]

  v3 = 0;
  v4 = this;
  v20 = 0;
  sub_10001440((float *)a2);
  v5 = v4[1];
  v20 = 0;
  if ( v5 && (v4[2] - v5) >> 2 && (v6 = *(_DWORD *)v4[1]) != 0 && !*(_BYTE *)(v6 + 2524) )
  {
    v7 = sub_1008FDF0((float *)(v6 + 2420), v19, (int)(v4 + 41));
    *(float *)(a2 + 4) = v7[1];
    *(float *)(a2 + 8) = v7[2];
    *(float *)(a2 + 12) = v7[3];
    *(float *)(a2 + 16) = v7[4];
    *(float *)(a2 + 20) = v7[5];
    *(float *)(a2 + 24) = v7[6];
    v8 = *((_DWORD *)v7 + 7);
    v7 += 7;
    *(_DWORD *)(a2 + 28) = v8;
    *(float *)(a2 + 32) = v7[1];
    *(float *)(a2 + 36) = v7[2];
    sub_1017A0B0(v19);
    std::vector<BBox>::clear(v4 + 6);
    for ( i = 0; ; ++i )
    {
      v10 = *(_DWORD *)(v6 + 56);
      if ( !v10 || i >= (*(_DWORD *)(v6 + 60) - v10) / 40 )
        break;
      v11 = *(_DWORD *)(v6 + 56);
      if ( !v11 || i >= (*(_DWORD *)(v6 + 60) - v11) / 40 )
        invalid_parameter_noinfo();
      v12 = sub_1008FDF0((float *)(v3 + *(_DWORD *)(v6 + 56)), v19, (int)(this + 41));
      v20 = 1;
      std::vector<BBox>::push_back(this + 6, v12);
      LOBYTE(v20) = 0;
      sub_1017A0B0(v19);
      v3 += 40;
    }
    v4 = this;
  }
  else
  {
    if ( (dword_102C7A40 & 1) == 0 )
    {
      dword_102C7A40 |= 1u;
      v17[0] = 0.5;
      v17[1] = 0.5;
      v17[2] = 0.5;
      v18[0] = -0.5;
      v18[1] = -0.5;
      v20 = 2;
      v18[2] = -0.5;
      sub_10001370(flt_102C7A18, v18, v17);
      atexit(sub_101B8D50);
      LOBYTE(v20) = 0;
    }
    v13 = sub_1008FDF0((float *)v4 + 95, v19, (int)(v4 + 41));
    *(float *)(a2 + 4) = v13[1];
    *(float *)(a2 + 8) = v13[2];
    *(float *)(a2 + 12) = v13[3];
    *(float *)(a2 + 16) = v13[4];
    *(float *)(a2 + 20) = v13[5];
    *(float *)(a2 + 24) = v13[6];
    v14 = *((_DWORD *)v13 + 7);
    v13 += 7;
    *(_DWORD *)(a2 + 28) = v14;
    *(float *)(a2 + 32) = v13[1];
    *(float *)(a2 + 36) = v13[2];
    sub_1017A0B0(v19);
  }
  if ( (dword_102C7A40 & 2) == 0 )
  {
    dword_102C7A40 |= 2u;
    v20 = 3;
    sub_10001440(flt_102C79F0);
    atexit(sub_101B8D40);
    LOBYTE(v20) = 0;
  }
  if ( v4[89] )
  {
    ModelFrame::GetWorldBBox(v19, a3);
    if ( !sub_1004D2E0(v19, flt_102C79F0) )
      sub_1004D200((float *)a2, v19);
    sub_1017A0B0(v19);
  }
  if ( v4[90] )
  {
    ModelFrame::GetWorldBBox(v19, a3);
    if ( !sub_1004D2E0(v19, flt_102C79F0) )
      sub_1004D200((float *)a2, v19);
    sub_1017A0B0(v19);
  }
  return a2;
}
