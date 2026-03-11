/*
 * func-name: ??4CControlBoxList@@QAEAAV0@ABV0@@Z
 * func-address: 0x100d4190
 * callers: none
 * callees: 0x10071450, 0x100d07b0
 */

_DWORD *__thiscall CControlBoxList::operator=(_DWORD *this, _DWORD *a2)
{
  CREControl::operator=((int)this, (int)a2);
  sub_100D07B0((int)(this + 133), (int)(a2 + 133));
  this[137] = a2[137];
  this[138] = a2[138];
  this[139] = a2[139];
  this[140] = a2[140];
  this[141] = a2[141];
  this[142] = a2[142];
  this[143] = a2[143];
  return this;
}
