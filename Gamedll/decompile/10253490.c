/*
 * func-name: ??1CAlarmMessageUI@@UAE@XZ_0
 * func-address: 0x10253490
 * callers: 0x100055d8
 * callees: none
 */

void __thiscall CAlarmMessageUI::~CAlarmMessageUI(CAlarmMessageUI *this)
{
  EventAttemper *v2; // eax

  *(_DWORD *)this = &CAlarmMessageUI::`vftable';
  v2 = (EventAttemper *)EventAttemper::Instance(*((_DWORD *)this + 969), 1);
  EventAttemper::RemoveObserver(v2);
  CTYDialog::~CTYDialog(this);
}
