/*
 * func-name: sub_101D85D0
 * func-address: 0x101d85d0
 * callers: 0x10011e37
 * callees: none
 */

float *__thiscall sub_101D85D0(float *this, int a2)
{
  *this = *(float *)a2;
  this[1] = *(float *)(a2 + 4);
  this[2] = *(float *)(a2 + 8);
  std::string::string(this + 3, (void *)(a2 + 12));
  std::string::string(this + 10, (void *)(a2 + 40));
  this[17] = *(float *)(a2 + 68);
  *((_BYTE *)this + 72) = *(_BYTE *)(a2 + 72);
  *((_BYTE *)this + 73) = *(_BYTE *)(a2 + 73);
  *((_BYTE *)this + 74) = *(_BYTE *)(a2 + 74);
  this[19] = *(float *)(a2 + 76);
  this[20] = *(float *)(a2 + 80);
  return this;
}
