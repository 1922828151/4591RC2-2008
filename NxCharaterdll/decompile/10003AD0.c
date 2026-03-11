/*
 * func-name: sub_10003AD0
 * func-address: 0x10003ad0
 * callers: 0x10004820
 * callees: 0x1000a846
 */

char __cdecl sub_10003AD0(int a1, int a2, int a3, double *a4, int a5, int a6)
{
  int v6; // eax
  int v7; // ecx
  double v8; // st7
  double v9; // st7
  double v10; // st6
  double v11; // st7
  char result; // al
  float v13; // [esp+30h] [ebp-3Ch] BYREF
  float v14; // [esp+34h] [ebp-38h] BYREF
  float v15; // [esp+38h] [ebp-34h] BYREF
  float v16; // [esp+3Ch] [ebp-30h]
  float v17; // [esp+40h] [ebp-2Ch]
  float v18[3]; // [esp+44h] [ebp-28h] BYREF
  float v19; // [esp+50h] [ebp-1Ch] BYREF
  float v20; // [esp+54h] [ebp-18h]
  float v21; // [esp+58h] [ebp-14h]
  float v22; // [esp+5Ch] [ebp-10h]
  float v23; // [esp+60h] [ebp-Ch]
  float v24; // [esp+64h] [ebp-8h]
  float v25; // [esp+68h] [ebp-4h]

  if ( *(_DWORD *)(a2 + 36) != 1 )
    _wassert(L"volume->GetType()==SWEPT_CAPSULE", L"..\\src\\CharacterController.cpp", 0x15Au);
  if ( *(_DWORD *)a3 != 3 )
    _wassert(L"geom->mType==TOUCHED_BOX", L"..\\src\\CharacterController.cpp", 0x15Bu);
  v25 = *(float *)(a2 + 40);
  v6 = *(_DWORD *)(a1 + 208);
  v7 = dword_10022760;
  v21 = 0.0;
  v20 = 0.0;
  v19 = 0.0;
  v24 = 0.0;
  v23 = 0.0;
  v22 = 0.0;
  v8 = *(float *)(a2 + 44) * 0.5;
  *(&v19 + v6) = *(&v19 + v6) + v8;
  *(&v22 + v6) = *(&v22 + v6) - v8;
  v13 = *a4 - *(double *)(a3 + 8);
  v9 = v13;
  v19 = v13 + v19;
  v13 = a4[1] - *(double *)(a3 + 16);
  v10 = v13;
  v20 = v13 + v20;
  v13 = a4[2] - *(double *)(a3 + 24);
  v21 = v13 + v21;
  v22 = v9 + v22;
  v23 = v10 + v23;
  v24 = v13 + v24;
  if ( !(*(unsigned __int8 (__thiscall **)(int, int, float *, int, _DWORD, float *, float *))(*(_DWORD *)v7 + 264))(
          v7,
          a3 + 32,
          &v19,
          a5,
          *(float *)(a6 + 36),
          &v14,
          v18) )
    return 0;
  v11 = v14;
  if ( *(float *)(a6 + 36) <= (double)v14 )
    return 0;
  *(float *)(a6 + 36) = v14;
  *(float *)(a6 + 24) = v18[0];
  *(float *)(a6 + 28) = v18[1];
  *(float *)(a6 + 32) = v18[2];
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
    (*(void (__thiscall **)(int, float *, int, int, int, float *, float *))(*(_DWORD *)dword_10022760 + 296))(
      dword_10022760,
      &v19,
      a3 + 32,
      a3 + 44,
      a3 + 56,
      &v13,
      &v15);
    v14 = *(float *)(a3 + 76) * v17 + *(float *)(a3 + 68) * v15 + *(float *)(a3 + 72) * v16;
    v13 = *(float *)(a3 + 84) * v16 + *(float *)(a3 + 80) * v15 + *(float *)(a3 + 88) * v17;
    v15 = v15 * *(float *)(a3 + 56) + v16 * *(float *)(a3 + 60) + v17 * *(float *)(a3 + 64);
    v15 = *(float *)(a3 + 32) + v15;
    v16 = *(float *)(a3 + 36) + v14;
    v17 = *(float *)(a3 + 40) + v13;
    *(double *)a6 = v15 + *(double *)(a3 + 8);
    *(double *)(a6 + 8) = v16 + *(double *)(a3 + 16);
    *(double *)(a6 + 16) = v17 + *(double *)(a3 + 24);
    return 1;
  }
  return result;
}
