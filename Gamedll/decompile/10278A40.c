/*
 * func-name: ?Tick@CPasswordInputUI@@UAEXM@Z_0
 * func-address: 0x10278a40
 * callers: 0x10016171
 * callees: none
 */

void __thiscall CPasswordInputUI::Tick(CPasswordInputUI *this, float a2)
{
  CTYDialog::CenterDialog(this, 1, 1);
  CTYDialog::Tick(this, a2);
}
