/*
 * func-name: sub_1028C050
 * func-address: 0x1028c050
 * callers: 0x10007d42
 * callees: 0x102c9ea8
 */

int __stdcall sub_1028C050(int a1)
{
  CDlgMgr *v1; // eax
  struct CTYDialog *Dialog; // eax
  int result; // eax

  v1 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v1);
  result = _RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CStatusUI `RTTI Type Descriptor');
  if ( result )
    *(_DWORD *)(result + 4016) = 0;
  return result;
}
