/*
 * func-name: sub_102C0AA0
 * func-address: 0x102c0aa0
 * callers: 0x1002f670
 * callees: 0x100029cd, 0x102c9552, 0x102c9558, 0x102c955e, 0x102c9564
 */

float *__cdecl sub_102C0AA0(float *a1, float a2, float a3, float a4)
{
  float v4; // ecx
  double v5; // st7
  float v7; // [esp+2Ch] [ebp-150h]
  float v8; // [esp+2Ch] [ebp-150h]
  float v9; // [esp+2Ch] [ebp-150h]
  float v10; // [esp+38h] [ebp-144h]
  _BYTE v11[32]; // [esp+3Ch] [ebp-140h] BYREF
  float v12; // [esp+5Ch] [ebp-120h]
  float v13; // [esp+60h] [ebp-11Ch]
  float v14[6]; // [esp+64h] [ebp-118h]
  _BYTE v15[64]; // [esp+7Ch] [ebp-100h] BYREF
  _BYTE v16[64]; // [esp+BCh] [ebp-C0h] BYREF
  _BYTE v17[64]; // [esp+FCh] [ebp-80h] BYREF
  _BYTE v18[64]; // [esp+13Ch] [ebp-40h] BYREF

  v7 = a3 * 0.01745319925248623;
  D3DXMatrixRotationX(v17, LODWORD(v7));
  v8 = a2 * 0.01745319925248623;
  D3DXMatrixRotationY(v15, LODWORD(v8));
  v9 = a4 * 0.01745319925248623;
  D3DXMatrixRotationZ(v18, LODWORD(v9));
  D3DXMatrixMultiply(v16, v17, v15);
  D3DXMatrixMultiply(v11, v18, v16);
  v4 = v13;
  v5 = v14[0];
  *a1 = v12;
  a1[1] = v4;
  v10 = v5;
  a1[2] = v10;
  sub_100029CD();
  return a1;
}
