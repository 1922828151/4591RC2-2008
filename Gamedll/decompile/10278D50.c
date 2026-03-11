/*
 * func-name: ?Cancel@CPasswordInputUI@@QAEXXZ_0
 * func-address: 0x10278d50
 * callers: 0x10001ab9
 * callees: none
 */

void __thiscall CPasswordInputUI::Cancel(CPasswordInputUI *this)
{
  CDlgMgr *v1; // eax

  v1 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::ShowDialog(v1);
}
