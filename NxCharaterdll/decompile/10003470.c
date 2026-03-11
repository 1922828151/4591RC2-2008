/*
 * func-name: sub_10003470
 * func-address: 0x10003470
 * callers: 0x10004820
 * callees: 0x1000a846
 */

char __cdecl sub_10003470(int a1, float a2, double *a3, double *a4, int a5, int a6)
{
  double *v6; // esi
  int v7; // edi
  double v8; // st7
  char result; // al
  float v10[3]; // [esp+1Ch] [ebp-54h] BYREF
  float v11[3]; // [esp+28h] [ebp-48h] BYREF
  float v12[15]; // [esp+34h] [ebp-3Ch] BYREF

  if ( *(_DWORD *)(LODWORD(a2) + 36) )
    _wassert(L"volume->GetType()==SWEPT_BOX", L"..\\src\\CharacterController.cpp", 0xC0u);
  v6 = a3;
  if ( *(_DWORD *)a3 != 3 )
    _wassert(L"geom->mType==TOUCHED_BOX", L"..\\src\\CharacterController.cpp", 0xC1u);
  v12[0] = *a4 - a3[1];
  v12[1] = a4[1] - a3[2];
  v12[2] = a4[2] - a3[3];
  v12[3] = *(float *)(LODWORD(a2) + 40);
  v12[4] = *(float *)(LODWORD(a2) + 44);
  v7 = a6;
  v12[5] = *(float *)(LODWORD(a2) + 48);
  v12[6] = 1.0;
  v12[7] = 0.0;
  v12[8] = 0.0;
  v12[9] = 0.0;
  v12[11] = 0.0;
  v12[12] = 0.0;
  v12[13] = 0.0;
  v12[10] = 1.0;
  v12[14] = 1.0;
  if ( !(*(unsigned __int8 (__stdcall **)(float *, double *, int, _DWORD, float *, float *, float *))(*(_DWORD *)dword_10022760 + 280))(
          v12,
          a3 + 4,
          a5,
          *(float *)(a6 + 36),
          v11,
          v10,
          &a2) )
    return 0;
  v8 = a2;
  if ( *(float *)(v7 + 36) <= (double)a2 )
    return 0;
  result = 1;
  *(float *)(v7 + 24) = v10[0];
  *(float *)(v7 + 28) = v10[1];
  *(float *)(v7 + 32) = v10[2];
  *(_DWORD *)(v7 + 40) = -1;
  *(float *)(v7 + 36) = v8;
  *(double *)v7 = v11[0] + v6[1];
  *(double *)(v7 + 8) = v11[1] + v6[2];
  *(double *)(v7 + 16) = v11[2] + v6[3];
  return result;
}
