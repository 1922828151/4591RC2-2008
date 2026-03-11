/*
 * func-name: ?GetStatic@CREDialog@@QAEPAVCREStatic@@H@Z
 * func-address: 0x10069670
 * callers: none
 * callees: 0x100a9b60
 */

struct CREStatic *__thiscall CREDialog::GetStatic(CREDialog *this, int a2)
{
  return CREDialog::GetControl(this, a2, 2u);
}
