/*
 * func-name: ??1AuraManager@GameClient@@QAE@XZ_0
 * func-address: 0x10142480
 * callers: 0x100140ce
 * callees: 0x10010000, 0x10011ee6, 0x102c9d50
 */

void __thiscall GameClient::AuraManager::~AuraManager(void **this)
{
  GameClient::AuraManager::ClearAura();
  if ( this[5] )
    operator delete(this[5]);
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_10011EE6();
}
