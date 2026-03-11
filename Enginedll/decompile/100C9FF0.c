/*
 * func-name: ?NestToDialog@CTYDialog@@QAEXHHH@Z
 * func-address: 0x100c9ff0
 * callers: none
 * callees: 0x100c66e0, 0x10149bc0, 0x1014a3e0
 */

void __thiscall CTYDialog::NestToDialog(CTYDialog *this, int a2, int a3, int a4)
{
  CDlgMgr *v5; // eax
  CTYDialog *Dialog; // eax

  v5 = CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v5, a2);
  if ( Dialog )
    CTYDialog::AddNestedDialog(Dialog, *((_DWORD *)this + 22), -a3, -a4);
}
