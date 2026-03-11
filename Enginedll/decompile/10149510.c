/*
 * func-name: ?PopMessage@CDlgMgr@@QAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@_NMPAVCMsgDlgHandler@@@Z
 * func-address: 0x10149510
 * callers: none
 * callees: 0x100aef10, 0x100b29f0, 0x1015b520
 */

void __thiscall CDlgMgr::PopMessage(CTYDialog **this, int a2, float a3, int a4, int a5)
{
  CTYDialog *v6; // edi
  void (__thiscall ***v7)(_DWORD, int); // ecx

  CTYDialog::ShowDialog(this[5], 1, 0.0);
  v6 = this[5];
  v7 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)v6 + 971);
  if ( v7 )
  {
    (**v7)(v7, 1);
    *((_DWORD *)v6 + 971) = 0;
  }
  *((_DWORD *)v6 + 971) = a5;
  sub_1015B520(a2, a3, 1, *(float *)&a4);
  CTYDialog::CenterDialog(this[5], 1, 1);
}
