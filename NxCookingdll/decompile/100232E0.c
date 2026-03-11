/*
 * func-name: sub_100232E0
 * func-address: 0x100232e0
 * callers: 0x10024030, 0x1002f9d0
 * callees: none
 */

double *__thiscall sub_100232E0(char *this, int a2)
{
  double *result; // eax
  int v3; // edx
  int v4; // ecx
  double v5; // st7

  result = (double *)(this + 48);
  v3 = a2 + 24;
  v4 = 3;
  do
  {
    v5 = *(result - 3);
    ++result;
    *(float *)(v3 - 24) = v5;
    v3 += 4;
    --v4;
    *(float *)(v3 - 16) = *(result - 1);
    *(float *)(v3 - 4) = result[2];
  }
  while ( v4 );
  return result;
}
