/*
 * func-name: ?OnInit@CREComboBox@@UAEJXZ
 * func-address: 0x100b36f0
 * callers: none
 * callees: 0x100b3480
 */

int __thiscall CREComboBox::OnInit(CREDialog **this)
{
  (*((void (__thiscall **)(CREDialog **))*this + 49))(this);
  return CREDialog::InitControl(this[28], (struct CREControl *)(this + 207));
}
