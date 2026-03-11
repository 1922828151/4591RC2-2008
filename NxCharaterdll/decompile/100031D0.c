/*
 * func-name: sub_100031D0
 * func-address: 0x100031d0
 * callers: 0x10004820
 * callees: 0x1000a846
 */

char __cdecl sub_100031D0(int a1, int a2, int a3, double *a4, float *a5, int a6)
{
  unsigned __int8 (__stdcall *v6)(float *, float *, float *, _DWORD, float *, float *); // eax
  double v7; // st7
  char result; // al
  float v9; // [esp+30h] [ebp-84h] BYREF
  float v10; // [esp+34h] [ebp-80h] BYREF
  float v11; // [esp+38h] [ebp-7Ch]
  float v12; // [esp+3Ch] [ebp-78h]
  float v13; // [esp+40h] [ebp-74h] BYREF
  float v14; // [esp+44h] [ebp-70h] BYREF
  float v15; // [esp+48h] [ebp-6Ch]
  float v16; // [esp+4Ch] [ebp-68h]
  float v17[3]; // [esp+50h] [ebp-64h] BYREF
  float v18; // [esp+5Ch] [ebp-58h] BYREF
  float v19; // [esp+60h] [ebp-54h]
  float v20; // [esp+64h] [ebp-50h]
  float v21; // [esp+68h] [ebp-4Ch]
  float v22; // [esp+6Ch] [ebp-48h]
  float v23; // [esp+70h] [ebp-44h]
  float v24; // [esp+74h] [ebp-40h]
  float v25; // [esp+78h] [ebp-3Ch]
  float v26; // [esp+7Ch] [ebp-38h]
  float v27[3]; // [esp+80h] [ebp-34h] BYREF
  float v28[3]; // [esp+8Ch] [ebp-28h] BYREF
  float v29[7]; // [esp+98h] [ebp-1Ch] BYREF

  if ( *(_DWORD *)(a2 + 36) )
    _wassert(L"volume->GetType()==SWEPT_BOX", L"..\\src\\CharacterController.cpp", 0x66u);
  if ( *(_DWORD *)a3 != 1 )
    _wassert(L"geom->mType==TOUCHED_USER_CAPSULE", L"..\\src\\CharacterController.cpp", 0x67u);
  v14 = *a4 - *(double *)(a3 + 8);
  v15 = a4[1] - *(double *)(a3 + 16);
  v16 = a4[2] - *(double *)(a3 + 24);
  v17[0] = *(float *)(a2 + 40);
  v17[1] = *(float *)(a2 + 44);
  v17[2] = *(float *)(a2 + 48);
  v18 = 1.0;
  v19 = 0.0;
  v20 = 0.0;
  v21 = 0.0;
  v23 = 0.0;
  v24 = 0.0;
  v25 = 0.0;
  v22 = 1.0;
  v26 = 1.0;
  v29[6] = *(float *)(a3 + 80);
  v29[0] = *(double *)(a3 + 32) - *(double *)(a3 + 8);
  v29[1] = *(double *)(a3 + 40) - *(double *)(a3 + 16);
  v29[2] = *(double *)(a3 + 48) - *(double *)(a3 + 24);
  v29[3] = *(double *)(a3 + 56) - *(double *)(a3 + 8);
  v29[4] = *(double *)(a3 + 64) - *(double *)(a3 + 16);
  v29[5] = *(double *)(a3 + 72) - *(double *)(a3 + 24);
  v27[0] = -*a5;
  v27[1] = -a5[1];
  v6 = *(unsigned __int8 (__stdcall **)(float *, float *, float *, _DWORD, float *, float *))(*(_DWORD *)dword_10022760
                                                                                            + 264);
  v27[2] = -a5[2];
  if ( !v6(&v14, v29, v27, *(float *)(a6 + 36), &v9, v28) )
    return 0;
  v7 = v9;
  if ( *(float *)(a6 + 36) <= (double)v9 )
    return 0;
  *(float *)(a6 + 36) = v9;
  v10 = -v28[0];
  v11 = -v28[1];
  v12 = -v28[2];
  *(float *)(a6 + 24) = v10;
  *(float *)(a6 + 28) = v11;
  *(float *)(a6 + 32) = v12;
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
    (*(void (__thiscall **)(int, float *, float *, float *, float *, float *, float *))(*(_DWORD *)dword_10022760 + 296))(
      dword_10022760,
      v29,
      &v14,
      v17,
      &v18,
      &v13,
      &v10);
    result = 1;
    v9 = v23 * v12 + v21 * v10 + v22 * v11;
    v13 = v25 * v11 + v24 * v10 + v26 * v12;
    v10 = v10 * v18 + v11 * v19 + v12 * v20;
    *(double *)a6 = v14 + v10 + *(double *)(a3 + 8);
    *(double *)(a6 + 8) = v9 + v15 + *(double *)(a3 + 16);
    *(double *)(a6 + 16) = v13 + v16 + *(double *)(a3 + 24);
  }
  return result;
}
