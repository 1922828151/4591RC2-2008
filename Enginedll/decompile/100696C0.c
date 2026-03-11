/*
 * func-name: ?GetSlider@CREDialog@@QAEPAVCRESlider@@H@Z
 * func-address: 0x100696c0
 * callers: none
 * callees: 0x100a9b60
 */

struct CRESlider *__thiscall CREDialog::GetSlider(CREDialog *this, int a2)
{
  return CREDialog::GetControl(this, a2, 6u);
}
