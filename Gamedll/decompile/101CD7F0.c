/*
 * func-name: sub_101CD7F0
 * func-address: 0x101cd7f0
 * callers: 0x10007883
 * callees: none
 */

bool __stdcall sub_101CD7F0(int a1)
{
  CDlgMgr *v1; // eax

  v1 = (CDlgMgr *)CDlgMgr::Instance();
  return CDlgMgr::ShowDialog(v1);
}
