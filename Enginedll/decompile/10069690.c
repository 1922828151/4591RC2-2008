/*
 * func-name: ?GetCheckBox@CREDialog@@QAEPAVCRECheckBox@@H@Z
 * func-address: 0x10069690
 * callers: none
 * callees: 0x100a9b60
 */

struct CRECheckBox *__thiscall CREDialog::GetCheckBox(CREDialog *this, int a2)
{
  return CREDialog::GetControl(this, a2, 3u);
}
