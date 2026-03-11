/*
 * func-name: ??1CREListBox@@UAE@XZ
 * func-address: 0x100c7d60
 * callers: 0x1006a600
 * callees: 0x100b3800, 0x100c7390
 */

void __thiscall CREListBox::~CREListBox(void **this)
{
  *this = &CREListBox::`vftable';
  CREListBox::RemoveAllItems((CREListBox *)this);
  if ( this[303] )
  {
    free(this[303]);
    this[303] = 0;
  }
  this[305] = 0;
  this[304] = 0;
  this[141] = &CREScrollBar::`vftable';
  CREControl::~CREControl((CREControl *)(this + 141));
  CREControl::~CREControl((CREControl *)this);
}
