/*
 * func-name: ??1CGroupQuickCallUI@@UAE@XZ_0
 * func-address: 0x10274270
 * callers: 0x1000d594
 * callees: 0x1000f24f, 0x102c9d50
 */

void __thiscall CGroupQuickCallUI::~CGroupQuickCallUI(void **this)
{
  *this = &CGroupQuickCallUI::`vftable';
  if ( this[973] )
    operator delete(this[973]);
  this[973] = 0;
  this[974] = 0;
  this[975] = 0;
  sub_1000F24F();
  CTYDialog::~CTYDialog((CTYDialog *)this);
}
