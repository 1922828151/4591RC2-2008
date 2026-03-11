/*
 * func-name: ?SetInSelectPosMode@CRadarMapUI@@QAEX_N@Z_0
 * func-address: 0x1027ad60
 * callers: 0x10004638
 * callees: none
 */

void __thiscall CRadarMapUI::SetInSelectPosMode(CRadarMapUI *this, bool a2)
{
  int v2; // eax
  CDlgMgr *v3; // eax

  if ( *((_BYTE *)this + 4124) != a2 )
  {
    *((_BYTE *)this + 4124) = a2;
    v2 = GUISystem::Instance(1);
    GUISystem::SetCursor(v2);
    v3 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::ShowDialog(v3);
  }
}
