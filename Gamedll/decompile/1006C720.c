/*
 * func-name: sub_1006C720
 * func-address: 0x1006c720
 * callers: 0x100115f9
 * callees: none
 */

float *__thiscall sub_1006C720(float *this, int a2)
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
  this[15] = *(float *)(a2 + 60);
  this[16] = *(float *)(a2 + 64);
  this[17] = *(float *)(a2 + 68);
  std::wstring::wstring(this + 18, a2 + 72);
  std::wstring::wstring(this + 25, a2 + 100);
  return this;
}
