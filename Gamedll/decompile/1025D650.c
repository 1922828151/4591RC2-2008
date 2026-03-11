/*
 * func-name: ?Tick@CControlCenterListUI@@UAEXM@Z_0
 * func-address: 0x1025d650
 * callers: 0x10012efe
 * callees: none
 */

void __thiscall CControlCenterListUI::Tick(CControlCenterListUI *this, float a2)
{
  CDlgMgr *v3; // eax

  CTYDialog::CenterDialog(this, 1, 1);
  if ( *(float *)&GSeconds - *((float *)this + 977) > 10.0 )
  {
    v3 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::ShowDialog(v3);
  }
  CTYDialog::Tick(this, a2);
}
