/*
 * func-name: sub_102C2440
 * func-address: 0x102c2440
 * callers: none
 * callees: 0x102c09f0
 */

void __thiscall sub_102C2440(float *this, float *a2, float *a3, float *a4)
{
  float *v5; // eax
  double v6; // st6
  double v7; // st7
  double v8; // st5
  double v9; // st7
  bool v10; // c3
  float v11; // [esp+4h] [ebp-30h]
  float v12; // [esp+8h] [ebp-2Ch]
  float v13; // [esp+Ch] [ebp-28h]
  float v14[3]; // [esp+10h] [ebp-24h] BYREF
  float v15[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v16[3]; // [esp+28h] [ebp-Ch] BYREF
  float v17; // [esp+40h] [ebp+Ch]
  float v18; // [esp+40h] [ebp+Ch]
  float v19; // [esp+40h] [ebp+Ch]
  float v20; // [esp+40h] [ebp+Ch]
  float v21; // [esp+40h] [ebp+Ch]

  v14[0] = *a4 - *a2;
  v14[1] = a4[1] - a2[1];
  v14[2] = a4[2] - a2[2];
  v15[0] = *a3 - *a2;
  v15[1] = a3[1] - a2[1];
  v15[2] = a3[2] - a2[2];
  v5 = sub_102C09F0(v16, v15, v14);
  v17 = fabs(*v5);
  v11 = v17;
  v18 = fabs(v5[1]);
  v12 = v18;
  v19 = fabs(v5[2]);
  v13 = v19;
  if ( v12 >= (double)v11 )
  {
    v20 = v12;
    v6 = v11;
    v7 = v12;
  }
  else
  {
    v6 = v11;
    v7 = v12;
    v20 = v11;
  }
  v8 = v20;
  if ( v13 >= (double)v20 )
    v8 = v13;
  v21 = v8;
  if ( v21 == v6 )
  {
    v9 = 1.0;
    this[1] = 1.0;
LABEL_8:
    this[6] = v9;
    return;
  }
  v10 = v21 == v7;
  v9 = 1.0;
  *this = 1.0;
  if ( v10 )
    goto LABEL_8;
  this[5] = 1.0;
}
