/*
 * func-name: sub_10004930
 * func-address: 0x10004930
 * callers: 0x10004820
 * callees: 0x1000a846
 */

char __cdecl sub_10004930(_DWORD *a1, unsigned int a2, double *a3, double *a4, int a5, int a6)
{
  double *v6; // esi
  unsigned int v7; // ebp
  int v9; // edx
  int v10; // ecx
  double v11; // st7
  int v12; // eax
  int v13; // edi
  bool v14; // cf
  unsigned int v15; // [esp+28h] [ebp-54h] BYREF
  int v16; // [esp+2Ch] [ebp-50h]
  float v17; // [esp+30h] [ebp-4Ch] BYREF
  float v18; // [esp+34h] [ebp-48h]
  float v19; // [esp+38h] [ebp-44h]
  float v20; // [esp+3Ch] [ebp-40h]
  float v21; // [esp+40h] [ebp-3Ch]
  float v22; // [esp+44h] [ebp-38h]
  float v23; // [esp+48h] [ebp-34h]
  float v24[3]; // [esp+4Ch] [ebp-30h] BYREF
  float v25[3]; // [esp+58h] [ebp-24h] BYREF
  float v26[6]; // [esp+64h] [ebp-18h] BYREF

  if ( *(_DWORD *)(a2 + 36) )
    _wassert(L"volume->GetType()==SWEPT_BOX", L"..\\src\\CharacterController.cpp", 0x92u);
  v6 = a3;
  if ( *(_DWORD *)a3 != 2 )
    _wassert(L"geom->mType==TOUCHED_MESH", L"..\\src\\CharacterController.cpp", 0x93u);
  v7 = *((_DWORD *)a3 + 8);
  if ( !v7 )
    return 0;
  v9 = a1[1] + 36 * *((_DWORD *)a3 + 9);
  v10 = *((_DWORD *)a3 + 11);
  v16 = a1[5] + 36 * *((_DWORD *)a3 + 10);
  v11 = *a4;
  a3 = (double *)(a1[9] + 4 * v10);
  v18 = v11 - v6[1];
  v19 = a4[1] - v6[2];
  v12 = a1[30];
  v20 = a4[2] - v6[3];
  v21 = v18 - *(float *)(a2 + 40);
  v22 = v19 - *(float *)(a2 + 44);
  v23 = v20 - *(float *)(a2 + 48);
  v26[0] = v21;
  v26[1] = v22;
  v26[2] = v23;
  v21 = v18 + *(float *)(a2 + 40);
  v22 = v19 + *(float *)(a2 + 44);
  v23 = v20 + *(float *)(a2 + 48);
  v26[3] = v21;
  v26[4] = v22;
  v26[5] = v23;
  v15 = a1[v12 + 31];
  if ( v15 >= v7 )
    v15 = 0;
  v13 = a6;
  if ( !(*(unsigned __int8 (__thiscall **)(int, unsigned int, int, int, double *, float *, int, _DWORD, float *, float *, float *, unsigned int *, unsigned int *))(*(_DWORD *)dword_10022760 + 284))(
          dword_10022760,
          v7,
          v9,
          v16,
          a3,
          v26,
          a5,
          *(float *)(a6 + 36),
          v25,
          v24,
          &v17,
          &a2,
          &v15)
    || *(float *)(v13 + 36) <= (double)v17 )
  {
    return 0;
  }
  v14 = a2 < v7;
  *(float *)(v13 + 36) = v17;
  *(float *)(v13 + 24) = v24[0];
  *(float *)(v13 + 28) = v24[1];
  *(float *)(v13 + 32) = v24[2];
  *(double *)v13 = v25[0] + v6[1];
  *(double *)(v13 + 8) = v25[1] + v6[2];
  *(double *)(v13 + 16) = v25[2] + v6[3];
  if ( !v14 )
    _wassert(L"Index<NbTris", L"..\\src\\CharacterController.cpp", 0xB4u);
  a1[a1[30] + 31] = a2;
  *(_DWORD *)(v13 + 40) = a2 + *((_DWORD *)v6 + 9);
  return 1;
}
