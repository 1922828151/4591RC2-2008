/*
 * func-name: ??4OBJSave@@QAEAAV0@ABV0@@Z
 * func-address: 0x100368e0
 * callers: none
 * callees: 0x1000ce20, 0x1000e890, 0x10011510
 */

_DWORD *__thiscall OBJSave::operator=(_DWORD *this, int a2)
{
  std::string::operator=(this + 1, a2 + 4);
  sub_10011510((int)(this + 8), a2 + 32);
  this[12] = *(_DWORD *)(a2 + 48);
  sub_1000E890((int)(this + 13), a2 + 52);
  std::vector<Material *>::operator=((int)(this + 17), a2 + 68);
  std::string::operator=(this + 21, a2 + 84);
  this[28] = *(_DWORD *)(a2 + 112);
  return this;
}
