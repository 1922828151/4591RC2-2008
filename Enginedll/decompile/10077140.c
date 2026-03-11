/*
 * func-name: ??1ClothSimulator@@QAE@XZ
 * func-address: 0x10077140
 * callers: none
 * callees: 0x101a2500
 */

void __thiscall ClothSimulator::~ClothSimulator(void **this)
{
  if ( this[5] )
    operator delete(this[5]);
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  if ( this[1] )
    operator delete(this[1]);
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
