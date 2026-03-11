/*
 * func-name: ??4EditorVar@@QAEAAV0@ABV0@@Z
 * func-address: 0x10009640
 * callers: none
 * callees: none
 */

_DWORD *__thiscall EditorVar::operator=(_DWORD *this, int a2)
{
  *this = *(_DWORD *)a2;
  std::string::operator=(this + 1, a2 + 4);
  std::string::operator=(this + 8, a2 + 32);
  std::string::operator=(this + 15, a2 + 60);
  this[22] = *(_DWORD *)(a2 + 88);
  *((_BYTE *)this + 92) = *(_BYTE *)(a2 + 92);
  *((_BYTE *)this + 93) = *(_BYTE *)(a2 + 93);
  return this;
}
