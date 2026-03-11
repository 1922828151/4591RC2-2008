/*
 * func-name: ?GetProgressBar@CREDialog@@QAEPAVCProgressBar@@H@Z
 * func-address: 0x100696d0
 * callers: none
 * callees: 0x100a9b60
 */

struct CProgressBar *__thiscall CREDialog::GetProgressBar(CREDialog *this, int a2)
{
  return CREDialog::GetControl(this, a2, 0x11u);
}
