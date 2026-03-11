/*
 * func-name: sub_1002BBE0
 * func-address: 0x1002bbe0
 * callers: 0x10020b00, 0x1002e590
 * callees: none
 */

char __thiscall sub_1002BBE0(int this, int a2)
{
  unsigned int v2; // eax
  int v3; // ebp
  char result; // al
  _DWORD *v5; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  double v9; // st7
  float *v10; // eax
  float *v11; // ebx
  double v12; // st7
  int v13; // edi
  double v14; // st6
  double v15; // st5
  double v16; // st3
  double v17; // st2
  double v18; // rt0
  double v19; // st1
  double v20; // st2
  int v21; // edi
  int *v22; // esi
  bool v23; // bl
  int v24; // esi
  int v25; // esi
  int v26; // edi
  int v27; // esi
  int v28; // edi
  int *v29; // esi
  int v30; // edi
  int v31; // esi
  int v32; // edi
  int v33; // esi
  int v34; // edi
  int *v35; // esi
  int v36; // edi
  int v37; // esi
  int v38; // edi
  int v39; // esi
  int v40; // esi
  _DWORD *v41; // esi
  _DWORD *v42; // esi
  _DWORD *v43; // esi
  _DWORD *v44; // esi
  _DWORD *v45; // esi
  _DWORD *v46; // esi
  _DWORD *v47; // edx
  _DWORD *v48; // edx
  _DWORD *v49; // edx
  int v50; // edx

  if ( !*(_DWORD *)(this + 248) || !*(_DWORD *)(this + 252) )
    return 0;
  v2 = *(_DWORD *)(this + 208);
  v3 = *(_DWORD *)(this + 224);
  if ( v3 == v2 || *(_DWORD *)a2 > v2 )
    return 0;
  if ( *(_BYTE *)(this + 280) )
  {
    if ( *(_DWORD *)(a2 + 12) )
    {
      v5 = *(_DWORD **)(a2 + 12);
      if ( *v5 == v5[1] )
        return 1;
      if ( *v5 == v5[2] )
        return 1;
      if ( v5[1] == v5[2] )
        return 1;
      v6 = *(_DWORD *)(this + 236);
      v7 = v5[1];
      v8 = 3 * *v5;
      v9 = *(float *)(v6 + 4 * v8);
      v10 = (float *)(v6 + 4 * v8);
      v11 = (float *)(v6 + 12 * v7);
      v12 = v9 - *(float *)(v6 + 12 * *(_DWORD *)(*(_DWORD *)(a2 + 12) + 8));
      v13 = v6 + 12 * *(_DWORD *)(*(_DWORD *)(a2 + 12) + 8);
      v14 = v10[1] - *(float *)(v13 + 4);
      v15 = v10[2] - *(float *)(v13 + 8);
      v16 = v10[1] - v11[1];
      v17 = v10[2] - v11[2];
      v18 = v16 * v15 - v17 * v14;
      v19 = v17 * v12;
      v20 = *v10 - *v11;
      if ( (v14 * v20 - v12 * v16) * (v14 * v20 - v12 * v16) + (v19 - v15 * v20) * (v19 - v15 * v20) + v18 * v18 == 0.0 )
        return 1;
    }
  }
  *(_DWORD *)(48 * v3 + *(_DWORD *)(this + 248) + 24) = *(_DWORD *)(a2 + 4);
  result = 1;
  if ( *(_BYTE *)(this + 282) )
    v21 = *(_DWORD *)(a2 + 8);
  else
    v21 = 1;
  *(_DWORD *)(48 * *(_DWORD *)(this + 224) + *(_DWORD *)(this + 248) + 28) = v21;
  *(_DWORD *)(48 * *(_DWORD *)(this + 224) + *(_DWORD *)(this + 248) + 44) = *(_DWORD *)a2;
  v22 = *(int **)(a2 + 12);
  v23 = *(_BYTE *)(a2 + 24) != 0;
  if ( v22 )
    v24 = *v22;
  else
    v24 = -1;
  *(_DWORD *)(*(_DWORD *)(this + 252) + 12 * *(_DWORD *)(this + 228)) = v24;
  v25 = *(_DWORD *)(a2 + 12);
  if ( v25 )
    v26 = *(_DWORD *)(v25 + 4 * v23 + 4);
  else
    v26 = -1;
  *(_DWORD *)(*(_DWORD *)(this + 252) + 12 * (*(_DWORD *)(this + 228) + 1)) = v26;
  v27 = *(_DWORD *)(a2 + 12);
  if ( v27 )
    v28 = *(_DWORD *)(v27 + 4 * (2 - v23));
  else
    v28 = -1;
  *(_DWORD *)(*(_DWORD *)(this + 252) + 12 * (*(_DWORD *)(this + 228) + 2)) = v28;
  v29 = *(int **)(a2 + 16);
  if ( v29 )
    v30 = *v29;
  else
    v30 = -1;
  *(_DWORD *)(*(_DWORD *)(this + 252) + 12 * *(_DWORD *)(this + 228) + 4) = v30;
  v31 = *(_DWORD *)(a2 + 16);
  if ( v31 )
    v32 = *(_DWORD *)(v31 + 4 * v23 + 4);
  else
    v32 = -1;
  *(_DWORD *)(*(_DWORD *)(this + 252) + 12 * *(_DWORD *)(this + 228) + 16) = v32;
  v33 = *(_DWORD *)(a2 + 16);
  if ( v33 )
    v34 = *(_DWORD *)(v33 + 4 * (2 - v23));
  else
    v34 = -1;
  *(_DWORD *)(*(_DWORD *)(this + 252) + 12 * *(_DWORD *)(this + 228) + 28) = v34;
  v35 = *(int **)(a2 + 20);
  if ( v35 )
    v36 = *v35;
  else
    v36 = -1;
  *(_DWORD *)(*(_DWORD *)(this + 252) + 12 * *(_DWORD *)(this + 228) + 8) = v36;
  v37 = *(_DWORD *)(a2 + 20);
  if ( v37 )
    v38 = *(_DWORD *)(v37 + 4 * v23 + 4);
  else
    v38 = -1;
  *(_DWORD *)(*(_DWORD *)(this + 252) + 12 * *(_DWORD *)(this + 228) + 20) = v38;
  v39 = *(_DWORD *)(a2 + 20);
  if ( v39 )
    v40 = *(_DWORD *)(v39 + 4 * (2 - v23));
  else
    v40 = -1;
  *(_DWORD *)(*(_DWORD *)(this + 252) + 12 * *(_DWORD *)(this + 228) + 32) = v40;
  if ( *(_DWORD *)(a2 + 12) )
  {
    v41 = (_DWORD *)(*(_DWORD *)(this + 252) + 12 * *(_DWORD *)(this + 228));
    if ( *v41 >= *(_DWORD *)(this + 212) )
      *v41 = 0;
    v42 = (_DWORD *)(*(_DWORD *)(this + 252) + 12 * (*(_DWORD *)(this + 228) + 1));
    if ( *v42 >= *(_DWORD *)(this + 212) )
      *v42 = 0;
    v43 = (_DWORD *)(*(_DWORD *)(this + 252) + 12 * (*(_DWORD *)(this + 228) + 2));
    if ( *v43 >= *(_DWORD *)(this + 212) )
      *v43 = 0;
  }
  if ( *(_DWORD *)(a2 + 16) )
  {
    v44 = (_DWORD *)(*(_DWORD *)(this + 252) + 12 * *(_DWORD *)(this + 228) + 4);
    if ( *v44 >= *(_DWORD *)(this + 216) )
      *v44 = 0;
    v45 = (_DWORD *)(*(_DWORD *)(this + 252) + 12 * *(_DWORD *)(this + 228) + 16);
    if ( *v45 >= *(_DWORD *)(this + 216) )
      *v45 = 0;
    v46 = (_DWORD *)(*(_DWORD *)(this + 252) + 12 * *(_DWORD *)(this + 228) + 28);
    if ( *v46 >= *(_DWORD *)(this + 216) )
      *v46 = 0;
  }
  if ( *(_DWORD *)(a2 + 20) )
  {
    v47 = (_DWORD *)(*(_DWORD *)(this + 252) + 12 * *(_DWORD *)(this + 228) + 8);
    if ( *v47 >= *(_DWORD *)(this + 220) )
      *v47 = 0;
    v48 = (_DWORD *)(*(_DWORD *)(this + 252) + 12 * *(_DWORD *)(this + 228) + 20);
    if ( *v48 >= *(_DWORD *)(this + 220) )
      *v48 = 0;
    v49 = (_DWORD *)(*(_DWORD *)(this + 252) + 12 * *(_DWORD *)(this + 228) + 32);
    if ( *v49 >= *(_DWORD *)(this + 220) )
      *v49 = 0;
  }
  *(_DWORD *)(48 * *(_DWORD *)(this + 224) + *(_DWORD *)(this + 248) + 12) = (*(_DWORD *)(this + 228))++;
  *(_DWORD *)(48 * *(_DWORD *)(this + 224) + *(_DWORD *)(this + 248) + 16) = *(_DWORD *)(this + 228);
  v50 = *(_DWORD *)(this + 224);
  *(_DWORD *)(48 * v50 + *(_DWORD *)(this + 248) + 20) = ++*(_DWORD *)(this + 228);
  ++*(_DWORD *)(this + 228);
  ++*(_DWORD *)(this + 224);
  return result;
}
