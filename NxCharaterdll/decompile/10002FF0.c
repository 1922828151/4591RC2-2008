/*
 * func-name: sub_10002FF0
 * func-address: 0x10002ff0
 * callers: 0x10004820
 * callees: 0x1000a846
 */

char __cdecl sub_10002FF0(int a1, int a2, int a3, double *a4, int a5, int a6)
{
  double v6; // st7
  char result; // al
  float v8; // [esp+1Ch] [ebp-94h] BYREF
  float v9[3]; // [esp+20h] [ebp-90h] BYREF
  float v10[3]; // [esp+2Ch] [ebp-84h] BYREF
  float v11[15]; // [esp+38h] [ebp-78h] BYREF
  float v12[15]; // [esp+74h] [ebp-3Ch] BYREF

  if ( *(_DWORD *)(a2 + 36) )
    _wassert(L"volume->GetType()==SWEPT_BOX", L"..\\src\\CharacterController.cpp", 0x4Bu);
  if ( *(_DWORD *)a3 )
    _wassert(L"geom->mType==TOUCHED_USER_BOX", L"..\\src\\CharacterController.cpp", 0x4Cu);
  v12[0] = *a4 - *(double *)(a3 + 8);
  v12[1] = a4[1] - *(double *)(a3 + 16);
  v12[2] = a4[2] - *(double *)(a3 + 24);
  v12[3] = *(float *)(a2 + 40);
  v12[4] = *(float *)(a2 + 44);
  v12[5] = *(float *)(a2 + 48);
  v12[6] = 1.0;
  v12[7] = 0.0;
  v12[8] = 0.0;
  v12[9] = 0.0;
  v12[11] = 0.0;
  v12[12] = 0.0;
  v12[13] = 0.0;
  v12[10] = 1.0;
  v12[14] = 1.0;
  v11[0] = (*(double *)(a3 + 56) + *(double *)(a3 + 32)) * 0.5 - *(double *)(a3 + 8);
  v11[1] = (*(double *)(a3 + 64) + *(double *)(a3 + 40)) * 0.5 - *(double *)(a3 + 16);
  v11[2] = (*(double *)(a3 + 72) + *(double *)(a3 + 48)) * 0.5 - *(double *)(a3 + 24);
  v11[3] = (*(double *)(a3 + 56) - *(double *)(a3 + 32)) * 0.5;
  v11[4] = (*(double *)(a3 + 64) - *(double *)(a3 + 40)) * 0.5;
  v11[5] = 0.5 * (*(double *)(a3 + 72) - *(double *)(a3 + 48));
  v11[6] = 1.0;
  v11[10] = 1.0;
  v11[14] = 1.0;
  v11[7] = 0.0;
  v11[8] = 0.0;
  v11[9] = 0.0;
  v11[11] = 0.0;
  v11[12] = 0.0;
  v11[13] = 0.0;
  if ( !(*(unsigned __int8 (__thiscall **)(int, float *, float *, int, _DWORD, float *, float *, float *))(*(_DWORD *)dword_10022760 + 280))(
          dword_10022760,
          v12,
          v11,
          a5,
          *(float *)(a6 + 36),
          v9,
          v10,
          &v8) )
    return 0;
  v6 = v8;
  if ( *(float *)(a6 + 36) <= (double)v8 )
    return 0;
  result = 1;
  *(float *)(a6 + 24) = v10[0];
  *(float *)(a6 + 28) = v10[1];
  *(float *)(a6 + 32) = v10[2];
  *(_DWORD *)(a6 + 40) = -1;
  *(float *)(a6 + 36) = v6;
  *(double *)a6 = v9[0] + *(double *)(a3 + 8);
  *(double *)(a6 + 8) = v9[1] + *(double *)(a3 + 16);
  *(double *)(a6 + 16) = v9[2] + *(double *)(a3 + 24);
  return result;
}
