/*
 * func-name: ??1CPicCheckBox@@UAE@XZ
 * func-address: 0x100cca30
 * callers: 0x1006b430
 * callees: none
 */

void __thiscall CPicCheckBox::~CPicCheckBox(void **this)
{
  *this = &CPicCheckBox::`vftable';
  if ( this[213] )
  {
    free(this[213]);
    this[213] = 0;
  }
  this[215] = 0;
  this[214] = 0;
  CREStatic::~CREStatic((CREStatic *)this);
}
