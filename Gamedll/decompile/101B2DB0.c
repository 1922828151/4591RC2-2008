/*
 * func-name: ?SetRotationAccel@Seat@GameClient@@QAEXAAVVector@@@Z_0
 * func-address: 0x101b2db0
 * callers: 0x10013eda
 * callees: none
 */

void __thiscall GameClient::Seat::SetRotationAccel(GameClient::Seat *this, struct Vector *a2)
{
  double v2; // st5
  double v3; // st7
  float v4; // [esp+4h] [ebp-Ch]
  float v5; // [esp+8h] [ebp-8h]
  float v6; // [esp+Ch] [ebp-4h]

  v2 = *(float *)(*((_DWORD *)this + 6) + 264);
  v4 = *(float *)a2 * v2;
  v5 = *((float *)a2 + 1) * v2;
  v3 = v2 * *((float *)a2 + 2);
  *((float *)this + 70) = v4;
  *((float *)this + 71) = v5;
  v6 = v3;
  *((float *)this + 72) = v6;
}
