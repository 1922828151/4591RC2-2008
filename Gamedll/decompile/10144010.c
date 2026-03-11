/*
 * func-name: ??4AuraManager@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10144010
 * callers: 0x10013b01
 * callees: 0x10012c5b
 */

_DWORD *__thiscall GameClient::AuraManager::operator=(_DWORD *this, int a2)
{
  if ( this != (_DWORD *)a2 )
    sub_10012C5B(a2);
  this[10] = *(_DWORD *)(a2 + 40);
  return this;
}
