/*
 * func-name: sub_10101240
 * func-address: 0x10101240
 * callers: 0x1013f3a0, 0x1013f470
 * callees: 0x10001370, 0x101189f0, 0x1017a0b0
 */

void __thiscall sub_10101240(_DWORD *this)
{
  _DWORD *v2; // edi
  struct RenderDevice *v3; // eax
  _DWORD *v4; // esi
  int v5; // eax
  float v6; // edx
  double v7; // st7
  float v8; // ecx
  float v9; // ecx
  int v10; // eax
  float v11; // edx
  int v12; // eax
  int v13; // eax
  double v14; // st7
  float v15; // ecx
  float v16; // edx
  int v17; // eax
  double v18; // st7
  float v19; // edx
  float v20; // ecx
  int v21; // eax
  int v22; // eax
  double v23; // st7
  float v24; // edx
  float v25; // ecx
  struct RenderDevice *v26; // eax
  _WORD *v27; // [esp+64h] [ebp-54h] BYREF
  int v28; // [esp+68h] [ebp-50h] BYREF
  float v29; // [esp+6Ch] [ebp-4Ch] BYREF
  float v30; // [esp+70h] [ebp-48h]
  float v31; // [esp+74h] [ebp-44h]
  float v32[3]; // [esp+78h] [ebp-40h] BYREF
  float v33[4]; // [esp+84h] [ebp-34h] BYREF
  int v34; // [esp+94h] [ebp-24h]
  float v35; // [esp+98h] [ebp-20h]
  float v36; // [esp+9Ch] [ebp-1Ch]
  float v37; // [esp+A0h] [ebp-18h]
  float v38; // [esp+A4h] [ebp-14h]
  float v39; // [esp+A8h] [ebp-10h]
  int v40; // [esp+B4h] [ebp-4h]

  v2 = this + 54;
  if ( !this[54] )
  {
    v3 = RenderDevice::Instance();
    v4 = this + 53;
    (*(void (__stdcall **)(_DWORD, int, int, int, _DWORD, _DWORD *, _DWORD))(**((_DWORD **)v3 + 427) + 104))(
      *((_DWORD *)v3 + 427),
      192,
      8,
      322,
      0,
      v4,
      0);
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int *, _DWORD))(*(_DWORD *)*v4 + 44))(*v4, 0, 0, &v28, 0);
    v29 = 0.5;
    v30 = 0.5;
    v31 = 0.5;
    v32[0] = -0.5;
    v32[1] = -0.5;
    v32[2] = -0.5;
    sub_10001370(v33, v32, &v29);
    *(_DWORD *)v28 = v34;
    *(float *)(v28 + 4) = v35;
    *(float *)(v28 + 8) = v36;
    v5 = v28;
    v6 = v38;
    v7 = v36;
    *(_DWORD *)(v28 + 24) = v34;
    v31 = v7;
    v8 = v31;
    *(float *)(v5 + 28) = v6;
    *(float *)(v5 + 32) = v8;
    v9 = v38;
    v31 = v36;
    v10 = v28 + 48;
    *(float *)(v28 + 48) = v37;
    v11 = v31;
    *(float *)(v10 + 4) = v9;
    *(float *)(v10 + 8) = v11;
    v40 = 0;
    v30 = v35;
    v12 = v28;
    v31 = v36;
    *(float *)(v28 + 72) = v37;
    *(float *)(v12 + 76) = v30;
    *(float *)(v12 + 80) = v31;
    v13 = v28;
    v14 = v39;
    v15 = v35;
    *(_DWORD *)(v28 + 96) = v34;
    v31 = v14;
    v16 = v31;
    *(float *)(v13 + 100) = v15;
    *(float *)(v13 + 104) = v16;
    v17 = v28;
    v18 = v39;
    v19 = v38;
    *(_DWORD *)(v28 + 120) = v34;
    v31 = v18;
    v20 = v31;
    *(float *)(v17 + 124) = v19;
    *(float *)(v17 + 128) = v20;
    v21 = v28;
    *(float *)(v28 + 144) = v37;
    *(float *)(v21 + 148) = v38;
    *(float *)(v21 + 152) = v39;
    v29 = v37;
    v22 = v28 + 168;
    v30 = v35;
    v23 = v39;
    v24 = v35;
    *(float *)(v28 + 168) = v37;
    v31 = v23;
    v25 = v31;
    *(float *)(v22 + 4) = v24;
    *(float *)(v22 + 8) = v25;
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v4 + 48))(*v4);
    v26 = RenderDevice::Instance();
    (*(void (__stdcall **)(_DWORD, int, int, int, _DWORD, _DWORD *, _DWORD))(**((_DWORD **)v26 + 427) + 108))(
      *((_DWORD *)v26 + 427),
      72,
      8,
      101,
      0,
      v2,
      0);
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _WORD **, _DWORD))(*(_DWORD *)*v2 + 44))(*v2, 0, 0, &v27, 0);
    *v27 = 0;
    v27[1] = 1;
    v27[2] = 2;
    v27[3] = 0;
    v27[4] = 2;
    v27[5] = 3;
    v27[6] = 4;
    v27[7] = 6;
    v27[8] = 5;
    v27[9] = 4;
    v27[10] = 7;
    v27[11] = 6;
    v27[12] = 4;
    v27[13] = 5;
    v27[14] = 1;
    v27[15] = 4;
    v27[16] = 1;
    v27[17] = 0;
    v27[18] = 3;
    v27[19] = 2;
    v27[20] = 6;
    v27[21] = 3;
    v27[22] = 6;
    v27[23] = 7;
    v27[24] = 1;
    v27[25] = 5;
    v27[26] = 6;
    v27[27] = 1;
    v27[28] = 6;
    v27[29] = 2;
    v27[30] = 4;
    v27[31] = 0;
    v27[32] = 3;
    v27[33] = 4;
    v27[34] = 3;
    v27[35] = 7;
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v2 + 48))(*v2);
    v40 = -1;
    sub_1017A0B0(v33);
  }
}
