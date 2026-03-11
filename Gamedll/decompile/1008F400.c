/*
 * func-name: ??4Effect_MultiTexParticlesEx@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x1008f400
 * callers: 0x1000add5
 * callees: 0x1001565e
 */

float *__thiscall Effect_MultiTexParticlesEx::operator=(float *this, float *a2)
{
  float *result; // eax

  Effect_MultiTexParticles::operator=((int)a2);
  this[316] = a2[316];
  result = this;
  this[317] = a2[317];
  this[318] = a2[318];
  return result;
}
