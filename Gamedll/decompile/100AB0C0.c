/*
 * func-name: ?UpdateBeamsInfos@LightBeam@@QAEXXZ_0
 * func-address: 0x100ab0c0
 * callers: 0x1000d6cf
 * callees: 0x10006c5d, 0x1000f1dc, 0x100144b6, 0x102c0750, 0x102c9fe0
 */

void __thiscall LightBeam::UpdateBeamsInfos(LightBeam *this)
{
  char *v2; // edi
  unsigned int v3; // ebx
  int v4; // ebp
  int v5; // eax
  double v6; // st7
  int v7; // eax
  float *v8; // eax
  int v9; // eax
  int v10; // eax
  float *v11; // eax
  double v12; // st6
  double v13; // st7
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // [esp-4h] [ebp-64h]
  int v20; // [esp+10h] [ebp-50h]
  float v21; // [esp+10h] [ebp-50h]
  float v22; // [esp+10h] [ebp-50h]
  float v23; // [esp+14h] [ebp-4Ch]
  float v24; // [esp+18h] [ebp-48h]
  float v25; // [esp+18h] [ebp-48h]
  float v26; // [esp+18h] [ebp-48h]
  float v27; // [esp+18h] [ebp-48h]
  float v28; // [esp+20h] [ebp-40h]
  float v29; // [esp+20h] [ebp-40h]
  float v30; // [esp+20h] [ebp-40h]
  float v31; // [esp+24h] [ebp-3Ch]
  float v32; // [esp+24h] [ebp-3Ch]
  float v33; // [esp+24h] [ebp-3Ch]
  float v34; // [esp+28h] [ebp-38h]
  float v35; // [esp+28h] [ebp-38h]
  float v36; // [esp+28h] [ebp-38h]
  float v37; // [esp+2Ch] [ebp-34h]
  float v38; // [esp+2Ch] [ebp-34h]
  float v39; // [esp+2Ch] [ebp-34h]
  float v40; // [esp+30h] [ebp-30h]
  float v41; // [esp+30h] [ebp-30h]
  float v42; // [esp+30h] [ebp-30h]
  float v43; // [esp+34h] [ebp-2Ch]
  float v44; // [esp+34h] [ebp-2Ch]
  float v45; // [esp+34h] [ebp-2Ch]
  _BYTE v46[16]; // [esp+38h] [ebp-28h] BYREF
  int v47; // [esp+48h] [ebp-18h]
  int v48; // [esp+4Ch] [ebp-14h]
  int v49; // [esp+50h] [ebp-10h]
  int v50; // [esp+54h] [ebp-Ch]
  int v51; // [esp+58h] [ebp-8h]
  int v52; // [esp+5Ch] [ebp-4h]

  v2 = (char *)this + 184;
  v19 = *((_DWORD *)this + 61);
  *((float *)this + 71) = *((float *)this + 73) * GDeltaTime + *((float *)this + 71);
  sub_10006C5D(v19);
  v3 = 0;
  v20 = 0;
  v23 = (float)*((unsigned __int8 *)this + 251);
  if ( *((int *)this + 61) > 0 )
  {
    v4 = 0;
    do
    {
      v21 = (double)v20 + *((float *)this + 71);
      v5 = *((_DWORD *)v2 + 1);
      v22 = v21 - (double)(*((_DWORD *)this + 61) * (int)(v21 / (double)*((int *)this + 61)));
      if ( !v5 || v3 >= (*((_DWORD *)v2 + 2) - v5) / 24 )
        _invalid_parameter_noinfo();
      v6 = v22;
      *(_DWORD *)(*((_DWORD *)v2 + 1) + v4 + 16) = *((unsigned __int8 *)this + 248)
                                                 | ((*((unsigned __int8 *)this + 249)
                                                   | ((*((unsigned __int8 *)this + 250)
                                                     | ((unsigned int)(__int64)(v23
                                                                              - v22
                                                                              / (double)*((int *)this + 61)
                                                                              * v23
                                                                              * *((float *)this + 63)) << 8)) << 8)) << 8);
      v7 = *((_DWORD *)v2 + 1);
      v24 = *((float *)this + 64) * v6 * v6 * *((float *)this + 65) + *((float *)this + 74) * v6;
      v28 = *((float *)this + 68) * v24;
      v31 = v24 * *((float *)this + 69);
      v34 = v24 * *((float *)this + 70);
      v37 = *((float *)this + 5) + v28;
      v40 = *((float *)this + 6) + v31;
      v43 = *((float *)this + 7) + v34;
      if ( !v7 || v3 >= (*((_DWORD *)v2 + 2) - v7) / 24 )
      {
        _invalid_parameter_noinfo();
        v6 = v22;
      }
      v8 = (float *)(v4 + *((_DWORD *)v2 + 1));
      *v8 = v37;
      v8[1] = v40;
      v8[2] = v43;
      v9 = *((_DWORD *)v2 + 1);
      if ( !v9 || v3 >= (*((_DWORD *)v2 + 2) - v9) / 24 )
      {
        _invalid_parameter_noinfo();
        v6 = v22;
      }
      v25 = (v6 * *((float *)this + 67) + *((float *)this + 66)) * *((float *)this + 65) * 0.5 * *((float *)this + 76);
      *(float *)(*((_DWORD *)v2 + 1) + v4 + 12) = v25;
      v10 = *((_DWORD *)v2 + 1);
      if ( !v10 || v3 >= (*((_DWORD *)v2 + 2) - v10) / 24 )
        _invalid_parameter_noinfo();
      v11 = (float *)(*((_DWORD *)v2 + 1) + v4 + 20);
      ++v3;
      v4 += 24;
      v20 = v3;
      *v11 = *((float *)this + 72) * GDeltaTime + *v11;
    }
    while ( (signed int)v3 < *((_DWORD *)this + 61) );
  }
  v26 = (float)(*((_DWORD *)this + 61) - 1);
  v27 = *((float *)this + 64) * v26 * v26 * *((float *)this + 65)
      + *((float *)this + 74) * v26
      + (v26 * *((float *)this + 67) + *((float *)this + 66)) * *((float *)this + 65) * 0.5;
  *((float *)this + 50) = v27;
  v38 = v27 * *((float *)this + 68);
  v41 = *((float *)this + 69) * v27;
  v44 = v27 * *((float *)this + 70);
  v29 = *((float *)this + 5) - v38;
  v32 = *((float *)this + 6) - v41;
  v12 = *((float *)this + 7);
  *((float *)this + 58) = v29;
  *((float *)this + 59) = v32;
  v35 = v12 - v44;
  *((float *)this + 60) = v35;
  v39 = *((float *)this + 68) * v27;
  v42 = *((float *)this + 69) * v27;
  v45 = v27 * *((float *)this + 70);
  v30 = v39 + *((float *)this + 5);
  v33 = *((float *)this + 6) + v42;
  v13 = *((float *)this + 7);
  *((float *)this + 55) = v30;
  *((float *)this + 56) = v33;
  v36 = v13 + v45;
  *((float *)this + 57) = v36;
  sub_1000F1DC();
  v14 = *((_DWORD *)this + 56);
  v50 = *((_DWORD *)this + 55);
  v15 = *((_DWORD *)this + 58);
  v16 = *((_DWORD *)this + 57);
  v51 = v14;
  v17 = *((_DWORD *)this + 59);
  v47 = v15;
  v52 = v16;
  v18 = *((_DWORD *)this + 60);
  v48 = v17;
  v49 = v18;
  sub_100144B6((int)v46);
  sub_102C0750(v46);
}
