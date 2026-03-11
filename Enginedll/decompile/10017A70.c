/*
 * func-name: ??4AttributeRange@@QAEAAU0@ABU0@@Z
 * func-address: 0x10017a70
 * callers: none
 * callees: none
 */

_DWORD *__thiscall AttributeRange::operator=(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = this;
  *this = *a2;
  this[1] = a2[1];
  this[2] = a2[2];
  this[3] = a2[3];
  this[4] = a2[4];
  return result;
}
