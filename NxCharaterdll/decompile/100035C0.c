/*
 * func-name: sub_100035C0
 * func-address: 0x100035c0
 * callers: 0x10004820
 * callees: 0x1000a846
 */

char __cdecl sub_100035C0(int a1, int a2, int a3, double *a4, float *a5, int a6)
{
  unsigned __int8 (__thiscall *v6)(int, float *, int, float *, _DWORD, float *, float *); // edx
  double v7; // st7
  char result; // al
  void (__stdcall *v9)(float *, float *, float *, float *, float *); // eax
  double v10; // st7
  float v11; // [esp+2Ch] [ebp-78h] BYREF
  float v12; // [esp+30h] [ebp-74h]
  float v13; // [esp+34h] [ebp-70h]
  float v14; // [esp+38h] [ebp-6Ch] BYREF
  float v15; // [esp+3Ch] [ebp-68h]
  float v16; // [esp+40h] [ebp-64h]
  float v17[3]; // [esp+44h] [ebp-60h] BYREF
  float v18[3]; // [esp+50h] [ebp-54h] BYREF
  float v19[3]; // [esp+5Ch] [ebp-48h] BYREF
  float v20; // [esp+68h] [ebp-3Ch] BYREF
  float v21; // [esp+6Ch] [ebp-38h]
  float v22; // [esp+70h] [ebp-34h]
  float v23[3]; // [esp+74h] [ebp-30h] BYREF
  float v24; // [esp+80h] [ebp-24h] BYREF
  float v25; // [esp+84h] [ebp-20h]
  float v26; // [esp+88h] [ebp-1Ch]
  float v27; // [esp+8Ch] [ebp-18h]
  float v28; // [esp+90h] [ebp-14h]
  float v29; // [esp+94h] [ebp-10h]
  float v30; // [esp+98h] [ebp-Ch]
  float v31; // [esp+9Ch] [ebp-8h]
  float v32; // [esp+A0h] [ebp-4h]

  if ( *(_DWORD *)(a2 + 36) )
    _wassert(L"volume->GetType()==SWEPT_BOX", L"..\\src\\CharacterController.cpp", 0xD8u);
  if ( *(_DWORD *)a3 != 4 )
    _wassert(L"geom->mType==TOUCHED_SPHERE", L"..\\src\\CharacterController.cpp", 0xD9u);
  v20 = *a4 - *(double *)(a3 + 8);
  v21 = a4[1] - *(double *)(a3 + 16);
  v22 = a4[2] - *(double *)(a3 + 24);
  v23[0] = *(float *)(a2 + 40);
  v23[1] = *(float *)(a2 + 44);
  v23[2] = *(float *)(a2 + 48);
  v24 = 1.0;
  v25 = 0.0;
  v26 = 0.0;
  v27 = 0.0;
  v29 = 0.0;
  v30 = 0.0;
  v31 = 0.0;
  v28 = 1.0;
  v32 = 1.0;
  v6 = *(unsigned __int8 (__thiscall **)(int, float *, int, float *, _DWORD, float *, float *))(*(_DWORD *)dword_10022760
                                                                                              + 268);
  v17[0] = -*a5;
  v17[1] = -a5[1];
  v17[2] = -a5[2];
  if ( !v6(dword_10022760, &v20, a3 + 32, v17, *(float *)(a6 + 36), &v11, v18) )
    return 0;
  v7 = v11;
  if ( *(float *)(a6 + 36) <= (double)v11 )
    return 0;
  *(float *)(a6 + 36) = v11;
  v14 = -v18[0];
  v15 = -v18[1];
  v16 = -v18[2];
  *(float *)(a6 + 24) = v14;
  *(float *)(a6 + 28) = v15;
  *(float *)(a6 + 32) = v16;
  *(_DWORD *)(a6 + 40) = -1;
  if ( 0.0 == v7 )
  {
    result = 0;
    *(double *)(a6 + 16) = 0.0;
    *(double *)(a6 + 8) = 0.0;
    *(double *)a6 = 0.0;
    *(float *)(a6 + 32) = 0.0;
    *(float *)(a6 + 28) = 0.0;
    *(float *)(a6 + 24) = 0.0;
  }
  else
  {
    v9 = *(void (__stdcall **)(float *, float *, float *, float *, float *))(*(_DWORD *)dword_10022760 + 292);
    v14 = *a5 * v7;
    v15 = v7 * a5[1];
    v16 = v7 * a5[2];
    v19[0] = *(float *)(a3 + 32) - v14;
    v19[1] = *(float *)(a3 + 36) - v15;
    v19[2] = *(float *)(a3 + 40) - v16;
    v9(v19, &v20, v23, &v24, &v14);
    v12 = v29 * v16 + v27 * v14 + v28 * v15;
    v13 = v31 * v15 + v30 * v14 + v32 * v16;
    v14 = v14 * v24 + v15 * v25 + v16 * v26;
    v10 = v11;
    *(double *)a6 = *a5 * v11 + v14 + *(double *)(a3 + 8) + v20;
    result = 1;
    *(double *)(a6 + 8) = v12 + *(double *)(a3 + 16) + v21 + v10 * a5[1];
    *(double *)(a6 + 16) = v10 * a5[2] + v13 + *(double *)(a3 + 24) + v22;
    *(float *)(a6 + 24) = -*(float *)(a6 + 24);
    *(float *)(a6 + 28) = -*(float *)(a6 + 28);
    *(float *)(a6 + 32) = -*(float *)(a6 + 32);
  }
  return result;
}
