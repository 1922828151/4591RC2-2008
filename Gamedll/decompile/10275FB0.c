/*
 * func-name: sub_10275FB0
 * func-address: 0x10275fb0
 * callers: 0x10011db0
 * callees: 0x102c9ea8
 */

int __cdecl sub_10275FB0(int a1, int *a2)
{
  CDlgMgr *v2; // eax
  struct CTYDialog *Dialog; // eax
  int result; // eax

  v2 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v2);
  result = _RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CHallMapUI `RTTI Type Descriptor');
  *a2 = result;
  return result;
}
