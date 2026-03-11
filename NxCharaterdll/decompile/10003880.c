/*
 * func-name: sub_10003880
 * func-address: 0x10003880
 * callers: 0x10004820
 * callees: 0x1000a846
 */

char __cdecl sub_10003880(int a1, int a2, int a3, double *a4, float *a5, int a6)
{
  unsigned __int8 (__stdcall *v6)(float *, int, float *, _DWORD, float *, float *); // eax
  double v7; // st7
  char result; // al
  float v9; // [esp+30h] [ebp-68h] BYREF
  float v10; // [esp+34h] [ebp-64h] BYREF
  float v11; // [esp+38h] [ebp-60h] BYREF
  float v12; // [esp+3Ch] [ebp-5Ch]
  float v13; // [esp+40h] [ebp-58h]
  float v14[3]; // [esp+44h] [ebp-54h] BYREF
  float v15[3]; // [esp+50h] [ebp-48h] BYREF
  float v16; // [esp+5Ch] [ebp-3Ch] BYREF
  float v17; // [esp+60h] [ebp-38h]
  float v18; // [esp+64h] [ebp-34h]
  float v19[3]; // [esp+68h] [ebp-30h] BYREF
  float v20; // [esp+74h] [ebp-24h] BYREF
  float v21; // [esp+78h] [ebp-20h]
  float v22; // [esp+7Ch] [ebp-1Ch]
  float v23; // [esp+80h] [ebp-18h]
  float v24; // [esp+84h] [ebp-14h]
  float v25; // [esp+88h] [ebp-10h]
  float v26; // [esp+8Ch] [ebp-Ch]
  float v27; // [esp+90h] [ebp-8h]
  float v28; // [esp+94h] [ebp-4h]

  if ( *(_DWORD *)(a2 + 36) )
    _wassert(L"volume->GetType()==SWEPT_BOX", L"..\\src\\CharacterController.cpp", 0x101u);
  if ( *(_DWORD *)a3 != 5 )
    _wassert(L"geom->mType==TOUCHED_CAPSULE", L"..\\src\\CharacterController.cpp", 0x102u);
  v16 = *a4 - *(double *)(a3 + 8);
  v17 = a4[1] - *(double *)(a3 + 16);
  v18 = a4[2] - *(double *)(a3 + 24);
  v19[0] = *(float *)(a2 + 40);
  v19[1] = *(float *)(a2 + 44);
  v19[2] = *(float *)(a2 + 48);
  v20 = 1.0;
  v21 = 0.0;
  v22 = 0.0;
  v23 = 0.0;
  v25 = 0.0;
  v26 = 0.0;
  v27 = 0.0;
  v24 = 1.0;
  v28 = 1.0;
  v14[0] = -*a5;
  v14[1] = -a5[1];
  v6 = *(unsigned __int8 (__stdcall **)(float *, int, float *, _DWORD, float *, float *))(*(_DWORD *)dword_10022760 + 264);
  v14[2] = -a5[2];
  if ( !v6(&v16, a3 + 32, v14, *(float *)(a6 + 36), &v9, v15) )
    return 0;
  v7 = v9;
  if ( *(float *)(a6 + 36) <= (double)v9 )
    return 0;
  *(float *)(a6 + 36) = v9;
  v11 = -v15[0];
  v12 = -v15[1];
  v13 = -v15[2];
  *(float *)(a6 + 24) = v11;
  *(float *)(a6 + 28) = v12;
  *(float *)(a6 + 32) = v13;
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
    (*(void (__thiscall **)(int, int, float *, float *, float *, float *, float *))(*(_DWORD *)dword_10022760 + 296))(
      dword_10022760,
      a3 + 32,
      &v16,
      v19,
      &v20,
      &v10,
      &v11);
    result = 1;
    v9 = v25 * v13 + v23 * v11 + v24 * v12;
    v10 = v27 * v12 + v26 * v11 + v28 * v13;
    v11 = v11 * v20 + v12 * v21 + v13 * v22;
    *(double *)a6 = v16 + v11 + *(double *)(a3 + 8);
    *(double *)(a6 + 8) = v9 + v17 + *(double *)(a3 + 16);
    *(double *)(a6 + 16) = v10 + v18 + *(double *)(a3 + 24);
  }
  return result;
}
