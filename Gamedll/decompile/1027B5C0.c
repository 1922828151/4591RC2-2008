/*
 * func-name: ?CancelByPlayer@CRadarMapUI@@UAE_NXZ_0
 * func-address: 0x1027b5c0
 * callers: 0x10019f9c
 * callees: none
 */

char __thiscall CRadarMapUI::CancelByPlayer(CRadarMapUI *this)
{
  int v1; // eax
  CDlgMgr *v2; // eax

  if ( !*((_BYTE *)this + 4124) )
    return 0;
  *((_BYTE *)this + 4124) = 0;
  v1 = GUISystem::Instance(1);
  GUISystem::SetCursor(v1);
  v2 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::ShowDialog(v2);
  return 1;
}
