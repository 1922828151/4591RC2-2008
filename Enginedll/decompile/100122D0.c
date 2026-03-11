/*
 * func-name: ??4ISave@@QAEAAV0@ABV0@@Z
 * func-address: 0x100122d0
 * callers: none
 * callees: 0x1000ce20, 0x1000e890, 0x10011510
 */

_DWORD *__thiscall ISave::operator=(_DWORD *this, int a2)
{
  std::string::operator=(this + 1, a2 + 4);
  sub_10011510((int)(this + 8), a2 + 32);
  this[12] = *(_DWORD *)(a2 + 48);
  sub_1000E890((int)(this + 13), a2 + 52);
  std::vector<Material *>::operator=((int)(this + 17), a2 + 68);
  return this;
}
