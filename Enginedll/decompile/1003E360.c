/*
 * func-name: ??1XFileLoad@@QAE@XZ
 * func-address: 0x1003e360
 * callers: none
 * callees: 0x101a2500
 */

void __thiscall XFileLoad::~XFileLoad(void **this)
{
  std::string::~string(this + 12);
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
