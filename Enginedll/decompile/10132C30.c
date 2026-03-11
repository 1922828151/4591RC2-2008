/*
 * func-name: sub_10132C30
 * func-address: 0x10132c30
 * callers: 0x10133ce0
 * callees: 0x1004c240
 */

int __cdecl sub_10132C30(float *a1, int a2)
{
  double v2; // st7
  int v3; // eax
  float *v4; // ebx
  double v5; // st6
  double v6; // st5
  double v7; // st4
  float *v8; // edx
  double v9; // st3
  double v10; // st2
  double v11; // st2
  int result; // eax
  float *v13; // edi
  float *v14; // ebx
  int v15; // [esp+4h] [ebp-314h]
  float v16; // [esp+8h] [ebp-310h]
  float v17; // [esp+8h] [ebp-310h]
  float v18; // [esp+8h] [ebp-310h]
  char *v19; // [esp+Ch] [ebp-30Ch]
  float v20; // [esp+10h] [ebp-308h]
  float v21; // [esp+14h] [ebp-304h] BYREF
  float v22; // [esp+18h] [ebp-300h]
  float v23; // [esp+1Ch] [ebp-2FCh]
  float v24; // [esp+20h] [ebp-2F8h]
  float v25; // [esp+24h] [ebp-2F4h]
  int v26; // [esp+28h] [ebp-2F0h]
  float v27; // [esp+2Ch] [ebp-2ECh]
  float v28; // [esp+30h] [ebp-2E8h]
  float v29; // [esp+34h] [ebp-2E4h]
  float v30; // [esp+38h] [ebp-2E0h]
  float v31; // [esp+3Ch] [ebp-2DCh]
  float v32; // [esp+40h] [ebp-2D8h]
  float v33; // [esp+44h] [ebp-2D4h]
  float v34; // [esp+48h] [ebp-2D0h]
  float v35; // [esp+4Ch] [ebp-2CCh]
  float v36; // [esp+50h] [ebp-2C8h]
  float v37; // [esp+54h] [ebp-2C4h]
  float v38; // [esp+58h] [ebp-2C0h]
  float v39; // [esp+5Ch] [ebp-2BCh]
  float v40; // [esp+60h] [ebp-2B8h]
  float v41; // [esp+64h] [ebp-2B4h]
  float v42; // [esp+68h] [ebp-2B0h]
  float v43; // [esp+6Ch] [ebp-2ACh]
  float v44; // [esp+70h] [ebp-2A8h]
  float v45; // [esp+74h] [ebp-2A4h]
  float v46; // [esp+78h] [ebp-2A0h]
  float v47; // [esp+7Ch] [ebp-29Ch]
  float v48; // [esp+80h] [ebp-298h]
  float v49; // [esp+84h] [ebp-294h]
  double v50; // [esp+88h] [ebp-290h]
  _DWORD v51[14]; // [esp+90h] [ebp-288h] BYREF
  float v52[112]; // [esp+C8h] [ebp-250h] BYREF
  double v53; // [esp+288h] [ebp-90h]
  double v54; // [esp+290h] [ebp-88h]
  double v55; // [esp+298h] [ebp-80h]
  double v56; // [esp+2A0h] [ebp-78h]
  float v57[14]; // [esp+2A8h] [ebp-70h] BYREF
  float v58[14]; // [esp+2E0h] [ebp-38h] BYREF

  v2 = 0.0;
  v52[0] = 0.0;
  v52[1] = 0.0;
  v52[2] = 0.0;
  v52[3] = 0.0;
  v52[4] = 0.0;
  v52[5] = 0.0;
  v52[6] = 0.0;
  v52[7] = 0.0;
  v52[8] = 0.0;
  v52[9] = 0.0;
  v52[10] = 0.0;
  v52[11] = 0.0;
  v52[12] = 0.0;
  v52[13] = 0.0;
  v52[14] = 0.0;
  v52[15] = 0.0;
  v52[16] = 0.0;
  v52[17] = 0.0;
  v52[18] = 0.0;
  v52[19] = 0.0;
  v52[20] = 0.0;
  v52[21] = 0.0;
  v52[22] = 0.0;
  v52[23] = 0.0;
  v52[24] = 0.0;
  v52[25] = 0.0;
  v52[26] = 0.0;
  v52[27] = 0.0;
  v52[28] = 0.0;
  v52[29] = 0.0;
  v52[30] = 0.0;
  v52[31] = 0.0;
  v52[32] = 0.0;
  v52[33] = 0.0;
  v52[34] = 0.0;
  v52[35] = 0.0;
  v52[36] = 0.0;
  v52[37] = 0.0;
  v52[38] = 0.0;
  v52[39] = 0.0;
  v52[40] = 0.0;
  v52[41] = 0.0;
  v52[42] = 0.0;
  v52[43] = 0.0;
  v52[44] = 0.0;
  v52[45] = 0.0;
  v52[46] = 0.0;
  v52[47] = 0.0;
  v52[48] = 0.0;
  v52[49] = 0.0;
  v52[50] = 0.0;
  v52[51] = 0.0;
  v52[52] = 0.0;
  v52[53] = 0.0;
  v52[54] = 0.0;
  v52[55] = 0.0;
  v52[56] = 0.0;
  v52[57] = 0.0;
  v52[58] = 0.0;
  v52[59] = 0.0;
  v52[60] = 0.0;
  v52[61] = 0.0;
  v52[62] = 0.0;
  v52[63] = 0.0;
  v52[64] = 0.0;
  v52[65] = 0.0;
  v52[66] = 0.0;
  v52[67] = 0.0;
  v52[68] = 0.0;
  v52[69] = 0.0;
  v52[70] = 0.0;
  v52[71] = 0.0;
  v52[72] = 0.0;
  v52[73] = 0.0;
  v52[74] = 0.0;
  v52[75] = 0.0;
  v52[76] = 0.0;
  v52[77] = 0.0;
  v52[78] = 0.0;
  v3 = 0;
  v52[79] = 0.0;
  v15 = 0;
  v52[80] = 0.0;
  v4 = v52;
  v52[81] = 0.0;
  v52[82] = 0.0;
  v52[83] = 0.0;
  v52[84] = 0.0;
  v52[85] = 0.0;
  v52[86] = 0.0;
  v52[87] = 0.0;
  v52[88] = 0.0;
  v52[89] = 0.0;
  v52[90] = 0.0;
  v52[91] = 0.0;
  v52[92] = 0.0;
  v52[93] = 0.0;
  v52[94] = 0.0;
  v52[95] = 0.0;
  v52[96] = 0.0;
  v52[97] = 0.0;
  v52[98] = 0.0;
  v52[99] = 0.0;
  v52[100] = 0.0;
  v52[101] = 0.0;
  v52[102] = 0.0;
  v52[103] = 0.0;
  v52[104] = 0.0;
  v52[105] = 0.0;
  v52[106] = 0.0;
  v52[107] = 0.0;
  v52[108] = 0.0;
  v52[109] = 0.0;
  v52[110] = 0.0;
  v52[111] = 0.0;
  v56 = *(float *)(a2 + 36);
  v54 = *(float *)(a2 + 32);
  v53 = *(float *)(a2 + 40);
  v19 = (char *)a1;
  do
  {
    v26 = v3 + 1;
    qmemcpy(v57, v19, sizeof(v57));
    v5 = v57[1];
    v6 = v57[0];
    v7 = v57[2];
    v8 = &a1[14 * ((v3 + 1) % 3)];
    v9 = *(float *)(a2 + 36) * v57[1];
    v10 = *(float *)(a2 + 32);
    qmemcpy(v58, v8, sizeof(v58));
    v16 = v9 + v10 * v57[0] + *(float *)(a2 + 40) * v57[2];
    v20 = v16 + *(double *)(a2 + 24);
    v55 = v58[0];
    v50 = v58[2];
    v17 = v58[0] * v54 + v58[1] * v56 + v58[2] * v53;
    v18 = v17 + *(double *)(a2 + 24);
    if ( v20 >= 0.001 )
    {
      v11 = v18;
    }
    else
    {
      v11 = v18;
      if ( v18 < 0.001 )
        goto LABEL_4;
    }
    if ( v20 <= -0.001 || v11 <= -0.001 )
    {
      *(float *)&v51[6] = v2;
      v51[7] = v51[6];
      v51[8] = v51[6];
      v51[9] = v51[6];
      v51[10] = v51[6];
      v51[11] = v51[6];
      v36 = v20 / (v20 - v11);
      v27 = v55 - v6;
      v28 = v58[1] - v5;
      v29 = v50 - v7;
      v33 = v27 * v36;
      v34 = v28 * v36;
      v35 = v29 * v36;
      v37 = v6 + v33;
      *(float *)v51 = v37;
      v38 = v5 + v34;
      *(float *)&v51[1] = v38;
      v39 = v7 + v35;
      *(float *)&v51[2] = v39;
      v45 = v58[12] - v57[12];
      v46 = v58[13] - v57[13];
      v24 = v45 * v36;
      v25 = v46 * v36;
      v40 = v57[12] + v24;
      *(float *)&v51[12] = v40;
      v41 = v57[13] + v25;
      *(float *)&v51[13] = v41;
      v42 = v58[3] - v57[3];
      v43 = v58[4] - v57[4];
      v44 = v58[5] - v57[5];
      v47 = v42 * v36;
      v48 = v43 * v36;
      v49 = v36 * v44;
      v30 = v57[3] + v47;
      v21 = v30;
      v31 = v57[4] + v48;
      v22 = v31;
      v32 = v57[5] + v49;
      v23 = v32;
      sub_1004C240(&v21);
      v2 = 0.0;
      *(float *)&v51[5] = v23;
      *(float *)&v51[3] = v21;
      *(float *)&v51[4] = v22;
      if ( v20 <= 0.0 )
      {
        if ( v18 > 0.0 )
        {
          ++v15;
          qmemcpy(v4, v51, 0x38u);
          v4 += 14;
        }
      }
      else
      {
        qmemcpy(v4, v19, 0x38u);
        v14 = v4 + 14;
        qmemcpy(v14, v51, 0x38u);
        v15 += 2;
        v4 = v14 + 14;
      }
    }
    else
    {
      ++v15;
      v13 = v4;
      v4 += 14;
      qmemcpy(v13, v19, 0x38u);
      if ( v11 < 0.001 )
      {
        ++v15;
        qmemcpy(v4, v8, 0x38u);
        v4 += 14;
      }
    }
LABEL_4:
    v3 = v26;
    v19 += 56;
  }
  while ( v26 < 3 );
  result = v15;
  if ( v15 > 0 )
    qmemcpy(a1, v52, 4 * ((unsigned int)(56 * v15) >> 2));
  return result;
}
