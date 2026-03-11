/*
 * func-name: ?OnExit@BigMapState@@UAEXXZ_0
 * func-address: 0x1027cdd0
 * callers: 0x10011ee1
 * callees: 0x10002077
 */

void __thiscall BigMapState::OnExit(CRadarMapUI **this)
{
  EventAttemper *v2; // eax
  EventAttemper *v3; // eax
  EventAttemper *v4; // eax
  struct CREControl *Control; // eax
  CRadarMapUI *v6; // eax
  int v7; // eax
  CDlgMgr *v8; // eax

  if ( this[23] != (CRadarMapUI *)-1 )
  {
    CRadarMapUI::SetIsInside(this[1], this[24] != 0);
    (*((void (__thiscall **)(CRadarMapUI **, CRadarMapUI *))*this + 5))(this, this[23]);
  }
  v2 = (EventAttemper *)EventAttemper::Instance(this[3], 0);
  EventAttemper::RemoveObserver(v2);
  v3 = (EventAttemper *)EventAttemper::Instance(this[7], 0);
  EventAttemper::RemoveObserver(v3);
  v4 = (EventAttemper *)EventAttemper::Instance(this[8], 0);
  EventAttemper::RemoveObserver(v4);
  CTYDialog::SetHasInput(this[1], 0);
  CHotZonePic::RemoveAllHotZone(*((CHotZonePic **)this[1] + 974));
  *(_BYTE *)(*((_DWORD *)this[1] + 974) + 644) = 0;
  CHotZonePic::SetHoverPicTypeEnabled(*((CHotZonePic **)this[1] + 974), 1, 0);
  CHotZonePic::SetHoverPicTypeEnabled(*((CHotZonePic **)this[1] + 974), 4, 0);
  CHotZonePic::SetHoverPicTypeEnabled(*((CHotZonePic **)this[1] + 974), 6, 0);
  CHotZonePic::SetHoverPicTypeEnabled(*((CHotZonePic **)this[1] + 974), 5, 0);
  CHotZonePic::SetHoverPicTypeEnabled(*((CHotZonePic **)this[1] + 974), 8, 0);
  CHotZonePic::SetHoverPicTypeEnabled(*((CHotZonePic **)this[1] + 974), 10, 0);
  Control = CREDialog::GetControl(this[1], 5);
  (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)Control + 136))(Control, 0);
  v6 = this[1];
  if ( *((_BYTE *)v6 + 4124) )
  {
    *((_BYTE *)v6 + 4124) = 0;
    v7 = GUISystem::Instance(1);
    GUISystem::SetCursor(v7);
    v8 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::ShowDialog(v8);
  }
  CTYDialog::SetHasInput(this[1], 0);
  this[1] = 0;
  this[24] = 0;
  this[23] = (CRadarMapUI *)-1;
}
