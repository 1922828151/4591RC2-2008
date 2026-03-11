/*
 * func-name: ??1FXManager@@QAE@XZ
 * func-address: 0x1000dfe0
 * callers: none
 * callees: 0x101a2500
 */

void __thiscall FXManager::~FXManager(void **this)
{
  *this = &FXManager::`vftable';
  if ( this[6] )
    operator delete(this[6]);
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  if ( this[2] )
    operator delete(this[2]);
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
}
