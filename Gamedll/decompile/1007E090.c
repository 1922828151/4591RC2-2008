/*
 * func-name: sub_1007E090
 * func-address: 0x1007e090
 * callers: 0x10006b77
 * callees: 0x1001523a
 */

int __thiscall sub_1007E090(void *this, int a2)
{
  int v3[12]; // [esp-34h] [ebp-68h] BYREF
  float v4[12]; // [esp+4h] [ebp-30h] BYREF

  v4[0] = 0.0;
  v4[1] = 0.0;
  v4[2] = 0.0;
  v4[3] = 0.0;
  v4[4] = 0.0;
  v4[5] = 0.0;
  v4[8] = 0.0;
  v4[9] = 0.0;
  qmemcpy(v3, v4, sizeof(v3));
  return sub_1001523A(this, a2, v3[0], v3[1], v3[2], v3[3], v3[4], v3[5], v3[6], v3[7], v3[8], v3[9], v3[10], v3[11]);
}
