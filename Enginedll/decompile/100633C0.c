/*
 * func-name: sub_100633C0
 * func-address: 0x100633c0
 * callers: none
 * callees: 0x10001370, 0x10063350, 0x1017a0b0
 */

bool __thiscall sub_100633C0(float *this, int a2)
{
  bool v3; // bl
  float v5[10]; // [esp+8h] [ebp-5Ch] BYREF
  float v6[10]; // [esp+30h] [ebp-34h] BYREF
  int v7; // [esp+60h] [ebp-4h]

  sub_10001370(v6, (float *)(a2 + 16), (float *)(a2 + 28));
  v7 = 0;
  sub_10001370(v5, this + 5, this + 8);
  v3 = sub_10063350(v6, v5);
  sub_1017A0B0(v5);
  v7 = -1;
  sub_1017A0B0(v6);
  return v3;
}
