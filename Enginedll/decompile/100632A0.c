/*
 * func-name: sub_100632A0
 * func-address: 0x100632a0
 * callers: none
 * callees: 0x10001370, 0x10061060, 0x1017a0b0
 */

bool __thiscall sub_100632A0(float *this, int a2)
{
  bool v3; // bl
  float v5[10]; // [esp+8h] [ebp-28h] BYREF

  sub_10001370(v5, (float *)(a2 + 16), (float *)(a2 + 28));
  v3 = sub_10061060(v5, this + 5);
  sub_1017A0B0(v5);
  return v3;
}
