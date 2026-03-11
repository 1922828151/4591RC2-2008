/*
 * func-name: ?ConfirmMessage@CDlgMgr@@QAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PAVCMsgDlgHandler@@H@Z
 * func-address: 0x101495d0
 * callers: none
 * callees: 0x100a7900, 0x100aef10, 0x100b29f0, 0x1015b610
 */

void __thiscall CDlgMgr::ConfirmMessage(CTYDialog **this, int a2, int a3, int a4)
{
  CTYDialog *v5; // edi
  void (__thiscall ***v6)(_DWORD, int); // ecx

  CTYDialog::ShowDialog(this[5], 1, 0.0);
  CTYDialog::SetHasInput(this[5], 1);
  v5 = this[5];
  v6 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)v5 + 971);
  if ( v6 )
  {
    (**v6)(v6, 1);
    *((_DWORD *)v5 + 971) = 0;
  }
  *((_DWORD *)v5 + 971) = a3;
  sub_1015B610(a2, 0, a4);
  CTYDialog::CenterDialog(this[5], 1, 1);
}
