/*
 * func-name: sub_1021A850
 * func-address: 0x1021a850
 * callers: 0x1001811a
 * callees: 0x1000ea6b, 0x102c9ea8
 */

char __stdcall sub_1021A850(int a1, wchar_t Format)
{
  CDlgMgr *v2; // eax
  struct CTYDialog *Dialog; // eax
  int v4; // eax
  CTYDialog *v5; // esi
  CDlgMgr *v6; // eax

  v2 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v2);
  v4 = _RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CQueuePosUI `RTTI Type Descriptor');
  v5 = (CTYDialog *)v4;
  if ( v4 )
  {
    sub_1000EA6B(Format);
    LOBYTE(v4) = CTYDialog::GetVisible(v5);
    if ( !(_BYTE)v4 )
    {
      v6 = (CDlgMgr *)CDlgMgr::Instance();
      LOBYTE(v4) = CDlgMgr::ShowDialog(v6);
    }
  }
  return v4;
}
