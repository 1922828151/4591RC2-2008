/*
 * func-name: sub_10028EC0
 * func-address: 0x10028ec0
 * callers: 0x10028fa0, 0x100295d0
 * callees: 0x10026de0
 */

float *__thiscall sub_10028EC0(float *this, int a2, int a3, int a4)
{
  int v5; // eax

  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = a3;
  *((_DWORD *)this + 2) = a4;
  this[3] = NAN;
  this[4] = NAN;
  this[5] = NAN;
  *((_DWORD *)this + 6) = dword_1005B474;
  if ( dword_1005B474 == dword_1005B478 )
  {
    if ( dword_1005B478 )
      v5 = 2 * dword_1005B478;
    else
      v5 = 16;
    sub_10026DE0(&dword_1005B470, v5);
  }
  *(_DWORD *)(dword_1005B470 + 4 * dword_1005B474++) = this;
  this[8] = 0.0;
  this[7] = NAN;
  return this;
}
