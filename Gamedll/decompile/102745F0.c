/*
 * func-name: ??1CHallMapUI@@UAE@XZ_0
 * func-address: 0x102745f0
 * callers: 0x10010c21
 * callees: none
 */

void __thiscall CHallMapUI::~CHallMapUI(CHallMapUI *this)
{
  EventAttemper *v2; // eax
  EventAttemper *v3; // eax

  *(_DWORD *)this = &CHallMapUI::`vftable';
  v2 = (EventAttemper *)EventAttemper::Instance(*((_DWORD *)this + 969), 1);
  EventAttemper::RemoveObserver(v2);
  v3 = (EventAttemper *)EventAttemper::Instance(*((_DWORD *)this + 970), 1);
  EventAttemper::RemoveObserver(v3);
  CTYDialog::~CTYDialog(this);
}
