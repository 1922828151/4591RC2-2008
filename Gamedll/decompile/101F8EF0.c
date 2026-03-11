/*
 * func-name: ??4Group@GameClient@@QAEABV01@ABV01@@Z_0
 * func-address: 0x101f8ef0
 * callers: 0x10003e22
 * callees: 0x100142a4
 */

_DWORD *__thiscall GameClient::Group::operator=(_DWORD *this, _DWORD *a2)
{
  this[1] = a2[1];
  *this = *a2;
  this[2] = a2[2];
  sub_100142A4((int)(a2 + 3));
  return this;
}
