/*
 * func-name: ??0CRENumericEditBox@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100c8c30
 * callers: 0x1006b0e0
 * callees: 0x100c84a0
 */

CRENumericEditBox *__thiscall CRENumericEditBox::CRENumericEditBox(CRENumericEditBox *this, struct CREDialog *a2)
{
  CREEditBox::CREEditBox(this, 0);
  *((_DWORD *)this + 28) = a2;
  *(_DWORD *)this = &CRENumericEditBox::`vftable';
  *((_DWORD *)this + 35) = 7;
  return this;
}
