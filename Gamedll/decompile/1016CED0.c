/*
 * func-name: ??4FNonControlledEstab@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1016ced0
 * callers: 0x10002ac2
 * callees: 0x100083cd
 */

_BYTE *__thiscall GameClient::FNonControlledEstab::operator=(_BYTE *this, int a2)
{
  GameClient::FEstablishment::operator=(a2);
  this[516] = *(_BYTE *)(a2 + 516);
  return this;
}
