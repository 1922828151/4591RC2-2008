/*
 * func-name: sub_100DE2C0
 * func-address: 0x100de2c0
 * callers: 0x10010465
 * callees: 0x1000b866
 */

int __thiscall sub_100DE2C0(float *this, int a2, float *a3)
{
  float v5; // [esp+4h] [ebp-40h]
  float v6; // [esp+8h] [ebp-3Ch]
  float v7; // [esp+10h] [ebp-34h]
  float v8; // [esp+14h] [ebp-30h]
  float v9; // [esp+18h] [ebp-2Ch]
  float v10; // [esp+20h] [ebp-24h]
  float v11; // [esp+24h] [ebp-20h]
  float v12; // [esp+28h] [ebp-1Ch]
  float v13; // [esp+30h] [ebp-14h]
  float v14; // [esp+34h] [ebp-10h]
  float v15; // [esp+38h] [ebp-Ch]
  float v16; // [esp+4Ch] [ebp+8h]
  float v17; // [esp+4Ch] [ebp+8h]
  float v18; // [esp+4Ch] [ebp+8h]
  float v19; // [esp+4Ch] [ebp+8h]
  float v20; // [esp+4Ch] [ebp+8h]
  float v21; // [esp+4Ch] [ebp+8h]
  float v22; // [esp+4Ch] [ebp+8h]
  float v23; // [esp+4Ch] [ebp+8h]
  float v24; // [esp+4Ch] [ebp+8h]
  float v25; // [esp+4Ch] [ebp+8h]
  float v26; // [esp+4Ch] [ebp+8h]
  float v27; // [esp+4Ch] [ebp+8h]

  v16 = a3[14] + this[14];
  v15 = v16;
  v17 = a3[13] + this[13];
  v14 = v17;
  v18 = a3[12] + this[12];
  v13 = v18;
  v19 = a3[10] + this[10];
  v12 = v19;
  v20 = a3[9] + this[9];
  v11 = v20;
  v21 = a3[8] + this[8];
  v10 = v21;
  v22 = a3[6] + this[6];
  v9 = v22;
  v23 = a3[5] + this[5];
  v8 = v23;
  v24 = a3[4] + this[4];
  v7 = v24;
  v25 = a3[2] + this[2];
  v6 = v25;
  v26 = a3[1] + this[1];
  v5 = v26;
  v27 = *a3 + *this;
  sub_1000B866(v27, v5, v6, this[3], v7, v8, v9, this[7], v10, v11, v12, this[11], v13, v14, v15, this[15]);
  return a2;
}
