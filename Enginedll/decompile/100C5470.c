/*
 * func-name: ?UnNestToDialog@CTYDialog@@QAEXH@Z
 * func-address: 0x100c5470
 * callers: none
 * callees: 0x10149bc0, 0x1014a3e0
 */

void __thiscall CTYDialog::UnNestToDialog(CTYDialog *this, int a2)
{
  CDlgMgr *v3; // eax
  CTYDialog *Dialog; // eax

  v3 = CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v3, a2);
  if ( Dialog )
    CTYDialog::RemoveNestedDialog(Dialog, *((_DWORD *)this + 22));
}
