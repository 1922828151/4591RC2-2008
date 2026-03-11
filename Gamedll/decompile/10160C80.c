/*
 * func-name: sub_10160C80
 * func-address: 0x10160c80
 * callers: 0x1001a5be
 * callees: 0x102c9ea8
 */

int __cdecl sub_10160C80(int a1, int *a2)
{
  CDlgMgr *v2; // eax
  struct CTYDialog *Dialog; // eax
  int result; // eax
  int v5; // [esp-10h] [ebp-10h]

  v2 = (CDlgMgr *)CDlgMgr::Instance(a1);
  Dialog = CDlgMgr::GetDialog(v2, 0);
  result = _RTDynamicCast(Dialog, v5, &CTYDialog `RTTI Type Descriptor', &CFixtureUIHeader `RTTI Type Descriptor', 0);
  *a2 = result;
  return result;
}
