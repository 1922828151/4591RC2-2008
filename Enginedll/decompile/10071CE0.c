/*
 * func-name: ??0CRERadioButton@@QAE@ABV0@@Z
 * func-address: 0x10071ce0
 * callers: none
 * callees: 0x10071be0
 */

CRERadioButton *__thiscall CRERadioButton::CRERadioButton(CRERadioButton *this, const struct CRERadioButton *a2)
{
  CRECheckBox::CRECheckBox(this, a2);
  *(_DWORD *)this = &CRERadioButton::`vftable';
  *((_DWORD *)this + 213) = *((_DWORD *)a2 + 213);
  return this;
}
