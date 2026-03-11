/*
 * func-name: sub_1027FF20
 * func-address: 0x1027ff20
 * callers: 0x10007f31
 * callees: 0x102c9ea8
 */

int __cdecl sub_1027FF20(int a1, int *a2)
{
  CDlgMgr *v2; // eax
  struct CTYDialog *Dialog; // eax
  int result; // eax

  v2 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v2);
  result = _RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CTextInputUI `RTTI Type Descriptor');
  *a2 = result;
  return result;
}
