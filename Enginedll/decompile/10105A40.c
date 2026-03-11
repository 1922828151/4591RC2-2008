/*
 * func-name: sub_10105A40
 * func-address: 0x10105a40
 * callers: 0x10105e20
 * callees: 0x101a2516, 0x101a295e
 */

double __cdecl sub_10105A40(float a1, float a2, float a3)
{
  float v4; // [esp+4h] [ebp+4h]
  float v5; // [esp+4h] [ebp+4h]
  float v6; // [esp+Ch] [ebp+Ch]
  float v7; // [esp+Ch] [ebp+Ch]
  float v8; // [esp+Ch] [ebp+Ch]

  v4 = -((a1 * a1 + a2 * a2) / (a3 * (a3 + a3)));
  v5 = exp(v4);
  v6 = a3 * (6.283185482025146 * a3);
  v7 = sqrt(v6);
  v8 = 1.0 / v7;
  return (float)(v8 * v5);
}
