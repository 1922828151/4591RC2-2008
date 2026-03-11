/*
 * func-name: ??1CollisionInfo@@QAE@XZ
 * func-address: 0x10024540
 * callers: 0x1004c6f0, 0x100522b0, 0x10052340, 0x10052c10, 0x10052ca0, 0x10052f60, 0x10053000, 0x100530a0, 0x10053140, 0x10063980, 0x10084530, 0x1008de00, 0x10143c20, 0x10146be0, 0x10146c80, 0x10146e00, 0x10147110, 0x101478f0, 0x101484b0, 0x101488d0, 0x10148a20, 0x10166120, 0x10169d00
 * callees: 0x101a2500
 */

void __thiscall CollisionInfo::~CollisionInfo(void **this)
{
  if ( this[13] )
    operator delete(this[13]);
  this[13] = 0;
  this[14] = 0;
  this[15] = 0;
  if ( this[9] )
    operator delete(this[9]);
  this[9] = 0;
  this[10] = 0;
  this[11] = 0;
  if ( this[5] )
    operator delete(this[5]);
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
}
