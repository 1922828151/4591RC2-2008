/*
 * func-name: ??4MaterialManager@@QAEAAV0@ABV0@@Z
 * func-address: 0x1002ea10
 * callers: none
 * callees: 0x1000ce20, 0x10011510, 0x100238d0
 */

_DWORD *__thiscall MaterialManager::operator=(_DWORD *this, _DWORD *a2)
{
  *this = *a2;
  std::vector<Material *>::operator=((int)(this + 1), (int)(a2 + 1));
  sub_100238D0((int)(this + 5), (int)(a2 + 5));
  this[9] = a2[9];
  sub_10011510((int)(this + 10), (int)(a2 + 10));
  return this;
}
