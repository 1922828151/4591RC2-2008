/*
 * func-name: ?BatchBillBoard@SurfaceDecal@@SAXAAVVector@@MKPAVTexture@@PAVMaterial@@AAVCamera@@W4BlendMode@@4@Z_0
 * func-address: 0x100be510
 * callers: 0x10003daf
 * callees: none
 */

int __cdecl SurfaceDecal::BatchBillBoard(
        float *a1,
        float a2,
        int a3,
        int a4,
        struct Material *a5,
        int a6,
        int a7,
        int a8)
{
  float *v8; // eax
  double v9; // st7
  double v10; // st7
  float *v11; // eax
  double v12; // st7
  int result; // eax
  unsigned int v14; // edi
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // ebx
  char *v19; // esi
  _DWORD *v20; // ebp
  int v21; // ecx
  int v22; // edx
  float *v23; // edx
  double v24; // st7
  int v25; // edx
  char *v26; // edx
  double v27; // st5
  int v28; // edx
  char *v29; // edx
  char *v30; // ecx
  double v31; // st5
  double v32; // st5
  int v33; // eax
  int v34; // eax
  int v35; // [esp+0h] [ebp-20h]
  int v36; // [esp+0h] [ebp-20h]
  int v37; // [esp+4h] [ebp-1Ch]
  int v38; // [esp+4h] [ebp-1Ch]
  __int64 v39; // [esp+8h] [ebp-18h]
  float v40; // [esp+8h] [ebp-18h]
  __int64 v41; // [esp+8h] [ebp-18h]
  float v42; // [esp+Ch] [ebp-14h]
  int v43; // [esp+10h] [ebp-10h]
  int v44; // [esp+10h] [ebp-10h]
  float v45; // [esp+10h] [ebp-10h]
  float v46; // [esp+10h] [ebp-10h]
  float v47; // [esp+10h] [ebp-10h]
  float v48; // [esp+10h] [ebp-10h]
  float v49; // [esp+14h] [ebp-Ch]
  float v50; // [esp+14h] [ebp-Ch]
  float v51; // [esp+14h] [ebp-Ch]
  float v52; // [esp+14h] [ebp-Ch]
  float v53; // [esp+18h] [ebp-8h]
  float v54; // [esp+18h] [ebp-8h]
  float v55; // [esp+18h] [ebp-8h]
  float v56; // [esp+18h] [ebp-8h]
  float v57; // [esp+1Ch] [ebp-4h]
  float v58; // [esp+1Ch] [ebp-4h]
  float v59; // [esp+1Ch] [ebp-4h]
  float v60; // [esp+1Ch] [ebp-4h]
  unsigned int v61; // [esp+28h] [ebp+8h]

  v8 = (float *)FXManager::Instance(v35, v37);
  v9 = v8[9];
  v8 += 9;
  *(float *)&v39 = v9 * a2;
  *((float *)&v39 + 1) = v8[1] * a2;
  v10 = a2 * v8[2];
  qword_103B5758 = v39;
  *(float *)&v43 = v10;
  dword_103B5760 = v43;
  v11 = (float *)(FXManager::Instance(v36, v38) + 48);
  *(float *)&v39 = a2 * *v11;
  *((float *)&v39 + 1) = v11[1] * a2;
  v12 = a2 * v11[2];
  qword_103B5764 = v39;
  *(float *)&v44 = v12;
  dword_103B576C = v44;
  if ( a4 )
  {
    result = FXManager::getBatchForWriting(0, a4, a8);
    v14 = result;
    v61 = result;
  }
  else
  {
    result = (int)a5;
    if ( !*((_DWORD *)a5 + 38) )
      return result;
    result = FXManager::getBatchForWriting(0, a5);
    v14 = result;
    v61 = result;
  }
  if ( v14 != -1 )
  {
    v15 = FXManager::batchedQuads[0];
    v16 = FXManager::batchedQuads[1];
    if ( !v16 || v14 >= (FXManager::batchedQuads[2] - v16) / 20 )
    {
      _invalid_parameter_noinfo();
      v15 = FXManager::batchedQuads[0];
    }
    v17 = *(_DWORD *)(v15 + 4);
    v18 = 20 * v14;
    v19 = (char *)&FXManager::vertexIndicesBatches + 162110 * *(_DWORD *)(FXManager::batchedQuads[1] + 20 * v14 + 12);
    v20 = (_DWORD *)(v15 + 4);
    if ( !v17 || v14 >= (*(_DWORD *)(v15 + 8) - v17) / 20 )
      _invalid_parameter_noinfo();
    v21 = 4 * *(_DWORD *)(v18 + *v20 + 16);
    v22 = 12 * *(_DWORD *)(v18 + *v20 + 16);
    *(_DWORD *)&v19[8 * v22 + 12] = a3;
    v23 = (float *)&v19[8 * v22];
    v40 = *a1 - *(float *)&qword_103B5758;
    v42 = a1[1] - *((float *)&qword_103B5758 + 1);
    v45 = a1[2] - *(float *)&dword_103B5760;
    v49 = v40 - *(float *)&qword_103B5764;
    v53 = v42 - *((float *)&qword_103B5764 + 1);
    v24 = v45 - *(float *)&dword_103B576C;
    *v23 = v49;
    v23[1] = v53;
    v57 = v24;
    v23[2] = v57;
    v23[4] = 0.0;
    v23[5] = 1.0;
    v25 = 3 * v21 + 3;
    *(_DWORD *)&v19[8 * v25 + 12] = a3;
    v26 = &v19[8 * v25];
    v50 = *(float *)&qword_103B5758 + *a1;
    v54 = a1[1] + *((float *)&qword_103B5758 + 1);
    v58 = *(float *)&dword_103B5760 + a1[2];
    *(float *)&v41 = v50 - *(float *)&qword_103B5764;
    *((float *)&v41 + 1) = v54 - *((float *)&qword_103B5764 + 1);
    v27 = v58 - *(float *)&dword_103B576C;
    *(_QWORD *)v26 = v41;
    v46 = v27;
    *((float *)v26 + 2) = v46;
    *((float *)v26 + 4) = 1.0;
    *((float *)v26 + 5) = 1.0;
    v28 = 3 * v21 + 6;
    *(_DWORD *)&v19[8 * v28 + 12] = a3;
    v29 = &v19[8 * v28];
    v51 = *a1 - *(float *)&qword_103B5758;
    v55 = a1[1] - *((float *)&qword_103B5758 + 1);
    v59 = a1[2] - *(float *)&dword_103B5760;
    *(float *)&v41 = v51 + *(float *)&qword_103B5764;
    v30 = &v19[24 * v21 + 72];
    *((float *)&v41 + 1) = v55 + *((float *)&qword_103B5764 + 1);
    v31 = v59 + *(float *)&dword_103B576C;
    *(_QWORD *)v29 = v41;
    v47 = v31;
    *((float *)v29 + 2) = v47;
    *((float *)v29 + 4) = 0.0;
    *((float *)v29 + 5) = 0.0;
    *((_DWORD *)v30 + 3) = a3;
    v52 = *(float *)&qword_103B5758 + *a1;
    v56 = a1[1] + *((float *)&qword_103B5758 + 1);
    v60 = *(float *)&dword_103B5760 + a1[2];
    *(float *)&v41 = v52 + *(float *)&qword_103B5764;
    *((float *)&v41 + 1) = v56 + *((float *)&qword_103B5764 + 1);
    v32 = v60 + *(float *)&dword_103B576C;
    *(_QWORD *)v30 = v41;
    v48 = v32;
    *((float *)v30 + 2) = v48;
    *((float *)v30 + 4) = 1.0;
    *((float *)v30 + 5) = 0.0;
    v33 = FXManager::batchedQuads[1];
    if ( !v33 || v61 >= (FXManager::batchedQuads[2] - v33) / 20 )
      _invalid_parameter_noinfo();
    v34 = FXManager::batchedQuads[1];
    ++*(_DWORD *)(v18 + v34 + 16);
    return v18 + v34 + 16;
  }
  return result;
}
