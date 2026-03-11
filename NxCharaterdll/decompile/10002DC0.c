/*
 * func-name: sub_10002DC0
 * func-address: 0x10002dc0
 * callers: 0x10002ee0
 * callees: 0x10002c70
 */

int __thiscall sub_10002DC0(_DWORD *this, float *a2, int a3, char a4)
{
  float v5; // [esp+8h] [ebp-78h]
  float v6; // [esp+8h] [ebp-78h]
  float v7; // [esp+Ch] [ebp-74h]
  float v8; // [esp+Ch] [ebp-74h]
  float v9; // [esp+10h] [ebp-70h]
  float v10; // [esp+10h] [ebp-70h]
  float v11; // [esp+14h] [ebp-6Ch]
  float v12; // [esp+14h] [ebp-6Ch]
  float v13; // [esp+18h] [ebp-68h]
  float v14; // [esp+18h] [ebp-68h]
  float v15; // [esp+1Ch] [ebp-64h]
  float v16; // [esp+1Ch] [ebp-64h]
  float v17[9]; // [esp+20h] [ebp-60h] BYREF
  float v18[6]; // [esp+44h] [ebp-3Ch] BYREF
  _BYTE v19[36]; // [esp+5Ch] [ebp-24h] BYREF

  v5 = *a2 + a2[3];
  v7 = a2[4] + a2[1];
  v9 = a2[5] + a2[2];
  v6 = v5 * 0.5;
  v8 = v7 * 0.5;
  v10 = v9 * 0.5;
  v11 = a2[3] - *a2;
  v13 = a2[4] - a2[1];
  v15 = a2[5] - a2[2];
  v12 = v11 * 0.5;
  v14 = v13 * 0.5;
  v16 = 0.5 * v15;
  v17[0] = 1.0;
  v17[1] = 0.0;
  v17[2] = 0.0;
  v17[3] = 0.0;
  v17[5] = 0.0;
  v17[6] = 0.0;
  v17[7] = 0.0;
  v17[4] = 1.0;
  v17[8] = 1.0;
  v18[0] = v6;
  v18[1] = v8;
  v18[2] = v10;
  v18[3] = v12;
  v18[4] = v14;
  v18[5] = v16;
  qmemcpy(v19, v17, sizeof(v19));
  return sub_10002C70(this, v18, a3, a4);
}
