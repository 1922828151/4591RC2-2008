/*
 * func-name: ?setPosDir@LightBeam@@QAEXAAVVector@@0@Z_0
 * func-address: 0x100aa240
 * callers: 0x10010e33
 * callees: 0x1000f1dc, 0x100144b6, 0x102c0750, 0x102c9fe0
 */

void __thiscall LightBeam::setPosDir(LightBeam *this, struct Vector *a2, struct Vector *a3)
{
  unsigned int v4; // edi
  bool v5; // cc
  int v6; // ebp
  int v7; // eax
  float *v8; // eax
  double v9; // st6
  double v10; // st7
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  float v16; // [esp+8h] [ebp-40h]
  float v17; // [esp+8h] [ebp-40h]
  float v18; // [esp+8h] [ebp-40h]
  float v19; // [esp+Ch] [ebp-3Ch]
  float v20; // [esp+Ch] [ebp-3Ch]
  float v21; // [esp+Ch] [ebp-3Ch]
  float v22; // [esp+10h] [ebp-38h]
  float v23; // [esp+10h] [ebp-38h]
  float v24; // [esp+10h] [ebp-38h]
  float v25; // [esp+14h] [ebp-34h]
  float v26; // [esp+14h] [ebp-34h]
  float v27; // [esp+14h] [ebp-34h]
  float v28; // [esp+18h] [ebp-30h]
  float v29; // [esp+18h] [ebp-30h]
  float v30; // [esp+18h] [ebp-30h]
  float v31; // [esp+1Ch] [ebp-2Ch]
  float v32; // [esp+1Ch] [ebp-2Ch]
  float v33; // [esp+1Ch] [ebp-2Ch]
  _BYTE v34[16]; // [esp+20h] [ebp-28h] BYREF
  int v35; // [esp+30h] [ebp-18h]
  int v36; // [esp+34h] [ebp-14h]
  int v37; // [esp+38h] [ebp-10h]
  int v38; // [esp+3Ch] [ebp-Ch]
  int v39; // [esp+40h] [ebp-8h]
  int v40; // [esp+44h] [ebp-4h]
  struct Vector *v41; // [esp+4Ch] [ebp+4h]
  float v42; // [esp+4Ch] [ebp+4h]
  float v43; // [esp+4Ch] [ebp+4h]
  float v44; // [esp+4Ch] [ebp+4h]
  float v45; // [esp+4Ch] [ebp+4h]
  float v46; // [esp+4Ch] [ebp+4h]

  *((_DWORD *)this + 5) = *(_DWORD *)a2;
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 68) = *(_DWORD *)a3;
  *((_DWORD *)this + 69) = *((_DWORD *)a3 + 1);
  v4 = 0;
  v5 = *((_DWORD *)this + 61) <= 0;
  *((_DWORD *)this + 70) = *((_DWORD *)a3 + 2);
  v41 = 0;
  if ( !v5 )
  {
    v6 = 0;
    do
    {
      v42 = (double)(int)v41 + *((float *)this + 71);
      v7 = *((_DWORD *)this + 47);
      v43 = v42 - (double)(*((_DWORD *)this + 61) * (int)(v42 / (double)*((int *)this + 61)));
      v44 = *((float *)this + 64) * v43 * v43 * *((float *)this + 65) + v43 * *((float *)this + 74);
      v16 = *((float *)this + 68) * v44;
      v19 = v44 * *((float *)this + 69);
      v22 = v44 * *((float *)this + 70);
      v25 = *((float *)this + 5) + v16;
      v28 = *((float *)this + 6) + v19;
      v31 = *((float *)this + 7) + v22;
      if ( !v7 || v4 >= (*((_DWORD *)this + 48) - v7) / 24 )
        _invalid_parameter_noinfo();
      v8 = (float *)(v6 + *((_DWORD *)this + 47));
      *v8 = v25;
      v8[1] = v28;
      ++v4;
      v8[2] = v31;
      v6 += 24;
      v41 = (struct Vector *)v4;
    }
    while ( (signed int)v4 < *((_DWORD *)this + 61) );
  }
  v45 = (float)(*((_DWORD *)this + 61) - 1);
  v46 = *((float *)this + 64) * v45 * v45 * *((float *)this + 65)
      + *((float *)this + 74) * v45
      + (v45 * *((float *)this + 67) + *((float *)this + 66)) * *((float *)this + 65) * 0.5;
  *((float *)this + 50) = v46;
  v26 = *((float *)this + 68) * v46;
  v29 = *((float *)this + 69) * v46;
  v32 = v46 * *((float *)this + 70);
  v17 = *((float *)this + 5) - v26;
  v20 = *((float *)this + 6) - v29;
  v9 = *((float *)this + 7);
  *((float *)this + 58) = v17;
  *((float *)this + 59) = v20;
  v23 = v9 - v32;
  *((float *)this + 60) = v23;
  v27 = v46 * *((float *)this + 68);
  v30 = *((float *)this + 69) * v46;
  v33 = v46 * *((float *)this + 70);
  v18 = *((float *)this + 5) + v27;
  v21 = *((float *)this + 6) + v30;
  v10 = *((float *)this + 7);
  *((float *)this + 55) = v18;
  *((float *)this + 56) = v21;
  v24 = v10 + v33;
  *((float *)this + 57) = v24;
  sub_1000F1DC();
  v11 = *((_DWORD *)this + 56);
  v38 = *((_DWORD *)this + 55);
  v12 = *((_DWORD *)this + 58);
  v13 = *((_DWORD *)this + 57);
  v39 = v11;
  v14 = *((_DWORD *)this + 59);
  v35 = v12;
  v40 = v13;
  v15 = *((_DWORD *)this + 60);
  v36 = v14;
  v37 = v15;
  sub_100144B6((int)v34);
  sub_102C0750(v34);
}
