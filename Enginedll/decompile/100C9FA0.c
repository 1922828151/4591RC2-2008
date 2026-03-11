/*
 * func-name: ?NestToDialog@CTYDialog@@QAEXH@Z
 * func-address: 0x100c9fa0
 * callers: none
 * callees: 0x100c66e0, 0x10149bc0, 0x1014a3e0
 */

void __thiscall CTYDialog::NestToDialog(CTYDialog *this, int a2)
{
  CDlgMgr *v3; // eax
  struct CTYDialog *Dialog; // eax

  v3 = CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v3, a2);
  if ( Dialog )
    CTYDialog::AddNestedDialog(
      Dialog,
      *((_DWORD *)this + 22),
      *((_DWORD *)Dialog + 173) - *((_DWORD *)this + 173),
      *((_DWORD *)Dialog + 174) - *((_DWORD *)this + 174));
}
