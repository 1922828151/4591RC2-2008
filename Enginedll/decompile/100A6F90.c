/*
 * func-name: ?UpdateRects@CPasswordEB@@UAEXXZ
 * func-address: 0x100a6f90
 * callers: none
 * callees: 0x100a4220
 */

void __thiscall CPasswordEB::UpdateRects(CPasswordEB *this)
{
  CREEditBox::UpdateRects(this);
  *((_DWORD *)this + 201) = 0;
}
