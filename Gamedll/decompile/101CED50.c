/*
 * func-name: sub_101CED50
 * func-address: 0x101ced50
 * callers: 0x1001636a
 * callees: 0x102c9ea8
 */

int __cdecl sub_101CED50(int a1, int *a2)
{
  CDlgMgr *v2; // eax
  struct CTYDialog *Dialog; // eax
  int result; // eax

  v2 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v2);
  result = _RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CWaitQueueUI `RTTI Type Descriptor', 0);
  *a2 = result;
  return result;
}
