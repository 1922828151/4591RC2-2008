/*
 * func-name: sub_10004670
 * func-address: 0x10004670
 * callers: 0x10004820
 * callees: 0x1000a846
 */

char __cdecl sub_10004670(_DWORD *a1, int a2, int a3, double *a4, int a5, int a6)
{
  unsigned int v7; // ebp
  int v9; // edx
  int v10; // ecx
  bool v11; // cf
  float v12; // [esp+10h] [ebp-5Ch]
  unsigned int v13; // [esp+38h] [ebp-34h] BYREF
  unsigned int v14; // [esp+3Ch] [ebp-30h] BYREF
  int v15; // [esp+40h] [ebp-2Ch]
  float v16; // [esp+44h] [ebp-28h] BYREF
  float v17[3]; // [esp+48h] [ebp-24h] BYREF
  float v18[3]; // [esp+54h] [ebp-18h] BYREF
  float v19[3]; // [esp+60h] [ebp-Ch] BYREF
  int v20; // [esp+78h] [ebp+Ch]

  if ( *(_DWORD *)(a2 + 36) != 1 )
    _wassert(L"volume->GetType()==SWEPT_CAPSULE", L"..\\src\\CharacterController.cpp", 0x129u);
  if ( *(_DWORD *)a3 != 2 )
    _wassert(L"geom->mType==TOUCHED_MESH", L"..\\src\\CharacterController.cpp", 0x12Au);
  v7 = *(_DWORD *)(a3 + 32);
  if ( !v7 )
    return 0;
  v9 = a1[1] + 36 * *(_DWORD *)(a3 + 36);
  v10 = a1[30];
  v20 = a1[9] + 4 * *(_DWORD *)(a3 + 44);
  v17[0] = *a4 - *(double *)(a3 + 8);
  v17[1] = a4[1] - *(double *)(a3 + 16);
  v17[2] = a4[2] - *(double *)(a3 + 24);
  v14 = a1[v10 + 31];
  if ( v14 >= v7 )
    v14 = 0;
  v12 = *(float *)(a6 + 36);
  v15 = *(_DWORD *)dword_10022760;
  if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD, unsigned int, int, int, float *, _DWORD, _DWORD, int, _DWORD, float *, float *, float *, unsigned int *, unsigned int *))(v15 + 288))(
          dword_10022760,
          a1[52],
          v7,
          v9,
          v20,
          v17,
          *(float *)(a2 + 40),
          *(float *)(a2 + 44),
          a5,
          LODWORD(v12),
          v19,
          v18,
          &v16,
          &v13,
          &v14)
    || *(float *)(a6 + 36) <= (double)v16 )
  {
    return 0;
  }
  v11 = v13 < v7;
  *(float *)(a6 + 36) = v16;
  *(float *)(a6 + 24) = v18[0];
  *(float *)(a6 + 28) = v18[1];
  *(float *)(a6 + 32) = v18[2];
  *(double *)a6 = v19[0] + *(double *)(a3 + 8);
  *(double *)(a6 + 8) = v19[1] + *(double *)(a3 + 16);
  *(double *)(a6 + 16) = v19[2] + *(double *)(a3 + 24);
  if ( !v11 )
    _wassert(L"Index<NbTris", L"..\\src\\CharacterController.cpp", 0x14Du);
  a1[a1[30] + 31] = v13;
  *(_DWORD *)(a6 + 40) = v13 + *(_DWORD *)(a3 + 36);
  return 1;
}
