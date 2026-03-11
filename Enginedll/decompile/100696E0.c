/*
 * func-name: ?GetEditBox@CREDialog@@QAEPAVCREEditBox@@H@Z
 * func-address: 0x100696e0
 * callers: none
 * callees: 0x100a9b60
 */

struct CREEditBox *__thiscall CREDialog::GetEditBox(CREDialog *this, int a2)
{
  return CREDialog::GetControl(this, a2, 7u);
}
