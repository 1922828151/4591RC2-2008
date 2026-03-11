/*
 * func-name: sub_100927E0
 * func-address: 0x100927e0
 * callers: 0x10092aa0
 * callees: 0x10092610, 0x101780fe, 0x10178104
 */

float *__thiscall sub_100927E0(float *this, float *a2, float *a3, float *a4)
{
  float v4; // edx
  float v6; // ecx
  bool v7; // c3
  float v8; // ecx
  float v9; // edx
  float v10; // edx
  float v11; // edx
  float *v12; // eax
  float v13; // ecx
  float v14; // edx
  float *v15; // eax
  double v16; // st7
  float *result; // eax
  double v18; // st5
  double v19; // st4
  double v20; // st6
  double v21; // st3
  float v22; // [esp+28h] [ebp-88h]
  float v23; // [esp+3Ch] [ebp-74h] BYREF
  float v24; // [esp+40h] [ebp-70h]
  float v25; // [esp+44h] [ebp-6Ch]
  float v26; // [esp+48h] [ebp-68h] BYREF
  float v27; // [esp+4Ch] [ebp-64h]
  float v28; // [esp+50h] [ebp-60h]
  int v29; // [esp+54h] [ebp-5Ch] BYREF
  float v30; // [esp+58h] [ebp-58h]
  float v31; // [esp+5Ch] [ebp-54h]
  float v32; // [esp+60h] [ebp-50h] BYREF
  float v33; // [esp+64h] [ebp-4Ch]
  float v34; // [esp+68h] [ebp-48h]
  float v35[16]; // [esp+70h] [ebp-40h] BYREF

  v4 = a4[1];
  v6 = *a4;
  v7 = 0.0 == *this;
  v28 = a4[2];
  v26 = v6;
  v8 = *a3;
  v27 = v4;
  v9 = a3[1];
  v25 = a3[2];
  v23 = v8;
  v24 = v9;
  if ( v7 || 0.0 == this[1] || 0.0 == this[2] )
  {
    D3DXMatrixInverse(v35, 0, this + 4);
    D3DXVec3Transform(&v32, &v26, v35);
    v26 = v32;
    v27 = v33;
    v28 = v34;
    D3DXVec3Transform(&v32, &v23, v35);
    v23 = v32;
    v10 = *this;
    v24 = v33;
    v22 = v10;
    v11 = this[2];
    v25 = v34;
    v12 = sub_10092610((float *)&v29, v26, v27, v28, v22, this[1], v11);
    v26 = *v12;
    v13 = *this;
    v27 = v12[1];
    v14 = this[1];
    v28 = v12[2];
    v15 = sub_10092610((float *)&v29, v23, v24, v25, v13, v14, this[2]);
    v23 = *v15;
    v24 = v15[1];
    v25 = v15[2];
    D3DXVec3Transform(&v32, &v26, this + 4);
    v26 = v32;
    v27 = v33;
    v28 = v34;
    D3DXVec3Transform(&v32, &v23, this + 4);
    v23 = v32;
    v24 = v33;
    v25 = v34;
  }
  v16 = v24;
  result = a2;
  v18 = v28;
  v19 = v27;
  v20 = v25;
  *(float *)&v29 = v24 * v28 - v27 * v25;
  v21 = v26;
  v30 = v26 * v25 - v23 * v28;
  v31 = v27 * v23 - v24 * v26;
  *a2 = *(float *)&v29;
  a2[1] = v30;
  a2[2] = v31;
  a2[3] = v21 * v23 + v19 * v16 + v20 * v18;
  return result;
}
