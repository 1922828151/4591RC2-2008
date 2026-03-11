/*
 * func-name: ??4MapStateManager@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x10076230
 * callers: 0x10005ac4
 * callees: 0x10009412
 */

_DWORD *__thiscall MapStateManager::operator=(_DWORD *this, _DWORD *a2)
{
  *this = *a2;
  this[1] = a2[1];
  sub_10009412((int)(a2 + 2));
  return this;
}
