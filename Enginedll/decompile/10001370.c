/*
 * func-name: sub_10001370
 * func-address: 0x10001370
 * callers: 0x10002270, 0x1000ab20, 0x1003fb30, 0x1005faa0, 0x100632a0, 0x100633c0, 0x1007aa60, 0x10080780, 0x100822b0, 0x10088cd0, 0x1008c3e0, 0x1009e990, 0x1009f270, 0x100d9db0, 0x100da280, 0x100df7d0, 0x100eb8b0, 0x100ee670, 0x100ef5b0, 0x10101240, 0x10139890, 0x1015c790
 * callees: 0x1017a090
 */

float *__thiscall sub_10001370(float *this, float *a2, float *a3)
{
  float v5; // [esp+Ch] [ebp-18h] BYREF
  float v6; // [esp+10h] [ebp-14h]
  float v7; // [esp+14h] [ebp-10h]
  float v8; // [esp+18h] [ebp-Ch]
  float v9; // [esp+1Ch] [ebp-8h]
  float v10; // [esp+20h] [ebp-4h]

  v5 = *a3 - *a2;
  v6 = a3[1] - a2[1];
  v7 = a3[2] - a2[2];
  v8 = v5 * 0.5;
  v9 = v6 * 0.5;
  v10 = 0.5 * v7;
  v5 = *a2 + v8;
  v6 = v9 + a2[1];
  v7 = a2[2] + v10;
  sub_1017A090(&v5);
  *(_DWORD *)this = &BBox::`vftable';
  this[4] = 0.0;
  this[5] = 0.0;
  this[6] = 0.0;
  this[7] = 0.0;
  this[8] = 0.0;
  this[9] = 0.0;
  this[4] = *a2;
  this[5] = a2[1];
  this[6] = a2[2];
  this[7] = *a3;
  this[8] = a3[1];
  this[9] = a3[2];
  return this;
}
