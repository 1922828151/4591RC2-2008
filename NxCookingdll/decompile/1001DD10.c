/*
 * func-name: sub_1001DD10
 * func-address: 0x1001dd10
 * callers: none
 * callees: none
 */

char __thiscall sub_1001DD10(_DWORD *this, _DWORD *a2, int a3, float *a4)
{
  _DWORD *v4; // ebx
  int v5; // ebp
  int v6; // eax
  double v7; // st6
  int v8; // esi
  double v9; // st5
  double v10; // st7
  double v11; // st3
  double v12; // st2
  double v13; // st4
  _DWORD *v14; // eax
  float *v15; // edx
  float *v16; // edi
  float *v17; // ecx
  float v19; // [esp+8h] [ebp-18h]
  float v20; // [esp+Ch] [ebp-14h]
  float v21; // [esp+10h] [ebp-10h]
  float v22; // [esp+14h] [ebp-Ch]
  float v23; // [esp+18h] [ebp-8h]
  float v24; // [esp+1Ch] [ebp-4h]
  int v25; // [esp+24h] [ebp+4h]

  v4 = a2;
  if ( !a2 )
    return 0;
  v5 = a3;
  if ( !a3 )
    return 0;
  v6 = this[18];
  v7 = 3.4028235e38;
  v8 = *(_DWORD *)(v6 + 20);
  v9 = 3.4028235e38;
  v10 = 3.4028235e38;
  v25 = *(_DWORD *)(v6 + 16);
  v11 = -3.4028235e38;
  v12 = -3.4028235e38;
  v13 = -3.4028235e38;
  do
  {
    v14 = (_DWORD *)(v25 + 12 * *v4);
    v15 = (float *)(v8 + 12 * *v14);
    v16 = (float *)(v8 + 12 * v14[2]);
    --v5;
    ++v4;
    v17 = (float *)(v8 + 12 * v14[1]);
    if ( *v15 <= v7 )
      v7 = *v15;
    if ( v15[1] <= v10 )
      v10 = v15[1];
    if ( v15[2] <= v9 )
      v9 = v15[2];
    if ( *v17 <= v7 )
      v7 = *v17;
    if ( v17[1] <= v10 )
      v10 = v17[1];
    if ( v17[2] <= v9 )
      v9 = v17[2];
    if ( *v16 <= v7 )
      v7 = *v16;
    if ( v16[1] <= v10 )
      v10 = v16[1];
    if ( v16[2] <= v9 )
      v9 = v16[2];
    if ( *v15 >= v11 )
      v11 = *v15;
    if ( v15[1] >= v13 )
      v13 = v15[1];
    if ( v12 <= v15[2] )
      v12 = v15[2];
    if ( *v17 >= v11 )
      v11 = *v17;
    if ( v17[1] >= v13 )
      v13 = v17[1];
    if ( v12 <= v17[2] )
      v12 = v17[2];
    if ( *v16 >= v11 )
      v11 = *v16;
    if ( v16[1] >= v13 )
      v13 = v16[1];
    if ( v12 <= v16[2] )
      v12 = v16[2];
  }
  while ( v5 );
  v24 = v12;
  v23 = v13;
  v22 = v11;
  v21 = v9;
  v20 = v10;
  v19 = v7;
  *a4 = v19;
  a4[1] = v20;
  a4[3] = v22;
  a4[2] = v21;
  a4[4] = v23;
  a4[5] = v24;
  return 1;
}
