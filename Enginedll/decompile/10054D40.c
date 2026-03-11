/*
 * func-name: ??1SoundEmitter@@QAE@XZ
 * func-address: 0x10054d40
 * callers: none
 * callees: 0x101a2500
 */

void __thiscall SoundEmitter::~SoundEmitter(void **this)
{
  *this = &SoundEmitter::`vftable';
  if ( this[2] )
    operator delete(this[2]);
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
}
