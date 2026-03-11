/*
 * func-name: sub_10179B40
 * func-address: 0x10179b40
 * callers: 0x10092c60, 0x100935b0, 0x100df7d0
 * callees: 0x1017810a, 0x101a251c, 0x101a281a, 0x101a2820
 */

int __thiscall sub_10179B40(float *this, float a2, float a3, float a4)
{
  float v5; // eax
  float v6; // ecx
  float v7; // edx
  float v8; // eax
  float v9; // ecx
  float v10; // edx
  int result; // eax
  float v12; // ecx
  float v13; // [esp+10h] [ebp-148h]
  float v14; // [esp+10h] [ebp-148h]
  float v15; // [esp+10h] [ebp-148h]
  float v16; // [esp+10h] [ebp-148h]
  float v17; // [esp+10h] [ebp-148h]
  float v18; // [esp+14h] [ebp-144h]
  float v19; // [esp+14h] [ebp-144h]
  float v20; // [esp+14h] [ebp-144h]
  float v21; // [esp+14h] [ebp-144h]
  float v22[16]; // [esp+18h] [ebp-140h] BYREF
  float v23[16]; // [esp+58h] [ebp-100h] BYREF
  float v24[16]; // [esp+98h] [ebp-C0h] BYREF
  float v25[16]; // [esp+D8h] [ebp-80h] BYREF
  float v26[16]; // [esp+118h] [ebp-40h] BYREF

  memset(v25, 0, sizeof(v25));
  v25[0] = 1.0;
  v25[15] = 1.0;
  memset(v23, 0, sizeof(v23));
  v23[5] = 1.0;
  v23[15] = 1.0;
  memset(v24, 0, sizeof(v24));
  v24[10] = 1.0;
  v24[15] = 1.0;
  v18 = sin(a2);
  v13 = v18;
  v19 = cos(a2);
  v25[5] = v19;
  v25[9] = -v13;
  v25[6] = v13;
  v25[10] = v19;
  v14 = sin(a3);
  v20 = v14;
  v15 = cos(a3);
  v23[0] = v15;
  v23[8] = v20;
  v23[2] = -v20;
  v23[10] = v15;
  v16 = sin(a4);
  v21 = v16;
  v17 = cos(a4);
  v24[0] = v17;
  v24[4] = -v21;
  v24[1] = v21;
  v24[5] = v17;
  memset(v26, 0, sizeof(v26));
  v26[10] = 1.0;
  v26[5] = 1.0;
  v26[0] = 1.0;
  v26[15] = 1.0;
  D3DXMatrixMultiply((int)v26, (int)v25, (int)v23);
  memset(v22, 0, sizeof(v22));
  v22[10] = 1.0;
  v22[5] = 1.0;
  v22[0] = 1.0;
  v22[15] = 1.0;
  D3DXMatrixMultiply((int)v22, (int)v26, (int)v24);
  v5 = v22[1];
  v6 = v22[2];
  *this = v22[0];
  v7 = v22[4];
  this[1] = v5;
  v8 = v22[5];
  this[2] = v6;
  v9 = v22[6];
  this[4] = v7;
  v10 = v22[8];
  this[5] = v8;
  result = LODWORD(v22[9]);
  this[6] = v9;
  v12 = v22[10];
  this[8] = v10;
  *((_DWORD *)this + 9) = result;
  this[10] = v12;
  return result;
}
