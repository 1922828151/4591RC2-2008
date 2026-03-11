/*
 * func-name: sub_10190E70
 * func-address: 0x10190e70
 * callers: 0x1000d5f8
 * callees: 0x102c9ea8
 */

int __cdecl sub_10190E70(int a1, int *a2)
{
  CDlgMgr *v2; // eax
  struct CTYDialog *Dialog; // eax
  int result; // eax

  v2 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v2);
  result = _RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CKillingInfoUI `RTTI Type Descriptor', 0);
  *a2 = result;
  return result;
}
