/*
 * func-name: ??1DamageUnit@GameClient@@UAE@XZ_0
 * func-address: 0x101582c0
 * callers: 0x10005aba
 * callees: 0x102c9d50
 */

void __thiscall GameClient::DamageUnit::~DamageUnit(void **this)
{
  *this = &GameClient::DamageUnit::`vftable';
  if ( this[2] )
    operator delete(this[2]);
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
}
