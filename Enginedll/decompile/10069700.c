/*
 * func-name: ?GetListBox@CREDialog@@QAEPAVCREListBox@@H@Z
 * func-address: 0x10069700
 * callers: none
 * callees: 0x100a9b60
 */

struct CREListBox *__thiscall CREDialog::GetListBox(CREDialog *this, int a2)
{
  return CREDialog::GetControl(this, a2, 0xBu);
}
