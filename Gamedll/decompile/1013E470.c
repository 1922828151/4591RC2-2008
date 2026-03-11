/*
 * func-name: sub_1013E470
 * func-address: 0x1013e470
 * callers: 0x10018a98
 * callees: none
 */

float *__thiscall sub_1013E470(float *this, int a2)
{
  *this = *(float *)a2;
  std::string::string(this + 1, (void *)(a2 + 4));
  this[8] = *(float *)(a2 + 32);
  this[9] = *(float *)(a2 + 36);
  this[10] = *(float *)(a2 + 40);
  this[11] = *(float *)(a2 + 44);
  this[12] = *(float *)(a2 + 48);
  *((_BYTE *)this + 52) = *(_BYTE *)(a2 + 52);
  this[14] = *(float *)(a2 + 56);
  return this;
}
