/*
 * func-name: sub_100CFA70
 * func-address: 0x100cfa70
 * callers: 0x1000e638
 * callees: 0x100133c7
 */

int __thiscall sub_100CFA70(void *this, int a2)
{
  int v3[16]; // [esp-44h] [ebp-88h] BYREF
  float v4[16]; // [esp+4h] [ebp-40h] BYREF

  v4[0] = 0.0;
  v4[1] = 0.0;
  v4[2] = 0.0;
  v4[3] = 0.0;
  v4[4] = 0.0;
  v4[5] = 0.0;
  v4[6] = 0.0;
  v4[7] = 0.0;
  v4[8] = 0.0;
  v4[9] = 0.0;
  v4[10] = 0.0;
  v4[11] = 0.0;
  v4[12] = 0.0;
  v4[13] = 0.0;
  v4[14] = 0.0;
  v4[15] = 0.0;
  qmemcpy(v3, v4, sizeof(v3));
  return sub_100133C7(
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
           v3[15]);
}
