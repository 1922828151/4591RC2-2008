/*
 * func-name: ??1CItemHolder@@UAE@XZ
 * func-address: 0x10155660
 * callers: 0x100a2840
 * callees: 0x101a2500
 */

void __thiscall CItemHolder::~CItemHolder(void **this)
{
  *this = &CItemHolder::`vftable';
  if ( this[139] )
    operator delete(this[139]);
  this[139] = 0;
  this[140] = 0;
  this[141] = 0;
  if ( this[135] )
    operator delete(this[135]);
  this[135] = 0;
  this[136] = 0;
  this[137] = 0;
  CREControl::~CREControl((CREControl *)this);
}
