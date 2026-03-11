/*
 * func-name: ??4Sound@@QAEAAV0@ABV0@@Z
 * func-address: 0x100169c0
 * callers: none
 * callees: none
 */

float *__thiscall Sound::operator=(float *this, int a2)
{
  float *result; // eax

  result = this;
  this[1] = *(float *)(a2 + 4);
  return result;
}
