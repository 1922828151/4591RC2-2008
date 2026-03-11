/*
 * func-name: ?HasDlgCorruptAct@CDlgMgr@@QAE_NXZ
 * func-address: 0x100a2ed0
 * callers: none
 * callees: none
 */

BOOL __thiscall CDlgMgr::HasDlgCorruptAct(CDlgMgr *this)
{
  return CTYDialog::m_iDialogCorruptAct > 0;
}
