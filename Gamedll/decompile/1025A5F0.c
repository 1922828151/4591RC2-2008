/*
 * func-name: sub_1025A5F0
 * func-address: 0x1025a5f0
 * callers: 0x10019dee
 * callees: 0x102c9ea8
 */

int __cdecl sub_1025A5F0(int a1, int *a2)
{
  CDlgMgr *v2; // eax
  struct CTYDialog *Dialog; // eax
  int result; // eax

  v2 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v2);
  result = _RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CGroupMemberUI `RTTI Type Descriptor');
  *a2 = result;
  return result;
}
