/*
 * func-name: ?ConfirmMessage@CDlgMgr@@QAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@HH@Z
 * func-address: 0x10149580
 * callers: none
 * callees: 0x100a7900, 0x100aef10, 0x100b29f0, 0x1015b610
 */

void __thiscall CDlgMgr::ConfirmMessage(CTYDialog **this, int a2, int a3, int a4)
{
  CTYDialog::ShowDialog(this[5], 1, 0.0);
  CTYDialog::SetHasInput(this[5], 1);
  sub_1015B610(a2, a3, a4);
  CTYDialog::CenterDialog(this[5], 1, 1);
}
