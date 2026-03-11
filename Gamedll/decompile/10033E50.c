/*
 * func-name: ??4Interactable@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10033e50
 * callers: 0x1000ac13
 * callees: none
 */

_DWORD *__thiscall GameClient::Interactable::operator=(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = this;
  this[1] = a2[1];
  this[2] = a2[2];
  this[3] = a2[3];
  return result;
}
