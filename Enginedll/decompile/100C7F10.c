/*
 * func-name: ??1CREPropertiesList@@UAE@XZ
 * func-address: 0x100c7f10
 * callers: 0x1006a6e0
 * callees: 0x100b38b0, 0x100c7390
 */

void __thiscall CREPropertiesList::~CREPropertiesList(void **this)
{
  *this = &CREPropertiesList::`vftable';
  CREPropertiesList::RemoveAllItems((CREPropertiesList *)this);
  if ( this[305] )
  {
    free(this[305]);
    this[305] = 0;
  }
  this[307] = 0;
  this[306] = 0;
  this[141] = &CREScrollBar::`vftable';
  CREControl::~CREControl((CREControl *)(this + 141));
  CREControl::~CREControl((CREControl *)this);
}
