/*
 * func-name: sub_1001E020
 * func-address: 0x1001e020
 * callers: none
 * callees: none
 */

double __thiscall sub_1001E020(int this, int a2, int a3, int a4, int a5)
{
  double v5; // st7
  unsigned int v7; // ebp
  unsigned int v8; // edi
  int v9; // ecx
  int v10; // edi
  int v11; // edx
  int v12; // esi
  _DWORD *v13; // ebx
  double v14; // st7
  bool v15; // zf
  int v16; // ecx
  int v17; // edx
  _DWORD *v18; // ecx
  int v20; // [esp+0h] [ebp-4h]
  int v21; // [esp+Ch] [ebp+8h]
  int v22; // [esp+10h] [ebp+Ch]
  unsigned int v23; // [esp+14h] [ebp+10h]

  v20 = this;
  if ( (*(_BYTE *)(this + 8) & 0x20) == 0 )
    return (*(float *)(a4 + 4 * a5 + 12) + *(float *)(a4 + 4 * a5)) * 0.5;
  v5 = 0.0;
  v7 = a3;
  v8 = 0;
  if ( a3 >= 4 )
  {
    v9 = *(_DWORD *)(this + 72);
    v10 = *(_DWORD *)(v9 + 16);
    v11 = *(_DWORD *)(v9 + 20);
    v23 = ((unsigned int)(a3 - 4) >> 2) + 1;
    v12 = a2 + 8;
    v22 = 4 * v23;
    do
    {
      v13 = (_DWORD *)(v10 + 12 * *(_DWORD *)(v12 - 8));
      v14 = v5 + *(float *)(v11 + 12 * *v13 + 4 * a5) + *(float *)(v11 + 12 * v13[1] + 4 * a5);
      v12 += 16;
      v15 = v23-- == 1;
      v5 = v14
         + *(float *)(v11 + 12 * v13[2] + 4 * a5)
         + *(float *)(v11 + 12 * *(_DWORD *)(v10 + 12 * *(_DWORD *)(v12 - 20)) + 4 * a5)
         + *(float *)(v11 + 12 * *(_DWORD *)(v10 + 12 * *(_DWORD *)(v12 - 20) + 4) + 4 * a5)
         + *(float *)(v11 + 12 * *(_DWORD *)(v10 + 12 * *(_DWORD *)(v12 - 20) + 8) + 4 * a5)
         + *(float *)(v11 + 12 * *(_DWORD *)(v10 + 12 * *(_DWORD *)(v12 - 16)) + 4 * a5)
         + *(float *)(v11 + 12 * *(_DWORD *)(v10 + 12 * *(_DWORD *)(v12 - 16) + 4) + 4 * a5)
         + *(float *)(v11 + 12 * *(_DWORD *)(v10 + 12 * *(_DWORD *)(v12 - 16) + 8) + 4 * a5)
         + *(float *)(v11 + 12 * *(_DWORD *)(v10 + 12 * *(_DWORD *)(v12 - 12)) + 4 * a5)
         + *(float *)(v11 + 12 * *(_DWORD *)(v10 + 12 * *(_DWORD *)(v12 - 12) + 4) + 4 * a5)
         + *(float *)(v11 + 12 * *(_DWORD *)(v10 + 12 * *(_DWORD *)(v12 - 12) + 8) + 4 * a5);
    }
    while ( !v15 );
    this = v20;
    v8 = v22;
    v7 = a3;
  }
  if ( v8 < v7 )
  {
    v16 = *(_DWORD *)(this + 72);
    v21 = *(_DWORD *)(v16 + 16);
    v17 = *(_DWORD *)(v16 + 20);
    do
    {
      v18 = (_DWORD *)(v21 + 12 * *(_DWORD *)(a2 + 4 * v8++));
      v5 = v5
         + *(float *)(v17 + 12 * *v18 + 4 * a5)
         + *(float *)(v17 + 12 * v18[1] + 4 * a5)
         + *(float *)(v17 + 12 * v18[2] + 4 * a5);
    }
    while ( v8 < v7 );
  }
  return v5 / (double)(3 * v7);
}
