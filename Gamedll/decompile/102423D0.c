/*
 * func-name: ??1WeaponPattern@GameClient@@QAE@XZ_0
 * func-address: 0x102423d0
 * callers: 0x100022d4
 * callees: 0x102c9d50
 */

void __thiscall GameClient::WeaponPattern::~WeaponPattern(void **this)
{
  if ( this[21] )
    operator delete(this[21]);
  this[21] = 0;
  this[22] = 0;
  this[23] = 0;
  if ( this[17] )
    operator delete(this[17]);
  this[17] = 0;
  this[18] = 0;
  this[19] = 0;
  std::string::~string(this);
}
