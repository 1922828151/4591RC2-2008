/*
 * func-name: sub_10178C30
 * func-address: 0x10178c30
 * callers: 0x100853c0, 0x10088400, 0x100f37e0, 0x10116ff0
 * callees: 0x101781d0, 0x10178b10
 */

float *__thiscall sub_10178C30(float *this)
{
  float v2; // eax
  float v3; // ecx
  float v4; // edx
  float v5; // eax
  float v6; // ecx
  float v7; // eax
  float v8; // ecx
  float v9; // edx
  float *v10; // eax
  float v11; // ecx
  float v12; // edx
  float v13; // edi
  float v14; // ebx
  float v15; // ebp
  float *v16; // eax
  float v17; // ecx
  float v18; // edx
  float *v19; // eax
  float v20; // ecx
  float v21; // edx
  double v22; // st7
  double v23; // st7
  double v24; // st7
  float v26; // [esp+10h] [ebp-3Ch] BYREF
  float v27; // [esp+14h] [ebp-38h]
  float v28; // [esp+18h] [ebp-34h]
  float v29; // [esp+1Ch] [ebp-30h] BYREF
  float v30; // [esp+20h] [ebp-2Ch]
  float v31; // [esp+24h] [ebp-28h]
  float v32; // [esp+28h] [ebp-24h]
  float v33; // [esp+2Ch] [ebp-20h]
  float v34; // [esp+30h] [ebp-1Ch]
  float v35; // [esp+34h] [ebp-18h] BYREF
  float v36; // [esp+38h] [ebp-14h]
  float v37; // [esp+3Ch] [ebp-10h]
  float v38[3]; // [esp+40h] [ebp-Ch] BYREF

  v2 = this[4];
  v3 = this[5];
  v4 = this[6];
  v29 = v2;
  v5 = this[8];
  v30 = v3;
  v6 = this[9];
  v26 = v5;
  v7 = *this;
  v27 = v6;
  v8 = this[1];
  v31 = v4;
  v9 = this[10];
  v38[0] = v7;
  v38[1] = v8;
  v28 = v9;
  v38[2] = this[2];
  v10 = sub_101781D0(&v29, &v35, v38);
  v11 = v10[1];
  v32 = *v10;
  v12 = v10[2];
  v33 = v11;
  v35 = v29 - v32;
  v13 = v35;
  v34 = v12;
  v36 = v30 - v11;
  v14 = v36;
  v29 = v35;
  v30 = v36;
  v37 = v31 - v12;
  v15 = v37;
  v31 = v37;
  v16 = sub_101781D0(&v26, &v35, v38);
  v17 = v16[1];
  v32 = *v16;
  v18 = v16[2];
  v33 = v17;
  v34 = v18;
  v19 = sub_101781D0(&v26, v38, &v29);
  v20 = v19[1];
  v35 = *v19;
  v21 = v19[2];
  v29 = v35 + v32;
  v30 = v20 + v33;
  v22 = v21 + v34;
  this[4] = v13;
  this[5] = v14;
  this[6] = v15;
  v31 = v22;
  v35 = v26 - v29;
  v23 = v27;
  this[8] = v35;
  v36 = v23 - v30;
  v24 = v28;
  this[9] = v36;
  v37 = v24 - v31;
  this[10] = v37;
  sub_10178B10(this);
  return this;
}
