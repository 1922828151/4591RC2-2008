/*
 * func-name: sub_10077010
 * func-address: 0x10077010
 * callers: 0x100769d0
 * callees: none
 */

float *__thiscall sub_10077010(float *this)
{
  float *result; // eax
  float *v2; // esi
  int v3; // edi
  float *v4; // edx

  result = this;
  v2 = this + 4;
  v3 = 624;
  v4 = this + 9;
  do
  {
    *v2 = 0.0;
    v2 += 14;
    *(v4 - 4) = 0.0;
    v4 += 14;
    --v3;
    *(v4 - 17) = 0.0;
    *(v4 - 16) = 0.0;
    *(v4 - 15) = 0.0;
    *(v4 - 14) = 0.0;
    *(v4 - 13) = 0.0;
    *(v4 - 12) = 0.0;
    *(v4 - 11) = 0.0;
    *(v4 - 10) = 0.0;
    *(v4 - 9) = 0.0;
    *(v4 - 8) = 0.0;
    *(v4 - 7) = 0.0;
    *(v4 - 6) = 0.0;
  }
  while ( v3 >= 0 );
  return result;
}
