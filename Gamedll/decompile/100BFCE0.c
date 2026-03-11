/*
 * func-name: ?BatchBillBoardRotated@SurfaceDecal@@SAXAAVVector@@0MMKPAVTexture@@PAVMaterial@@AAVCamera@@W4BlendMode@@4@Z_0
 * func-address: 0x100bfce0
 * callers: 0x10011b12
 * callees: 0x100133ea, 0x102c1be0
 */

int __usercall SurfaceDecal::BatchBillBoardRotated@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        float *a3,
        int a4,
        float a5,
        float a6,
        int a7,
        int a8,
        struct Material *a9,
        int a10,
        int a11,
        int a12)
{
  float *v12; // eax
  double v13; // st7
  double v14; // st7
  float *v15; // eax
  double v16; // st7
  double v17; // st7
  int result; // eax
  unsigned int v19; // edi
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // ebx
  char *v24; // esi
  _DWORD *v25; // ebp
  int v26; // eax
  float *v27; // edx
  double v28; // st7
  int v29; // edx
  char *v30; // edx
  double v31; // st5
  int v32; // edx
  char *v33; // edx
  char *v34; // ecx
  double v35; // st5
  int v36; // eax
  double v37; // st5
  int v38; // eax
  int v39; // eax
  char *v40; // edi
  int v41; // esi
  int v42; // edx
  int v45; // [esp+14h] [ebp-60h]
  int v46; // [esp+14h] [ebp-60h]
  int v47; // [esp+18h] [ebp-5Ch]
  int v48; // [esp+18h] [ebp-5Ch]
  __int64 v49; // [esp+1Ch] [ebp-58h] BYREF
  int v50; // [esp+24h] [ebp-50h]
  float v51; // [esp+28h] [ebp-4Ch]
  float v52; // [esp+2Ch] [ebp-48h]
  float v53; // [esp+30h] [ebp-44h]
  _BYTE v54[64]; // [esp+34h] [ebp-40h] BYREF
  unsigned int v55; // [esp+80h] [ebp+Ch]
  int v56; // [esp+8Ch] [ebp+18h]

  v12 = (float *)FXManager::Instance(v45, v47);
  v13 = v12[9];
  v12 += 9;
  *(float *)&v49 = v13 * a5;
  *((float *)&v49 + 1) = v12[1] * a5;
  v14 = a5 * v12[2];
  qword_103B5758 = v49;
  *(float *)&v50 = v14;
  dword_103B5760 = v50;
  v15 = (float *)FXManager::Instance(v46, v48);
  v16 = v15[12];
  v15 += 12;
  *(float *)&v49 = v16 * a5;
  *((float *)&v49 + 1) = v15[1] * a5;
  v17 = a5 * v15[2];
  qword_103B5764 = v49;
  *(float *)&v50 = v17;
  dword_103B576C = v50;
  if ( a8 )
  {
    result = FXManager::getBatchForWriting(0, a8, a12);
    v19 = result;
    v55 = result;
  }
  else
  {
    result = (int)a9;
    if ( !*((_DWORD *)a9 + 38) )
      return result;
    result = FXManager::getBatchForWriting(0, a9);
    v19 = result;
    v55 = result;
  }
  if ( v19 != -1 )
  {
    v20 = FXManager::batchedQuads[0];
    v21 = FXManager::batchedQuads[1];
    if ( !v21 || v19 >= (FXManager::batchedQuads[2] - v21) / 20 )
    {
      _invalid_parameter_noinfo();
      v20 = FXManager::batchedQuads[0];
    }
    v22 = *(_DWORD *)(v20 + 4);
    v23 = 20 * v19;
    v24 = (char *)&FXManager::vertexIndicesBatches + 162110 * *(_DWORD *)(FXManager::batchedQuads[1] + 20 * v19 + 12);
    v25 = (_DWORD *)(v20 + 4);
    if ( !v22 || v19 >= (*(_DWORD *)(v20 + 8) - v22) / 20 )
      _invalid_parameter_noinfo();
    v26 = *(_DWORD *)(v23 + *v25 + 16);
    *(_DWORD *)&v24[96 * v26 + 12] = a7;
    v27 = (float *)&v24[96 * v26];
    v56 = v26;
    *(float *)&v49 = *a3 - *(float *)&qword_103B5758;
    *((float *)&v49 + 1) = a3[1] - *((float *)&qword_103B5758 + 1);
    *(float *)&v50 = a3[2] - *(float *)&dword_103B5760;
    v51 = *(float *)&v49 - *(float *)&qword_103B5764;
    v52 = *((float *)&v49 + 1) - *((float *)&qword_103B5764 + 1);
    v28 = *(float *)&v50 - *(float *)&dword_103B576C;
    *v27 = v51;
    v27[1] = v52;
    v53 = v28;
    v27[2] = v53;
    v27[4] = 0.0;
    v27[5] = 1.0;
    v29 = 12 * v26 + 3;
    *(_DWORD *)&v24[8 * v29 + 12] = a7;
    v30 = &v24[8 * v29];
    v51 = *a3 + *(float *)&qword_103B5758;
    v52 = a3[1] + *((float *)&qword_103B5758 + 1);
    v53 = *(float *)&dword_103B5760 + a3[2];
    *(float *)&v49 = v51 - *(float *)&qword_103B5764;
    *((float *)&v49 + 1) = v52 - *((float *)&qword_103B5764 + 1);
    v31 = v53 - *(float *)&dword_103B576C;
    *(_QWORD *)v30 = v49;
    *(float *)&v50 = v31;
    *((float *)v30 + 2) = *(float *)&v50;
    *((float *)v30 + 4) = 1.0;
    *((float *)v30 + 5) = 1.0;
    v32 = 12 * v26 + 6;
    *(_DWORD *)&v24[8 * v32 + 12] = a7;
    v33 = &v24[8 * v32];
    v51 = *a3 - *(float *)&qword_103B5758;
    v52 = a3[1] - *((float *)&qword_103B5758 + 1);
    v53 = a3[2] - *(float *)&dword_103B5760;
    *(float *)&v49 = v51 + *(float *)&qword_103B5764;
    v34 = &v24[96 * v26 + 72];
    *((float *)&v49 + 1) = v52 + *((float *)&qword_103B5764 + 1);
    v35 = v53 + *(float *)&dword_103B576C;
    *(_QWORD *)v33 = v49;
    *(float *)&v50 = v35;
    *((float *)v33 + 2) = *(float *)&v50;
    *((float *)v33 + 4) = 0.0;
    *((float *)v33 + 5) = 0.0;
    *((_DWORD *)v34 + 3) = a7;
    v51 = *a3 + *(float *)&qword_103B5758;
    v52 = a3[1] + *((float *)&qword_103B5758 + 1);
    v53 = *(float *)&dword_103B5760 + a3[2];
    *(float *)&v49 = v51 + *(float *)&qword_103B5764;
    *((float *)&v49 + 1) = v52 + *((float *)&qword_103B5764 + 1);
    v36 = HIDWORD(v49);
    v37 = v53 + *(float *)&dword_103B576C;
    *(_DWORD *)v34 = v49;
    *((_DWORD *)v34 + 1) = v36;
    *(float *)&v50 = v37;
    *((float *)v34 + 2) = *(float *)&v50;
    *((float *)v34 + 4) = 1.0;
    *((float *)v34 + 5) = 0.0;
    v38 = FXManager::batchedQuads[1];
    if ( !v38 || v55 >= (FXManager::batchedQuads[2] - v38) / 20 )
      _invalid_parameter_noinfo();
    ++*(_DWORD *)(v23 + FXManager::batchedQuads[1] + 16);
    v39 = FXManager::Instance(a2, a1);
    sub_100133EA(v54, a6, a4, v39 + 60);
    v40 = &v24[96 * v56];
    v41 = 4;
    do
    {
      *(float *)&v49 = 0.0;
      *((float *)&v49 + 1) = 0.0;
      *(float *)&v50 = 0.0;
      sub_102C1BE0(v40, &v49);
      v42 = HIDWORD(v49);
      result = v50;
      *(_DWORD *)v40 = v49;
      *((_DWORD *)v40 + 1) = v42;
      *((_DWORD *)v40 + 2) = result;
      v40 += 24;
      --v41;
    }
    while ( v41 );
  }
  return result;
}
