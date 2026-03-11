/*
 * func-name: sub_1025D340
 * func-address: 0x1025d340
 * callers: 0x1000d292
 * callees: 0x102c9d50
 */

CTYDialog *__thiscall sub_1025D340(CTYDialog *this, char a2)
{
  *(_DWORD *)this = &CCommandUI::`vftable';
  CTYDialog::~CTYDialog(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
