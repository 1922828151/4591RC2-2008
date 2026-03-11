/*
 * func-name: ??1CControlCenterListUI@@UAE@XZ_0
 * func-address: 0x1025da00
 * callers: 0x100098c2
 * callees: 0x102c9d50
 */

void __thiscall CControlCenterListUI::~CControlCenterListUI(CControlCenterListUI *this)
{
  EventAttemper *v2; // eax

  *(_DWORD *)this = &CControlCenterListUI::`vftable';
  v2 = (EventAttemper *)EventAttemper::Instance(*((_DWORD *)this + 976), 1);
  EventAttemper::RemoveObserver(v2);
  if ( *((_DWORD *)this + 973) )
    operator delete(*((void **)this + 973));
  *((_DWORD *)this + 973) = 0;
  *((_DWORD *)this + 974) = 0;
  *((_DWORD *)this + 975) = 0;
  if ( *((_DWORD *)this + 969) )
    operator delete(*((void **)this + 969));
  *((_DWORD *)this + 969) = 0;
  *((_DWORD *)this + 970) = 0;
  *((_DWORD *)this + 971) = 0;
  CTYDialog::~CTYDialog(this);
}
