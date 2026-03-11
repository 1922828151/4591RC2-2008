/*
 * func-name: sub_10270120
 * func-address: 0x10270120
 * callers: 0x1000ddaa
 * callees: none
 */

void __thiscall sub_10270120(CTYDialog *this, int a2)
{
  CDlgMgr *v3; // eax
  struct CTYDialog *Dialog; // edi
  int v5; // eax
  CDlgMgr *v6; // eax
  int v7; // ecx
  int v8; // eax

  v3 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v3);
  if ( Dialog )
  {
    v5 = *((_DWORD *)this + 974);
    if ( v5 )
    {
      if ( v5 != a2 )
      {
        CTYDialog::RemoveNestedDialog(this, *((_DWORD *)this + 974));
        v6 = (CDlgMgr *)CDlgMgr::Instance();
        CDlgMgr::ShowDialog(v6);
      }
    }
    v7 = *((_DWORD *)this + 173) + *((_DWORD *)this + 175);
    v8 = *((_DWORD *)this + 174);
    *((_DWORD *)this + 974) = a2;
    *((_DWORD *)Dialog + 173) = v7;
    *((_DWORD *)Dialog + 174) = v8;
    CTYDialog::MoveNestedDialog(Dialog);
    CTYDialog::NestToDialog(Dialog, *((_DWORD *)this + 22));
  }
}
