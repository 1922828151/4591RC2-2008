/*
 * func-name: ??1PostProcess@@QAE@XZ
 * func-address: 0x10108e40
 * callers: none
 * callees: 0x101a2500
 */

void __thiscall PostProcess::~PostProcess(void **this)
{
  if ( this[17] )
    operator delete(this[17]);
  this[17] = 0;
  this[18] = 0;
  this[19] = 0;
}
