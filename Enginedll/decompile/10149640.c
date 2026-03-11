/*
 * func-name: ?EndMessage@CDlgMgr@@QAEXXZ
 * func-address: 0x10149640
 * callers: none
 * callees: 0x100a7900, 0x100aef10
 */

void __thiscall CDlgMgr::EndMessage(CTYDialog **this)
{
  CTYDialog::ShowDialog(this[5], 0, 0.0);
  CTYDialog::SetHasInput(this[5], 0);
}
