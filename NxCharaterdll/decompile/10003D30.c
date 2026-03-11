/*
 * func-name: sub_10003D30
 * func-address: 0x10003d30
 * callers: 0x10004820
 * callees: 0x1000a846
 */

char __cdecl sub_10003D30(int a1, int a2, int a3, double *a4, float *a5, int a6)
{
  int v6; // eax
  int v7; // ecx
  double v8; // st7
  double v9; // st7
  double v10; // st6
  unsigned __int8 (__stdcall *v11)(int, float *, float *, _DWORD, float *, float *, float *); // edx
  double v12; // st7
  char result; // al
  float v14; // [esp+18h] [ebp-48h]
  float v15; // [esp+18h] [ebp-48h]
  float v16; // [esp+18h] [ebp-48h]
  float v17; // [esp+1Ch] [ebp-44h] BYREF
  float v18[3]; // [esp+20h] [ebp-40h] BYREF
  float v19[3]; // [esp+2Ch] [ebp-34h] BYREF
  float v20[3]; // [esp+38h] [ebp-28h] BYREF
  float v21; // [esp+44h] [ebp-1Ch] BYREF
  float v22; // [esp+48h] [ebp-18h]
  float v23; // [esp+4Ch] [ebp-14h]
  float v24; // [esp+50h] [ebp-10h]
  float v25; // [esp+54h] [ebp-Ch]
  float v26; // [esp+58h] [ebp-8h]
  float v27; // [esp+5Ch] [ebp-4h]

  if ( *(_DWORD *)(a2 + 36) != 1 )
    _wassert(L"volume->GetType()==SWEPT_CAPSULE", L"..\\src\\CharacterController.cpp", 0x185u);
  if ( *(_DWORD *)a3 != 4 )
    _wassert(L"geom->mType==TOUCHED_SPHERE", L"..\\src\\CharacterController.cpp", 0x186u);
  v27 = *(float *)(a2 + 40);
  v6 = *(_DWORD *)(a1 + 208);
  v7 = dword_10022760;
  v23 = 0.0;
  v22 = 0.0;
  v21 = 0.0;
  v26 = 0.0;
  v25 = 0.0;
  v24 = 0.0;
  v8 = *(float *)(a2 + 44) * 0.5;
  *(&v21 + v6) = *(&v21 + v6) + v8;
  *(&v24 + v6) = *(&v24 + v6) - v8;
  v14 = *a4 - *(double *)(a3 + 8);
  v9 = v14;
  v21 = v14 + v21;
  v15 = a4[1] - *(double *)(a3 + 16);
  v10 = v15;
  v22 = v15 + v22;
  v16 = a4[2] - *(double *)(a3 + 24);
  v23 = v16 + v23;
  v24 = v9 + v24;
  v25 = v10 + v25;
  v26 = v16 + v26;
  v11 = *(unsigned __int8 (__stdcall **)(int, float *, float *, _DWORD, float *, float *, float *))(*(_DWORD *)v7 + 276);
  v18[0] = -*a5;
  v18[1] = -a5[1];
  v18[2] = -a5[2];
  if ( !v11(a3 + 32, &v21, v18, *(float *)(a6 + 36), &v17, v19, v20) )
    return 0;
  v12 = v17;
  if ( *(float *)(a6 + 36) <= (double)v17 )
    return 0;
  *(float *)(a6 + 36) = v17;
  *(double *)a6 = v19[0];
  *(double *)(a6 + 8) = v19[1];
  *(double *)(a6 + 16) = v19[2];
  *(float *)(a6 + 24) = v20[0];
  *(float *)(a6 + 28) = v20[1];
  *(float *)(a6 + 32) = v20[2];
  *(_DWORD *)(a6 + 40) = -1;
  if ( 0.0 == v12 )
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
    result = 1;
    *(double *)a6 = *(double *)(a3 + 8) + *(double *)a6;
    *(double *)(a6 + 8) = *(double *)(a3 + 16) + *(double *)(a6 + 8);
    *(double *)(a6 + 16) = *(double *)(a3 + 24) + *(double *)(a6 + 16);
  }
  return result;
}
