/*
 * func-name: sub_10005A10
 * func-address: 0x10005a10
 * callers: 0x10006360
 * callees: none
 */

void __thiscall sub_10005A10(_DWORD **this, int a2, int a3, _DWORD *a4, float *a5, int *a6, float *a7, _DWORD *a8)
{
  int v8; // eax
  int *v11; // eax
  int v12; // edi
  int v13; // edx
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // ebx
  int v20; // eax
  long double v21; // st7
  double v22; // st7
  double v23; // st6
  double v24; // st5
  double v25; // st4
  double v26; // st3
  double v27; // st2
  int v28; // esi
  float *v29; // ecx
  float *v30; // ecx
  float *v31; // ecx
  float *v32; // ecx
  int v34; // [esp+18h] [ebp+8h]
  int v35; // [esp+1Ch] [ebp+Ch]

  v8 = *this[180];
  v11 = (int *)(v8 + 68 * a2);
  v12 = *v11;
  v13 = 0;
  if ( *v11 >= 0 )
  {
    v14 = *(_DWORD *)(*a4 + 4 * v12);
    if ( v14 == a3 )
    {
      v13 = 1;
    }
    else if ( v14 >= 0 )
    {
      v13 = -10;
    }
  }
  else
  {
    v13 = 1;
  }
  v15 = v11[1];
  v35 = v15;
  if ( v15 >= 0 )
  {
    v16 = *(_DWORD *)(*a4 + 4 * v15);
    if ( v16 == a3 )
    {
      ++v13;
    }
    else if ( v16 >= 0 )
    {
      v13 = -10;
    }
  }
  else
  {
    ++v13;
  }
  v17 = v11[2];
  v34 = v17;
  if ( v17 >= 0 )
  {
    v18 = *(_DWORD *)(*a4 + 4 * v17);
    if ( v18 == a3 )
    {
      ++v13;
    }
    else if ( v18 >= 0 )
    {
      v13 = -10;
    }
  }
  else
  {
    ++v13;
  }
  v19 = v11[3];
  if ( v19 >= 0 )
  {
    v20 = *(_DWORD *)(*a4 + 4 * v19);
    if ( v20 == a3 )
    {
      ++v13;
    }
    else if ( v20 >= 0 )
    {
      v13 = -10;
    }
  }
  else
  {
    ++v13;
  }
  v21 = *a7;
  if ( v13 >= 1 )
  {
    v22 = *a5;
    v23 = a5[1];
    v24 = a5[2];
    v25 = a5[3];
    v26 = a5[4];
    v27 = a5[5];
    v28 = *this[179];
    v29 = (float *)(v28 + 12 * v12);
    if ( *v29 > v25 )
      v25 = *(float *)(v28 + 12 * v12);
    if ( v29[1] > v26 )
      v26 = v29[1];
    if ( v29[2] > v27 )
      v27 = v29[2];
    if ( *v29 <= v22 )
      v22 = *v29;
    if ( v29[1] <= v23 )
      v23 = v29[1];
    if ( v29[2] <= v24 )
      v24 = v29[2];
    v30 = (float *)(v28 + 12 * v35);
    if ( *v30 > v25 )
      v25 = *(float *)(v28 + 12 * v35);
    if ( v30[1] > v26 )
      v26 = v30[1];
    if ( v30[2] > v27 )
      v27 = v30[2];
    if ( *v30 <= v22 )
      v22 = *v30;
    if ( v30[1] <= v23 )
      v23 = v30[1];
    if ( v30[2] <= v24 )
      v24 = v30[2];
    if ( v19 >= 0 )
    {
      v31 = (float *)(v28 + 12 * v34);
      if ( *v31 > v25 )
        v25 = *(float *)(v28 + 12 * v34);
      if ( v31[1] > v26 )
        v26 = v31[1];
      if ( v31[2] > v27 )
        v27 = v31[2];
      if ( *v31 <= v22 )
        v22 = *v31;
      if ( v31[1] <= v23 )
        v23 = v31[1];
      if ( v31[2] <= v24 )
        v24 = v31[2];
      v32 = (float *)(v28 + 12 * v19);
      if ( *v32 > v25 )
        v25 = *(float *)(v28 + 12 * v19);
      if ( v32[1] > v26 )
        v26 = v32[1];
      if ( v32[2] > v27 )
        v27 = v32[2];
      if ( *v32 <= v22 )
        v22 = *v32;
      if ( v32[1] <= v23 )
        v23 = v32[1];
      if ( v32[2] <= v24 )
        v24 = v32[2];
    }
    v21 = fabs(v26 - v23 - (v27 - v24)) + fabs(v25 - v22 - (v26 - v23)) + fabs(v27 - v24 - (v25 - v22));
  }
  if ( v13 > *a6 || v13 == *a6 && v21 < *a7 )
  {
    *a7 = v21;
    *a6 = v13;
    *a8 = a2;
  }
}
