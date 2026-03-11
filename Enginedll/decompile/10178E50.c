/*
 * func-name: sub_10178E50
 * func-address: 0x10178e50
 * callers: none
 * callees: 0x1004c240, 0x10178da0, 0x1017b990
 */

int __thiscall sub_10178E50(int this, float *a2, float *a3, float *a4)
{
  float *v5; // eax
  float v6; // ecx
  float v7; // edx
  float v8; // eax
  float v9; // ecx
  double v10; // st7
  double v11; // st7
  int result; // eax
  float v13; // ecx
  float v14; // [esp+4h] [ebp-3Ch] BYREF
  float v15; // [esp+8h] [ebp-38h]
  float v16; // [esp+Ch] [ebp-34h]
  float v17; // [esp+10h] [ebp-30h] BYREF
  float v18; // [esp+14h] [ebp-2Ch]
  float v19; // [esp+18h] [ebp-28h]
  float v20; // [esp+1Ch] [ebp-24h] BYREF
  float v21; // [esp+20h] [ebp-20h]
  float v22; // [esp+24h] [ebp-1Ch]
  float v23[3]; // [esp+28h] [ebp-18h] BYREF
  _BYTE v24[12]; // [esp+34h] [ebp-Ch] BYREF

  v17 = 0.0;
  v18 = 0.0;
  v19 = 0.0;
  v20 = *a4 - *a2;
  v21 = a4[1] - a2[1];
  v22 = a4[2] - a2[2];
  v23[0] = *a3 - *a2;
  v23[1] = a3[1] - a2[1];
  v23[2] = a3[2] - a2[2];
  v5 = (float *)sub_1017B990(v24, v23, &v20);
  v6 = *v5;
  v7 = v5[1];
  v8 = v5[2];
  v14 = v6;
  v15 = v7;
  v16 = v8;
  sub_1004C240(&v14);
  v9 = v14;
  v14 = *a2 + *a3;
  v17 = v9;
  v10 = a3[1];
  v18 = v15;
  v11 = v10 + a2[1];
  v19 = v16;
  v15 = v11;
  v16 = a3[2] + a2[2];
  v20 = *a4 + v14;
  v21 = v15 + a4[1];
  v22 = a4[2] + v16;
  v14 = v20 * 0.3333329856395721;
  v15 = v21 * 0.3333329856395721;
  v16 = 0.3333329856395721 * v22;
  sub_10178DA0(this, (int)&v17);
  result = LODWORD(v15);
  v13 = v16;
  *(float *)(this + 48) = v14;
  *(_DWORD *)(this + 52) = result;
  *(float *)(this + 56) = v13;
  return result;
}
