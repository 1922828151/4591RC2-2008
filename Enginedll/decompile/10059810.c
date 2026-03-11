/*
 * func-name: sub_10059810
 * func-address: 0x10059810
 * callers: 0x1005e940
 * callees: 0x10058820
 */

_DWORD *__thiscall sub_10059810(_DWORD *this, _DWORD *a2)
{
  sub_10058820(this, (int)a2);
  std::string::string(this + 4, a2 + 4);
  this[11] = a2[11];
  this[12] = a2[12];
  this[13] = a2[13];
  this[14] = a2[14];
  return this;
}
