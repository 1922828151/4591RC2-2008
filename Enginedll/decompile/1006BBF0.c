/*
 * func-name: ??4LODManager@@QAEAAV0@ABV0@@Z
 * func-address: 0x1006bbf0
 * callers: none
 * callees: none
 */

_DWORD *__thiscall LODManager::operator=(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = this;
  *this = *a2;
  this[1] = a2[1];
  return result;
}
