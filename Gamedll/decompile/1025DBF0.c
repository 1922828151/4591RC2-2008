/*
 * func-name: ??0CControlCenterListUI@@QAE@XZ_0
 * func-address: 0x1025dbf0
 * callers: 0x1000c7d9
 * callees: 0x1000135c, 0x102c9d98
 */

CControlCenterListUI *__thiscall CControlCenterListUI::CControlCenterListUI(CControlCenterListUI *this)
{
  _DWORD *v2; // eax
  EventAttemper *v3; // eax

  CTYDialog::CTYDialog(this);
  *(_DWORD *)this = &CControlCenterListUI::`vftable';
  *((_DWORD *)this + 969) = 0;
  *((_DWORD *)this + 970) = 0;
  *((_DWORD *)this + 971) = 0;
  *((_DWORD *)this + 973) = 0;
  *((_DWORD *)this + 974) = 0;
  *((_DWORD *)this + 975) = 0;
  *((_DWORD *)this + 22) = 26;
  *((_DWORD *)this + 959) = 9;
  *((_DWORD *)this + 42) = 2;
  CControlCenterListUI::Initialize(this);
  v2 = operator new(4u);
  if ( v2 )
    *v2 = &ControlCenterListObserver::`vftable';
  v3 = (EventAttemper *)EventAttemper::Instance(19, 5611);
  *((_DWORD *)this + 976) = EventAttemper::AddObserver(v3);
  return this;
}
