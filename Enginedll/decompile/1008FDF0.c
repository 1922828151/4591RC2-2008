/*
 * func-name: sub_1008FDF0
 * func-address: 0x1008fdf0
 * callers: 0x10080c60, 0x10088cd0, 0x1009f270, 0x100eeba0
 * callees: 0x10001440, 0x1004c2c0, 0x1007b540, 0x10179050
 */

float *__thiscall sub_1008FDF0(float *this, float *a2, int a3)
{
  int v3; // esi
  float *v5; // eax
  float v7[3]; // [esp+14h] [ebp-24h] BYREF
  float v8[6]; // [esp+20h] [ebp-18h] BYREF

  v3 = 0;
  sub_10001440(a2);
  v8[5] = 0.0;
  do
  {
    v5 = sub_1004C2C0(this, v8, v3);
    v7[0] = 0.0;
    v7[1] = 0.0;
    v7[2] = 0.0;
    sub_10179050(v5, v7);
    sub_1007B540(a2, v7);
    ++v3;
  }
  while ( v3 < 8 );
  return a2;
}
