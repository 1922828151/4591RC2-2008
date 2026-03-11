/*
 * func-name: sub_10126610
 * func-address: 0x10126610
 * callers: 0x10126a70, 0x10126b30, 0x10127420
 * callees: none
 */

_BYTE *__thiscall sub_10126610(_BYTE *this, _BYTE *a2)
{
  std::string::string(this, a2);
  std::string::string(this + 28, a2 + 28);
  this[56] = a2[56];
  this[57] = a2[57];
  this[58] = a2[58];
  return this;
}
