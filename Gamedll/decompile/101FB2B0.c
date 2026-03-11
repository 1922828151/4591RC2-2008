/*
 * func-name: sub_101FB2B0
 * func-address: 0x101fb2b0
 * callers: 0x10011fc2
 * callees: none
 */

float *__thiscall sub_101FB2B0(float *this, int a2)
{
  *this = *(float *)a2;
  std::string::operator=(this + 1, a2 + 4);
  this[8] = *(float *)(a2 + 32);
  this[9] = *(float *)(a2 + 36);
  this[10] = *(float *)(a2 + 40);
  this[11] = *(float *)(a2 + 44);
  this[12] = *(float *)(a2 + 48);
  *((_BYTE *)this + 52) = *(_BYTE *)(a2 + 52);
  this[14] = *(float *)(a2 + 56);
  this[15] = *(float *)(a2 + 60);
  this[16] = *(float *)(a2 + 64);
  this[17] = *(float *)(a2 + 68);
  std::wstring::operator=(this + 18, a2 + 72);
  std::wstring::operator=(this + 25, a2 + 100);
  return this;
}
