/*
 * func-name: ?GetButton@CREDialog@@QAEPAVCREButton@@H@Z
 * func-address: 0x10069680
 * callers: none
 * callees: 0x100a9b60
 */

struct CREButton *__thiscall CREDialog::GetButton(CREDialog *this, int a2)
{
  return CREDialog::GetControl(this, a2, 1u);
}
