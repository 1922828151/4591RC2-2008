/*
 * func-name: ??4SystemPart@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10059130
 * callers: 0x10006474
 * callees: 0x1000f088
 */

_DWORD *__thiscall GameClient::SystemPart::operator=(_DWORD *this, int a2)
{
  GameClient::WorldObject::operator=(a2);
  this[37] = *(_DWORD *)(a2 + 148);
  return this;
}
