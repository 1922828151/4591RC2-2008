/*
 * func-name: sub_1006C5C0
 * func-address: 0x1006c5c0
 * callers: 0x1001aa55
 * callees: none
 */

_DWORD *__thiscall sub_1006C5C0(_DWORD *this, _DWORD *a2)
{
  *this = *a2;
  std::string::string(this + 1, a2 + 1);
  std::string::string(this + 8, a2 + 8);
  return this;
}
