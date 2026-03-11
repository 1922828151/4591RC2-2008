/*
 * func-name: sub_10004110
 * func-address: 0x10004110
 * callers: 0x10004820
 * callees: 0x1000a846
 */

char __cdecl sub_10004110(int a1, int a2, int a3, double *a4, float *a5, int a6)
{
  int v6; // eax
  int v7; // ecx
  double v8; // st7
  double v9; // st7
  double v10; // st6
  double v11; // st7
  char result; // al
  float v13; // [esp+1Ch] [ebp-64h]
  float v14; // [esp+1Ch] [ebp-64h]
  float v15; // [esp+1Ch] [ebp-64h]
  float v16; // [esp+20h] [ebp-60h] BYREF
  float v17[3]; // [esp+24h] [ebp-5Ch] BYREF
  float v18[3]; // [esp+30h] [ebp-50h] BYREF
  float v19[3]; // [esp+3Ch] [ebp-44h] BYREF
  float v20; // [esp+48h] [ebp-38h] BYREF
  float v21; // [esp+4Ch] [ebp-34h]
  float v22; // [esp+50h] [ebp-30h]
  float v23; // [esp+54h] [ebp-2Ch]
  float v24; // [esp+58h] [ebp-28h]
  float v25; // [esp+5Ch] [ebp-24h]
  float v26; // [esp+60h] [ebp-20h]
  float v27[7]; // [esp+64h] [ebp-1Ch] BYREF

  if ( *(_DWORD *)(a2 + 36) != 1 )
    _wassert(L"volume->GetType()==SWEPT_CAPSULE", L"..\\src\\CharacterController.cpp", 0x1D0u);
  if ( *(_DWORD *)a3 != 1 )
    _wassert(L"geom->mType==TOUCHED_USER_CAPSULE", L"..\\src\\CharacterController.cpp", 0x1D1u);
  v26 = *(float *)(a2 + 40);
  v6 = *(_DWORD *)(a1 + 208);
  v7 = dword_10022760;
  v22 = 0.0;
  v21 = 0.0;
  v20 = 0.0;
  v25 = 0.0;
  v24 = 0.0;
  v23 = 0.0;
  v8 = *(float *)(a2 + 44) * 0.5;
  *(&v20 + v6) = *(&v20 + v6) + v8;
  *(&v23 + v6) = *(&v23 + v6) - v8;
  v13 = *a4 - *(double *)(a3 + 8);
  v9 = v13;
  v20 = v13 + v20;
  v14 = a4[1] - *(double *)(a3 + 16);
  v10 = v14;
  v21 = v14 + v21;
  v15 = a4[2] - *(double *)(a3 + 24);
  v22 = v15 + v22;
  v23 = v9 + v23;
  v24 = v10 + v24;
  v25 = v15 + v25;
  v27[6] = *(float *)(a3 + 80);
  v27[0] = *(double *)(a3 + 32) - *(double *)(a3 + 8);
  v27[1] = *(double *)(a3 + 40) - *(double *)(a3 + 16);
  v27[2] = *(double *)(a3 + 48) - *(double *)(a3 + 24);
  v27[3] = *(double *)(a3 + 56) - *(double *)(a3 + 8);
  v27[4] = *(double *)(a3 + 64) - *(double *)(a3 + 16);
  v27[5] = *(double *)(a3 + 72) - *(double *)(a3 + 24);
  v17[0] = -*a5;
  v17[1] = -a5[1];
  v17[2] = -a5[2];
  if ( !(*(unsigned __int8 (__stdcall **)(float *, float *, float *, _DWORD, float *, float *, float *))(*(_DWORD *)v7 + 272))(
          &v20,
          v27,
          v17,
          *(float *)(a6 + 36),
          &v16,
          v18,
          v19) )
    return 0;
  v11 = v16;
  if ( *(float *)(a6 + 36) <= (double)v16 )
    return 0;
  *(float *)(a6 + 36) = v16;
  *(double *)a6 = v18[0];
  *(double *)(a6 + 8) = v18[1];
  *(double *)(a6 + 16) = v18[2];
  *(float *)(a6 + 24) = v19[0];
  *(float *)(a6 + 28) = v19[1];
  *(float *)(a6 + 32) = v19[2];
  *(_DWORD *)(a6 + 40) = -1;
  if ( 0.0 == v11 )
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
    *(double *)(a6 + 8) = *(double *)(a6 + 8) + *(double *)(a3 + 16);
    *(double *)(a6 + 16) = *(double *)(a3 + 24) + *(double *)(a6 + 16);
  }
  return result;
}
