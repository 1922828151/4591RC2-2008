/*
 * func-name: sub_10270260
 * func-address: 0x10270260
 * callers: 0x10005cf4
 * callees: none
 */

void __thiscall sub_10270260(CTYDialog *this)
{
  CDlgMgr *v2; // eax
  struct CTYDialog *Dialog; // ebp
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // edx
  void (__thiscall *v8)(CTYDialog *); // eax

  v2 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v2);
  if ( Dialog )
  {
    v4 = *((_DWORD *)this + 173);
    CTYDialog::NestToEdge(this, 4u);
    v5 = *((_DWORD *)this + 173) - *((_DWORD *)Dialog + 175);
    *((_DWORD *)this + 173) = v4;
    CTYDialog::MoveNestedDialog(this);
    v6 = *((_DWORD *)this + 174);
    *((float *)this + 946) = 400.0;
    v7 = *(_DWORD *)this;
    *((_DWORD *)this + 947) = *((_DWORD *)this + 173);
    *((_DWORD *)this + 948) = v6;
    *((_DWORD *)this + 950) = v6;
    v8 = *(void (__thiscall **)(CTYDialog *))(v7 + 32);
    *((_DWORD *)this + 943) = 4;
    *((_DWORD *)this + 949) = v5;
    *((_BYTE *)this + 3868) = 1;
    v8(this);
    CTYDialog::SetHasInput(this, 1);
  }
}
