/*
 * func-name: sub_10027C30
 * func-address: 0x10027c30
 * callers: 0x100281b0
 * callees: 0x10026de0, 0x10026e40, 0x10027110
 */

int *sub_10027C30()
{
  int *v0; // eax
  int *v1; // esi
  int *result; // eax
  float *v3; // ecx
  float *v4; // ecx
  float *v5; // ecx
  float *v6; // ecx
  float *v7; // ecx
  float *v8; // ecx
  float *v9; // ecx
  float *v10; // ecx
  float *v11; // ecx
  float *v12; // ecx
  float *v13; // ecx
  float *v14; // ecx
  float *v15; // ecx
  float *v16; // ecx

  v0 = (int *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 36, 261);
  v1 = v0;
  if ( v0 )
  {
    v0[1] = 0;
    v0[2] = 0;
    *v0 = 0;
    sub_10027110(v0, 8);
    v1[4] = 0;
    v1[5] = 0;
    v1[3] = 0;
    sub_10026DE0(v1 + 3, 24);
    v1[7] = 0;
    v1[8] = 0;
    v1[6] = 0;
    sub_10026E40(v1 + 6, 6);
    v1[1] = 8;
    v1[4] = 24;
    v1[7] = 6;
    result = v1;
  }
  else
  {
    result = 0;
  }
  v3 = (float *)*result;
  *v3 = 0.0;
  v3[1] = 0.0;
  v3[2] = 0.0;
  v4 = (float *)*result;
  v4[3] = 0.0;
  v4[4] = 0.0;
  v4[5] = 1.0;
  v5 = (float *)*result;
  v5[6] = 0.0;
  v5[7] = 1.0;
  v5[8] = 0.0;
  v6 = (float *)*result;
  v6[9] = 0.0;
  v6[10] = 1.0;
  v6[11] = 1.0;
  v7 = (float *)*result;
  v7[12] = 1.0;
  v7 += 12;
  v7[1] = 0.0;
  v7[2] = 0.0;
  v8 = (float *)(*result + 60);
  *v8 = 1.0;
  v8[1] = 0.0;
  v8[2] = 1.0;
  v9 = (float *)(*result + 72);
  *v9 = 1.0;
  v9[1] = 1.0;
  v9[2] = 0.0;
  v10 = (float *)*result;
  v10[21] = 1.0;
  v10[22] = 1.0;
  v10[23] = 1.0;
  v11 = (float *)result[6];
  *v11 = -1.0;
  v11[1] = 0.0;
  v11[2] = 0.0;
  v11[3] = 0.0;
  v12 = (float *)result[6];
  v12[4] = 1.0;
  v12[5] = 0.0;
  v12[6] = 0.0;
  v12[7] = -1.0;
  v13 = (float *)result[6];
  v13[8] = 0.0;
  v13 += 8;
  v13[1] = -1.0;
  v13[2] = 0.0;
  v13[3] = 0.0;
  v14 = (float *)(result[6] + 48);
  *v14 = 0.0;
  v14[1] = 1.0;
  v14[2] = 0.0;
  v14[3] = -1.0;
  v15 = (float *)result[6];
  v15[16] = 0.0;
  v15[17] = 0.0;
  v15[18] = -1.0;
  v15[19] = 0.0;
  v16 = (float *)result[6];
  v16[20] = 0.0;
  v16[21] = 0.0;
  v16 += 20;
  v16[2] = 1.0;
  v16[3] = -1.0;
  *(_DWORD *)result[3] = 11;
  *(_DWORD *)(result[3] + 4) = 65559;
  *(_DWORD *)(result[3] + 8) = 196623;
  *(_DWORD *)(result[3] + 12) = 131088;
  *(_DWORD *)(result[3] + 16) = 17170445;
  *(_DWORD *)(result[3] + 20) = 17235989;
  *(_DWORD *)(result[3] + 24) = 17104905;
  *(_DWORD *)(result[3] + 28) = 17039378;
  *(_DWORD *)(result[3] + 32) = 33554451;
  *(_DWORD *)(result[3] + 36) = 33816582;
  *(_DWORD *)(result[3] + 40) = 33882132;
  *(_DWORD *)(result[3] + 44) = 33619968;
  *(_DWORD *)(result[3] + 48) = 50528278;
  *(_DWORD *)(result[3] + 52) = 50790404;
  *(_DWORD *)(result[3] + 56) = 50724881;
  *(_DWORD *)(result[3] + 60) = 50462722;
  *(_DWORD *)(result[3] + 64) = 67108867;
  *(_DWORD *)(result[3] + 68) = 67239950;
  *(_DWORD *)(result[3] + 72) = 67502087;
  *(_DWORD *)(result[3] + 76) = 67371016;
  *(_DWORD *)(result[3] + 80) = 83951626;
  *(_DWORD *)(result[3] + 84) = 84213765;
  *(_DWORD *)(result[3] + 88) = 84344844;
  *(_DWORD *)(result[3] + 92) = 84082689;
  return result;
}
