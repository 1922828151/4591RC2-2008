/*
 * func-name: ?GetComboBox@CREDialog@@QAEPAVCREComboBox@@H@Z
 * func-address: 0x100696b0
 * callers: none
 * callees: 0x100a9b60
 */

struct CREComboBox *__thiscall CREDialog::GetComboBox(CREDialog *this, int a2)
{
  return CREDialog::GetControl(this, a2, 5u);
}
