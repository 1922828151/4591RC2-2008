/*
 * func-name: sub_100B5A30
 * func-address: 0x100b5a30
 * callers: 0x10014966
 * callees: 0x10013aa7
 */

int __thiscall sub_100B5A30(void *this, int a2)
{
  int v3[24]; // [esp-64h] [ebp-C8h] BYREF
  float v4[24]; // [esp+4h] [ebp-60h] BYREF

  v4[0] = 0.0;
  v4[1] = 0.0;
  v4[2] = 0.0;
  v4[3] = 0.0;
  v4[4] = 0.0;
  v4[5] = 0.0;
  v4[6] = 0.0;
  v4[23] = 0.0;
  v4[7] = 0.0;
  v4[8] = 0.0;
  v4[18] = 0.0;
  v4[19] = 0.0;
  v4[20] = 0.0;
  qmemcpy(v3, v4, sizeof(v3));
  return sub_10013AA7(
           this,
           a2,
           v3[0],
           v3[1],
           v3[2],
           v3[3],
           v3[4],
           v3[5],
           v3[6],
           v3[7],
           v3[8],
           v3[9],
           v3[10],
           v3[11],
           v3[12],
           v3[13],
           v3[14],
           v3[15],
           v3[16],
           v3[17],
           v3[18],
           v3[19],
           v3[20],
           v3[21],
           v3[22],
           v3[23]);
}
