/*
 * func-name: ?ClearComboBox@CREDialog@@QAEXH@Z
 * func-address: 0x100b4970
 * callers: none
 * callees: 0x100a9b60, 0x100b3710
 */

void __thiscall CREDialog::ClearComboBox(CREDialog *this, int a2)
{
  CREComboBox *Control; // eax

  Control = CREDialog::GetControl(this, a2, 5u);
  if ( Control )
    CREComboBox::RemoveAllItems(Control);
}
