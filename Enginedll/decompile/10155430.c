/*
 * func-name: ??1CControlBoxList@@UAE@XZ
 * func-address: 0x10155430
 * callers: 0x100a26c0
 * callees: 0x101a2500
 */

void __thiscall CControlBoxList::~CControlBoxList(void **this)
{
  *this = &CControlBoxList::`vftable';
  if ( this[134] )
    operator delete(this[134]);
  this[134] = 0;
  this[135] = 0;
  this[136] = 0;
  CREControl::~CREControl((CREControl *)this);
}
