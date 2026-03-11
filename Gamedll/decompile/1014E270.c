/*
 * func-name: ?SetCurrentPosition@DamageEquip@GameClient@@UAEXABVVector@@@Z_0
 * func-address: 0x1014e270
 * callers: 0x1000c0a4
 * callees: 0x1000289c, 0x102c1be0
 */

void __thiscall GameClient::DamageEquip::SetCurrentPosition(float **this, const struct Vector *a2)
{
  float *v3; // edx
  float *v4; // eax
  double v5; // st7
  float v6; // [esp+4h] [ebp-Ch] BYREF
  float v7; // [esp+8h] [ebp-8h]
  float v8; // [esp+Ch] [ebp-4h]

  GameClient::Equip::SetCurrentPosition((GameClient::Equip *)this, a2);
  v3 = this[2];
  v6 = 0.0;
  v7 = 0.0;
  v8 = 0.0;
  sub_102C1BE0(v3 + 564, &v6);
  v4 = this[45];
  v5 = v4[214];
  v4 += 214;
  *v4 = v5 + v6;
  v4[1] = v4[1] + v7;
  v4[2] = v4[2] + v8;
}
