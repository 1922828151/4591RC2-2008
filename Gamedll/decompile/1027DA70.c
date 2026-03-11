/*
 * func-name: ?Initialize@CRadarMapUI@@QAEXXZ_0
 * func-address: 0x1027da70
 * callers: 0x10010776
 * callees: 0x1000b1e0, 0x102c9d98, 0x102c9ea8
 */

void __thiscall CRadarMapUI::Initialize(CRadarMapUI *this)
{
  int v2; // eax
  struct CREControl *Control; // eax
  struct CREControl *v4; // eax
  _DWORD *v5; // eax
  EventAttemper *v6; // eax
  _DWORD *v7; // eax
  EventAttemper *v8; // eax
  _DWORD *v9; // eax
  EventAttemper *v10; // eax
  _DWORD *v11; // eax
  EventAttemper *v12; // eax
  _DWORD *v13; // eax
  EventAttemper *v14; // eax
  int v15; // [esp+14h] [ebp-4Ch]
  int v16; // [esp+18h] [ebp-48h]
  _BYTE v17[20]; // [esp+40h] [ebp-20h] BYREF

  *((_DWORD *)this + 173) = 0;
  *((_DWORD *)this + 174) = 0;
  CTYDialog::MoveNestedDialog(this);
  std::string::string(v17, "DlgDatabase.xml");
  v2 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v2);
  std::string::~string(v17);
  *((_BYTE *)this + 62) = 0;
  Control = CREDialog::GetControl(this, 1);
  *((_DWORD *)this + 975) = _RTDynamicCast(Control, v16, 0, &CREControl `RTTI Type Descriptor');
  v4 = CREDialog::GetControl(this, 4);
  *((_DWORD *)this + 976) = _RTDynamicCast(v4, v15, 0, &CREControl `RTTI Type Descriptor');
  *((_DWORD *)this + 184) = CRadarMapUI::RadarMapUIEvent;
  MapStateManager::ChangeToState(1, (int)this);
  v5 = operator new(4u);
  if ( v5 )
    *v5 = &BattleFieldInfoUpdatedObserver::`vftable';
  v6 = (EventAttemper *)EventAttemper::Instance(9, 2100);
  *((_DWORD *)this + 1025) = EventAttemper::AddObserver(v6);
  v7 = operator new(4u);
  if ( v7 )
    *v7 = &ChangeAreaObserver::`vftable';
  v8 = (EventAttemper *)EventAttemper::Instance(9, 4430);
  *((_DWORD *)this + 1026) = EventAttemper::AddObserver(v8);
  v9 = operator new(4u);
  if ( v9 )
    *v9 = &GroupCmdUpdateObserver::`vftable';
  v10 = (EventAttemper *)EventAttemper::Instance(9, 4503);
  *((_DWORD *)this + 1027) = EventAttemper::AddObserver(v10);
  v11 = operator new(4u);
  if ( v11 )
    *v11 = &GroupUpdateObserver::`vftable';
  v12 = (EventAttemper *)EventAttemper::Instance(9, 4500);
  *((_DWORD *)this + 1028) = EventAttemper::AddObserver(v12);
  v13 = operator new(4u);
  if ( v13 )
    *v13 = &CorpCmdUpdateObserver::`vftable';
  v14 = (EventAttemper *)EventAttemper::Instance(9, 1100);
  *((_DWORD *)this + 1029) = EventAttemper::AddObserver(v14);
  CREDialog::RefreshControlByZOrder(this);
  CREDialog::AddDlgFrontOfMe(this, 16);
}
