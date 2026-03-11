/*
 * func-name: sub_10004340
 * func-address: 0x10004340
 * callers: 0x10004820
 * callees: 0x1000a846
 */

char __cdecl sub_10004340(int a1, int a2, int a3, double *a4, int a5, int a6)
{
  int v6; // eax
  double v7; // st6
  double v8; // st5
  double v9; // st4
  double v10; // st7
  char result; // al
  float v12; // [esp+28h] [ebp-78h] BYREF
  float v13; // [esp+2Ch] [ebp-74h] BYREF
  float v14; // [esp+30h] [ebp-70h] BYREF
  float v15; // [esp+34h] [ebp-6Ch]
  float v16; // [esp+38h] [ebp-68h]
  float v17[3]; // [esp+3Ch] [ebp-64h] BYREF
  float v18; // [esp+48h] [ebp-58h] BYREF
  float v19; // [esp+4Ch] [ebp-54h]
  float v20; // [esp+50h] [ebp-50h]
  float v21; // [esp+54h] [ebp-4Ch]
  float v22; // [esp+58h] [ebp-48h]
  float v23; // [esp+5Ch] [ebp-44h]
  float v24; // [esp+60h] [ebp-40h]
  float v25; // [esp+64h] [ebp-3Ch] BYREF
  float v26; // [esp+68h] [ebp-38h]
  float v27; // [esp+6Ch] [ebp-34h]
  float v28[3]; // [esp+70h] [ebp-30h] BYREF
  float v29[9]; // [esp+7Ch] [ebp-24h] BYREF

  if ( *(_DWORD *)(a2 + 36) != 1 )
    _wassert(L"volume->GetType()==SWEPT_CAPSULE", L"..\\src\\CharacterController.cpp", 0x1F8u);
  if ( *(_DWORD *)a3 )
    _wassert(L"geom->mType==TOUCHED_USER_BOX", L"..\\src\\CharacterController.cpp", 0x1F9u);
  v24 = *(float *)(a2 + 40);
  v6 = *(_DWORD *)(a1 + 208);
  v20 = 0.0;
  v19 = 0.0;
  v18 = 0.0;
  v23 = 0.0;
  v22 = 0.0;
  v21 = 0.0;
  v7 = *(float *)(a2 + 44) * 0.5;
  *(&v18 + v6) = *(&v18 + v6) + v7;
  *(&v21 + v6) = *(&v21 + v6) - v7;
  v12 = *a4 - *(double *)(a3 + 8);
  v8 = v12;
  v18 = v12 + v18;
  v12 = a4[1] - *(double *)(a3 + 16);
  v9 = v12;
  v19 = v12 + v19;
  v12 = a4[2] - *(double *)(a3 + 24);
  v20 = v12 + v20;
  v21 = v8 + v21;
  v22 = v9 + v22;
  v23 = v12 + v23;
  v25 = (*(double *)(a3 + 56) + *(double *)(a3 + 32)) * 0.5 - *(double *)(a3 + 8);
  v26 = (*(double *)(a3 + 64) + *(double *)(a3 + 40)) * 0.5 - *(double *)(a3 + 16);
  v27 = (*(double *)(a3 + 72) + *(double *)(a3 + 48)) * 0.5 - *(double *)(a3 + 24);
  v28[0] = (*(double *)(a3 + 56) - *(double *)(a3 + 32)) * 0.5;
  v28[1] = (*(double *)(a3 + 64) - *(double *)(a3 + 40)) * 0.5;
  v28[2] = 0.5 * (*(double *)(a3 + 72) - *(double *)(a3 + 48));
  v29[0] = 1.0;
  v29[4] = 1.0;
  v29[8] = 1.0;
  v29[1] = 0.0;
  v29[2] = 0.0;
  v29[3] = 0.0;
  v29[5] = 0.0;
  v29[6] = 0.0;
  v29[7] = 0.0;
  if ( !(*(unsigned __int8 (__stdcall **)(float *, float *, int, _DWORD, float *, float *))(*(_DWORD *)dword_10022760
                                                                                          + 264))(
          &v25,
          &v18,
          a5,
          *(float *)(a6 + 36),
          &v13,
          v17) )
    return 0;
  v10 = v13;
  if ( *(float *)(a6 + 36) <= (double)v13 )
    return 0;
  *(float *)(a6 + 36) = v13;
  *(float *)(a6 + 24) = v17[0];
  *(float *)(a6 + 28) = v17[1];
  *(float *)(a6 + 32) = v17[2];
  *(_DWORD *)(a6 + 40) = -1;
  if ( 0.0 == v10 )
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
    (*(void (__thiscall **)(int, float *, float *, float *, float *, float *, float *))(*(_DWORD *)dword_10022760 + 296))(
      dword_10022760,
      &v18,
      &v25,
      v28,
      v29,
      &v12,
      &v14);
    result = 1;
    v14 = v25 + v14;
    v15 = v26 + v15;
    v16 = v27 + v16;
    *(double *)a6 = v14 + *(double *)(a3 + 8);
    *(double *)(a6 + 8) = v15 + *(double *)(a3 + 16);
    *(double *)(a6 + 16) = v16 + *(double *)(a3 + 24);
  }
  return result;
}
