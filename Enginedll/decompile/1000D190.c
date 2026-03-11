/*
 * func-name: ??1OBJLoad@@QAE@XZ
 * func-address: 0x1000d190
 * callers: 0x100372d0, 0x10037a90, 0x1003e300, 0x1003e360, 0x1003e400, 0x100408a0, 0x100f16a0, 0x1011f2a0
 * callees: 0x101a2500
 */

void __thiscall OBJLoad::~OBJLoad(void **this)
{
  if ( this[8] )
    operator delete(this[8]);
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  if ( this[4] )
    operator delete(this[4]);
  this[4] = 0;
  this[5] = 0;
  this[6] = 0;
}
