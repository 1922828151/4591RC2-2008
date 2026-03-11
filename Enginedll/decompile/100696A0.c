/*
 * func-name: ?GetRadioButton@CREDialog@@QAEPAVCRERadioButton@@H@Z
 * func-address: 0x100696a0
 * callers: none
 * callees: 0x100a9b60
 */

struct CRERadioButton *__thiscall CREDialog::GetRadioButton(CREDialog *this, int a2)
{
  return CREDialog::GetControl(this, a2, 4u);
}
