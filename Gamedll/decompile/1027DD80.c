/*
 * func-name: ??1CRadarMapUI@@UAE@XZ_0
 * func-address: 0x1027dd80
 * callers: 0x10016eeb
 * callees: 0x100054c0, 0x102c0750
 */

void __thiscall CRadarMapUI::~CRadarMapUI(CRadarMapUI *this)
{
  EventAttemper *v2; // eax
  EventAttemper *v3; // eax
  EventAttemper *v4; // eax
  EventAttemper *v5; // eax
  EventAttemper *v6; // eax

  *(_DWORD *)this = &CRadarMapUI::`vftable';
  v2 = (EventAttemper *)EventAttemper::Instance(*((_DWORD *)this + 1025), 1);
  EventAttemper::RemoveObserver(v2);
  v3 = (EventAttemper *)EventAttemper::Instance(*((_DWORD *)this + 1026), 1);
  EventAttemper::RemoveObserver(v3);
  v4 = (EventAttemper *)EventAttemper::Instance(*((_DWORD *)this + 1027), 1);
  EventAttemper::RemoveObserver(v4);
  v5 = (EventAttemper *)EventAttemper::Instance(*((_DWORD *)this + 1028), 1);
  EventAttemper::RemoveObserver(v5);
  v6 = (EventAttemper *)EventAttemper::Instance(*((_DWORD *)this + 1029), 1);
  EventAttemper::RemoveObserver(v6);
  std::string::~string((char *)this + 4044);
  sub_102C0750((char *)this + 4004);
  std::string::~string((char *)this + 3960);
  sub_102C0750((char *)this + 3920);
  MapStateManager::~MapStateManager((CRadarMapUI *)((char *)this + 3872));
  CTYDialog::~CTYDialog(this);
}
