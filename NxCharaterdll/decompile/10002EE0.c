/*
 * func-name: sub_10002EE0
 * func-address: 0x10002ee0
 * callers: 0x10005170
 * callees: 0x10002dc0
 */

int __thiscall sub_10002EE0(_DWORD *this, double *a2, int a3)
{
  double v3; // st6
  double v4; // st7
  double v5; // st6
  double v6; // st4
  double v7; // st2
  float v9; // [esp+0h] [ebp-3Ch]
  float v10; // [esp+0h] [ebp-3Ch]
  float v11; // [esp+4h] [ebp-38h]
  float v12; // [esp+4h] [ebp-38h]
  float v13; // [esp+8h] [ebp-34h]
  float v14; // [esp+8h] [ebp-34h]
  float v15; // [esp+Ch] [ebp-30h] BYREF
  float v16; // [esp+10h] [ebp-2Ch]
  float v17; // [esp+14h] [ebp-28h]
  float v18; // [esp+18h] [ebp-24h]
  float v19; // [esp+1Ch] [ebp-20h]
  float v20; // [esp+20h] [ebp-1Ch]
  double v21; // [esp+24h] [ebp-18h]
  float v22; // [esp+2Ch] [ebp-10h]

  v3 = a2[4] + a2[1];
  v4 = a2[5] + a2[2];
  v21 = *a2 + a2[3];
  v9 = a2[3] - *a2;
  v11 = a2[4] - a2[1];
  v13 = a2[5] - a2[2];
  v15 = v9 * 0.5;
  v16 = v11 * 0.5;
  v17 = 0.5 * v13;
  v10 = v21 * 0.5;
  v12 = v3 * 0.5;
  v14 = v4 * 0.5;
  v5 = v15;
  *(float *)&v21 = v10 - v15;
  v6 = v16;
  *((float *)&v21 + 1) = v12 - v16;
  v7 = v17;
  v22 = v14 - v17;
  v15 = *(float *)&v21;
  v16 = *((float *)&v21 + 1);
  v17 = v22;
  *(float *)&v21 = v5 + v10;
  *((float *)&v21 + 1) = v12 + v6;
  v22 = v7 + v14;
  v18 = *(float *)&v21;
  v19 = *((float *)&v21 + 1);
  v20 = v22;
  return sub_10002DC0(this, &v15, a3, 0);
}
