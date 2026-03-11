/*
 * func-name: sub_1006AA80
 * func-address: 0x1006aa80
 * callers: 0x100199c0
 * callees: 0x102c9ea8
 */

int __cdecl sub_1006AA80(int a1, int *a2)
{
  CDlgMgr *v2; // eax
  struct CTYDialog *Dialog; // eax
  int result; // eax
  int v5; // [esp-10h] [ebp-10h]

  v2 = (CDlgMgr *)CDlgMgr::Instance(a1);
  Dialog = CDlgMgr::GetDialog(v2, 0);
  result = _RTDynamicCast(Dialog, v5, &CTYDialog `RTTI Type Descriptor', &CGroupQuickCallUI `RTTI Type Descriptor', 0);
  *a2 = result;
  return result;
}
