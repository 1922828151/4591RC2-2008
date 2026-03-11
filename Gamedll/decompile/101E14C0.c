/*
 * func-name: sub_101E14C0
 * func-address: 0x101e14c0
 * callers: 0x1001905b
 * callees: 0x1000b50a
 */

_DWORD *__thiscall sub_101E14C0(_DWORD *this, _DWORD *a2)
{
  *this = *a2;
  this[1] = a2[1];
  std::string::string(this + 2, a2 + 2);
  this[9] = a2[9];
  this[10] = a2[10];
  this[11] = a2[11];
  sub_1000B50A((int)(a2 + 12));
  sub_1000B50A((int)(a2 + 16));
  return this;
}
