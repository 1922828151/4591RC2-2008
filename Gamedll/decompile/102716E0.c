/*
 * func-name: ??1CGroupMemberUI@@UAE@XZ_0
 * func-address: 0x102716e0
 * callers: 0x10008567
 * callees: 0x10003dff, 0x102c9d50
 */

void __thiscall CGroupMemberUI::~CGroupMemberUI(CGroupMemberUI *this)
{
  EventAttemper *v2; // eax
  EventAttemper *v3; // eax
  int v4; // eax

  *(_DWORD *)this = &CGroupMemberUI::`vftable';
  v2 = (EventAttemper *)EventAttemper::Instance(*((_DWORD *)this + 973), 1);
  EventAttemper::RemoveObserver(v2);
  v3 = (EventAttemper *)EventAttemper::Instance(*((_DWORD *)this + 974), 1);
  EventAttemper::RemoveObserver(v3);
  v4 = *((_DWORD *)this + 969);
  if ( v4 )
  {
    sub_10003DFF(v4, *((_DWORD *)this + 970));
    operator delete(*((void **)this + 969));
  }
  *((_DWORD *)this + 969) = 0;
  *((_DWORD *)this + 970) = 0;
  *((_DWORD *)this + 971) = 0;
  CTYDialog::~CTYDialog(this);
}
