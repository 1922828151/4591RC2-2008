/*
 * func-name: ?doesSegmentCrossPlane@BouncyParticles@@QAE_NAAVVector@@0000@Z_0
 * func-address: 0x100ad1f0
 * callers: 0x100059c0
 * callees: none
 */

char __thiscall BouncyParticles::doesSegmentCrossPlane(
        BouncyParticles *this,
        struct Vector *a2,
        struct Vector *a3,
        struct Vector *a4,
        struct Vector *a5,
        struct Vector *a6)
{
  double v7; // st7
  float v9; // [esp+4h] [ebp-18h]
  float v10; // [esp+4h] [ebp-18h]
  float v11; // [esp+4h] [ebp-18h]
  float v12; // [esp+4h] [ebp-18h]
  float v13; // [esp+8h] [ebp-14h]
  float v14; // [esp+8h] [ebp-14h]
  float v15; // [esp+8h] [ebp-14h]
  float v16; // [esp+8h] [ebp-14h]
  float v17; // [esp+Ch] [ebp-10h]
  float v18; // [esp+Ch] [ebp-10h]
  float v19; // [esp+Ch] [ebp-10h]
  float v20; // [esp+Ch] [ebp-10h]
  float v21; // [esp+10h] [ebp-Ch]
  float v22; // [esp+14h] [ebp-8h]
  float v23; // [esp+18h] [ebp-4h]
  float v24; // [esp+20h] [ebp+4h]
  float v25; // [esp+28h] [ebp+Ch]
  float v26; // [esp+28h] [ebp+Ch]

  v9 = *(float *)a4 - *(float *)a2;
  v13 = *((float *)a4 + 1) - *((float *)a2 + 1);
  v17 = *((float *)a4 + 2) - *((float *)a2 + 2);
  v25 = *(float *)a3 * v9 + v13 * *((float *)a3 + 1) + v17 * *((float *)a3 + 2);
  v10 = *(float *)a5 - *(float *)a2;
  v14 = *((float *)a5 + 1) - *((float *)a2 + 1);
  v18 = *((float *)a5 + 2) - *((float *)a2 + 2);
  v24 = *(float *)a3 * v10 + v14 * *((float *)a3 + 1) + v18 * *((float *)a3 + 2);
  if ( v25 <= 0.0 || v24 >= 0.0 )
    return 0;
  v11 = *(float *)a5 - *(float *)a4;
  v15 = *((float *)a5 + 1) - *((float *)a4 + 1);
  v19 = *((float *)a5 + 2) - *((float *)a4 + 2);
  v26 = v25 / (v25 - v24);
  v21 = v11 * v26;
  v22 = v15 * v26;
  v23 = v26 * v19;
  v12 = *(float *)a4 + v21;
  v16 = v22 + *((float *)a4 + 1);
  v7 = *((float *)a4 + 2) + v23;
  *(float *)a6 = v12;
  *((float *)a6 + 1) = v16;
  v20 = v7;
  *((float *)a6 + 2) = v20;
  return 1;
}
