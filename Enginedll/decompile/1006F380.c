/*
 * func-name: ??1CREContainer@@UAE@XZ
 * func-address: 0x1006f380
 * callers: 0x1006f3e0
 * callees: 0x101a2500
 */

void __thiscall CREContainer::~CREContainer(void **this)
{
  if ( this[138] )
    operator delete(this[138]);
  this[138] = 0;
  this[139] = 0;
  this[140] = 0;
  if ( this[134] )
    operator delete(this[134]);
  this[134] = 0;
  this[135] = 0;
  this[136] = 0;
  CREControl::~CREControl((CREControl *)this);
}
