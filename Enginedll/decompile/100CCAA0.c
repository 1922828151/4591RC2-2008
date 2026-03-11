/*
 * func-name: ??1CPicRadioButton@@UAE@XZ
 * func-address: 0x100ccaa0
 * callers: 0x1006b4a0
 * callees: none
 */

void __thiscall CPicRadioButton::~CPicRadioButton(void **this)
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
