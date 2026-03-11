/*
 * func-name: sub_1028F8C0
 * func-address: 0x1028f8c0
 * callers: 0x10001bae
 * callees: 0x10017413, 0x102c9ea8
 */

void __stdcall sub_1028F8C0(int a1)
{
  CDlgMgr *v1; // eax
  struct CTYDialog *Dialog; // eax
  CStatusUI *v3; // eax

  v1 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v1);
  v3 = (CStatusUI *)_RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CStatusUI `RTTI Type Descriptor');
  if ( v3 )
    CStatusUI::OnEstabStateChange(v3);
}
