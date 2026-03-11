/*
 * func-name: sub_100D3810
 * func-address: 0x100d3810
 * callers: 0x1000ca54
 * callees: 0x102c9dbc, 0x102ca092, 0x102ca0d2
 */

void __thiscall sub_100D3810(int this, float a2)
{
  float *v3; // eax
  int v4; // ecx
  float *v5; // eax
  double v6; // st7
  unsigned int i; // edi
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  float v11; // [esp+20h] [ebp-44h]
  float v12; // [esp+20h] [ebp-44h]
  float v13; // [esp+24h] [ebp-40h]
  float v14; // [esp+24h] [ebp-40h]
  float v15; // [esp+24h] [ebp-40h]
  float v16; // [esp+28h] [ebp-3Ch]
  float v17; // [esp+28h] [ebp-3Ch]
  float v18; // [esp+28h] [ebp-3Ch]
  float v19; // [esp+2Ch] [ebp-38h]
  float v20; // [esp+2Ch] [ebp-38h]
  float v21; // [esp+30h] [ebp-34h]
  float v22; // [esp+30h] [ebp-34h]
  float v23; // [esp+30h] [ebp-34h]
  float v24; // [esp+30h] [ebp-34h]
  float v25; // [esp+30h] [ebp-34h]
  float v26; // [esp+34h] [ebp-30h]
  float v27; // [esp+38h] [ebp-2Ch]
  float v28; // [esp+3Ch] [ebp-28h]
  float v29; // [esp+40h] [ebp-24h]
  float v30[4]; // [esp+44h] [ebp-20h] BYREF
  float v31; // [esp+54h] [ebp-10h] BYREF
  float v32; // [esp+58h] [ebp-Ch]
  float v33; // [esp+5Ch] [ebp-8h]
  float v34; // [esp+60h] [ebp-4h]

  if ( *(float *)(this + 68) > 0.0 )
  {
    v16 = GDeltaTime;
    if ( GDeltaTime > (double)*(float *)(this + 68) )
      v16 = *(float *)(this + 68);
    v27 = *(float *)(this + 88) * v16;
    v28 = *(float *)(this + 92) * v16;
    v29 = v16 * *(float *)(this + 96);
    v3 = (float *)(*(int (__thiscall **)(_DWORD, float *))(**(_DWORD **)(this + 4) + 40))(*(_DWORD *)(this + 4), &v31);
    v4 = *(_DWORD *)(this + 4);
    v19 = v3[1] + v28;
    v17 = v3[2] + v29;
    v30[0] = *v3 + v27;
    v30[1] = v19;
    v30[2] = v17;
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v4 + 24))(v4, v30);
    *(float *)(this + 68) = *(float *)(this + 68) - GDeltaTime;
  }
  if ( *(float *)(this + 72) > 0.0 )
  {
    v18 = GDeltaTime / *(float *)(this + 72);
    if ( v18 >= 1.0 )
      v18 = 1.0;
    v5 = (float *)(*(int (__thiscall **)(_DWORD, float *))(**(_DWORD **)(this + 4) + 48))(*(_DWORD *)(this + 4), v30);
    v31 = *v5;
    v32 = v5[1];
    v33 = v5[2];
    v34 = v5[3];
    v11 = *(float *)(this + 140) * v32
        + *(float *)(this + 136) * v31
        + *(float *)(this + 144) * v33
        + v34 * *(float *)(this + 148);
    v20 = 1.0;
    v6 = v11;
    if ( v11 < 0.0 )
    {
      v11 = -v6;
      v20 = -1.0;
      v6 = v11;
    }
    v13 = 1.0 - v6 * v6;
    if ( v13 >= 1.000000016862384e-16 )
    {
      v14 = sqrt(v13);
      v12 = atan2(v14, v11);
      v15 = 1.0 / v14;
      v21 = (1.0 - v18) * v12;
      v22 = sin(v21);
      v26 = v22 * v15;
      v23 = v12 * v18;
      v24 = sin(v23);
      v25 = v24 * v15 * v20;
      v34 = v34 * v26 + v25 * *(float *)(this + 148);
      v31 = v31 * v26 + *(float *)(this + 136) * v25;
      v32 = *(float *)(this + 140) * v25 + v32 * v26;
      v33 = v25 * *(float *)(this + 144) + v26 * v33;
    }
    (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(this + 4) + 32))(*(_DWORD *)(this + 4), &v31);
    *(float *)(this + 72) = *(float *)(this + 72) - GDeltaTime;
  }
  *(_BYTE *)(this + 180) = 0;
  *(_BYTE *)(this + 181) = 0;
  for ( i = 0; ; ++i )
  {
    v8 = *(_DWORD *)(this + 156);
    if ( !v8 || i >= (*(_DWORD *)(this + 160) - v8) >> 2 )
      break;
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 156) + 4 * i) + 4))(LODWORD(a2));
    v9 = *(_DWORD *)(this + 156);
    if ( !v9 || i >= (*(_DWORD *)(this + 160) - v9) >> 2 )
      _invalid_parameter_noinfo();
    if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 156) + 4 * i) + 140) )
    {
      *(_BYTE *)(this + 180) = 1;
      *(_BYTE *)(this + 181) = 1;
    }
  }
  v10 = *(_DWORD *)(*(_DWORD *)(this + 8) + 4);
  if ( *(_BYTE *)v10 )
  {
    if ( *(float *)(v10 + 20) > 0.70700002 )
      *(_BYTE *)(this + 180) = 1;
    *(_BYTE *)v10 = 0;
  }
}
