/*
 * func-name: sub_102701C0
 * func-address: 0x102701c0
 * callers: 0x1000d251
 * callees: none
 */

void __thiscall sub_102701C0(CTYDialog *this, int a2)
{
  CDlgMgr *v3; // eax
  struct CTYDialog *Dialog; // edi
  int v5; // eax
  CDlgMgr *v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx

  v3 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v3);
  if ( Dialog )
  {
    v5 = *((_DWORD *)this + 973);
    if ( v5 )
    {
      if ( v5 != a2 )
      {
        CTYDialog::RemoveNestedDialog(this, *((_DWORD *)this + 973));
        v6 = (CDlgMgr *)CDlgMgr::Instance();
        CDlgMgr::ShowDialog(v6);
      }
    }
    v7 = *((_DWORD *)this + 173);
    v8 = *((_DWORD *)this + 174);
    *((_DWORD *)this + 973) = a2;
    v9 = v7 - *((_DWORD *)Dialog + 175);
    *((_DWORD *)Dialog + 174) = v8;
    *((_DWORD *)Dialog + 173) = v9 - 3;
    CTYDialog::MoveNestedDialog(Dialog);
    CTYDialog::NestToDialog(Dialog, *((_DWORD *)this + 22));
  }
}
