/*
 * func-name: ??4HookEsbStore@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x1012b850
 * callers: 0x10011658
 * callees: none
 */

_DWORD *__thiscall HookEsbStore::operator=(_DWORD *this, int a2)
{
  Actor::operator=(a2);
  std::string::operator=(this + 263, a2 + 1052);
  std::string::operator=(this + 270, a2 + 1080);
  std::string::operator=(this + 277, a2 + 1108);
  this[284] = *(_DWORD *)(a2 + 1136);
  return this;
}
