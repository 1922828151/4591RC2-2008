/*
 * func-name: ?AddAddonDialog@CDlgMgr@@QAEHPAVCTYDialog@@@Z
 * func-address: 0x1014a0f0
 * callers: none
 * callees: 0x1014a050
 */

int __thiscall CDlgMgr::AddAddonDialog(CDlgMgr *this, struct CTYDialog *a2)
{
  int v2; // edx

  v2 = dword_10282E3C++;
  *((_DWORD *)a2 + 22) = v2;
  CDlgMgr::AddDialog(this, a2);
  return *((_DWORD *)a2 + 22);
}
