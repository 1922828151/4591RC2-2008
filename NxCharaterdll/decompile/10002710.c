/*
 * func-name: sub_10002710
 * func-address: 0x10002710
 * callers: 0x10002c70
 * callees: none
 */

char __usercall sub_10002710@<al>(float *a1@<eax>, float *a2@<ecx>)
{
  float v3; // [esp+0h] [ebp-34h]
  float v4; // [esp+0h] [ebp-34h]
  float v5; // [esp+0h] [ebp-34h]
  float v6; // [esp+4h] [ebp-30h]
  float v7; // [esp+8h] [ebp-2Ch]
  float v8; // [esp+Ch] [ebp-28h]
  float v9; // [esp+10h] [ebp-24h]
  float v10; // [esp+14h] [ebp-20h]
  float v11; // [esp+18h] [ebp-1Ch]
  float v12; // [esp+1Ch] [ebp-18h]
  float v13; // [esp+20h] [ebp-14h]
  float v14; // [esp+24h] [ebp-10h]
  float v15; // [esp+28h] [ebp-Ch]
  float v16; // [esp+28h] [ebp-Ch]
  float v17; // [esp+28h] [ebp-Ch]
  float v18; // [esp+28h] [ebp-Ch]
  float v19; // [esp+2Ch] [ebp-8h]
  float v20; // [esp+2Ch] [ebp-8h]
  float v21; // [esp+2Ch] [ebp-8h]
  float v22; // [esp+2Ch] [ebp-8h]
  float v23; // [esp+30h] [ebp-4h]
  float v24; // [esp+30h] [ebp-4h]
  float v25; // [esp+30h] [ebp-4h]
  float v26; // [esp+30h] [ebp-4h]

  if ( !a1 )
    return 0;
  v3 = a2[3];
  v12 = v3 * a2[6];
  v13 = a2[9] * v3;
  v14 = v3 * a2[12];
  v4 = a2[4];
  v6 = v4 * a2[7];
  v7 = a2[10] * v4;
  v8 = v4 * a2[13];
  v5 = a2[5];
  v9 = v5 * a2[8];
  v10 = a2[11] * v5;
  v11 = v5 * a2[14];
  v15 = *a2 - v12;
  v19 = a2[1] - v13;
  v23 = a2[2] - v14;
  a1[21] = v15;
  a1[22] = v19;
  a1[23] = v23;
  a1[12] = v15;
  a1[13] = a1[22];
  a1[14] = a1[23];
  a1[9] = v15;
  a1[10] = a1[13];
  a1[11] = a1[14];
  *a1 = v15;
  a1[1] = a1[10];
  a1[2] = a1[11];
  v16 = v12 + *a2;
  v20 = v13 + a2[1];
  v24 = v14 + a2[2];
  a1[18] = v16;
  a1[19] = v20;
  a1[20] = v24;
  a1[15] = v16;
  a1[16] = a1[19];
  a1[17] = a1[20];
  a1[6] = v16;
  a1[7] = a1[16];
  a1[8] = a1[17];
  a1[3] = v16;
  a1[4] = a1[7];
  a1[5] = a1[8];
  v17 = v9 + v6;
  v21 = v10 + v7;
  v25 = v11 + v8;
  *a1 = *a1 - v17;
  a1[1] = a1[1] - v21;
  a1[2] = a1[2] - v25;
  a1[3] = a1[3] - v17;
  a1[4] = a1[4] - v21;
  a1[5] = a1[5] - v25;
  a1[18] = a1[18] + v17;
  a1[19] = a1[19] + v21;
  a1[20] = v25 + a1[20];
  a1[21] = v17 + a1[21];
  a1[22] = v21 + a1[22];
  a1[23] = v25 + a1[23];
  v18 = v6 - v9;
  v22 = v7 - v10;
  v26 = v8 - v11;
  a1[6] = a1[6] + v18;
  a1[7] = a1[7] + v22;
  a1[8] = v26 + a1[8];
  a1[9] = a1[9] + v18;
  a1[10] = a1[10] + v22;
  a1[11] = a1[11] + v26;
  a1[12] = a1[12] - v18;
  a1[13] = a1[13] - v22;
  a1[14] = a1[14] - v26;
  a1[15] = a1[15] - v18;
  a1[16] = a1[16] - v22;
  a1[17] = a1[17] - v26;
  return 1;
}
