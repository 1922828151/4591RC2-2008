/*
 * func-name: ??0CGroupMemberUI@@QAE@XZ_0
 * func-address: 0x10271530
 * callers: 0x10018e76
 * callees: 0x1000ca63, 0x102c9d98
 */

CGroupMemberUI *__thiscall CGroupMemberUI::CGroupMemberUI(CGroupMemberUI *this)
{
  _DWORD *v2; // eax
  EventAttemper *v3; // eax
  _DWORD *v4; // eax
  EventAttemper *v5; // eax

  CTYDialog::CTYDialog(this);
  *(_DWORD *)this = &CGroupMemberUI::`vftable';
  *((_DWORD *)this + 969) = 0;
  *((_DWORD *)this + 970) = 0;
  *((_DWORD *)this + 971) = 0;
  *((_DWORD *)this + 22) = 10;
  *((_DWORD *)this + 959) = 9;
  CTYDialog::ShowDialog(this, 0, 0.0);
  *((_DWORD *)this + 42) = 2;
  CGroupMemberUI::Initialize(this);
  *((_BYTE *)this + 62) = 0;
  v2 = operator new(4u);
  if ( v2 )
    *v2 = &GroupChangeObserver::`vftable';
  v3 = (EventAttemper *)EventAttemper::Instance(9, 4500);
  *((_DWORD *)this + 973) = EventAttemper::AddObserver(v3);
  v4 = operator new(4u);
  if ( v4 )
    *v4 = &GroupChangeObserver::`vftable';
  v5 = (EventAttemper *)EventAttemper::Instance(9, 4503);
  *((_DWORD *)this + 974) = EventAttemper::AddObserver(v5);
  SetRect(&rc, 257, 662, 280, 685);
  SetRect(&stru_103B78E0, 284, 662, 307, 685);
  SetRect(&stru_103B78F0, 311, 662, 334, 685);
  SetRect(&stru_103B7900, 365, 662, 388, 685);
  SetRect(&stru_103B7910, 338, 662, 361, 685);
  SetRect(&stru_103B7920, 392, 662, 415, 685);
  return this;
}
