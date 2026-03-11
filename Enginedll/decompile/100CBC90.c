/*
 * func-name: ??0CRERadioButton@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100cbc90
 * callers: 0x1006a330, 0x1014a750
 * callees: 0x100cbba0
 */

CRERadioButton *__thiscall CRERadioButton::CRERadioButton(CRERadioButton *this, struct CREDialog *a2)
{
  CRECheckBox::CRECheckBox(this, 0);
  *((_DWORD *)this + 28) = a2;
  *(_DWORD *)this = &CRERadioButton::`vftable';
  *((_DWORD *)this + 35) = 4;
  return this;
}
