/*
 * func-name: sub_10025C40
 * func-address: 0x10025c40
 * callers: 0x10025dd0
 * callees: none
 */

float *__cdecl sub_10025C40(float *a1, float *a2)
{
  float *v3; // edi
  int v4; // ebx
  double v5; // st7
  int v6; // edx
  int v7; // eax
  bool v8; // zf
  int v10; // [esp+18h] [ebp+8h]

  *a1 = 0.0;
  a1[1] = 0.0;
  a1[2] = 0.0;
  a1[3] = 0.0;
  a1[4] = 0.0;
  a1[5] = 0.0;
  v3 = a1 + 6;
  a1[6] = 0.0;
  v4 = 2;
  a1[7] = 0.0;
  v10 = 3;
  a1[8] = 0.0;
  v5 = 1.0
     / (a2[5] * a2[1] * a2[6]
      + a2[7] * a2[3] * a2[2]
      + a2[4] * *a2 * a2[8]
      - a2[5] * a2[7] * *a2
      - a2[1] * a2[8] * a2[3]
      - a2[4] * a2[6] * a2[2]);
  do
  {
    v6 = (v4 - 1) % 3;
    v7 = v4;
    ++v3;
    ++v4;
    v8 = v10-- == 1;
    *(v3 - 7) = (a2[3 * v6 + 1] * a2[3 * (v7 % 3) + 2] - a2[3 * v6 + 2] * a2[3 * (v7 % 3) + 1]) * v5;
    *(v3 - 4) = (a2[3 * v6 + 2] * a2[3 * (v7 % 3)] - a2[3 * (v7 % 3) + 2] * a2[3 * v6]) * v5;
    *(v3 - 1) = (a2[3 * (v7 % 3) + 1] * a2[3 * v6] - a2[3 * v6 + 1] * a2[3 * (v7 % 3)]) * v5;
  }
  while ( !v8 );
  return a1;
}
