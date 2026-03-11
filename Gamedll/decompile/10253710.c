/*
 * func-name: ??0CAlarmMessageUI@@QAE@XZ_0
 * func-address: 0x10253710
 * callers: 0x1001623e
 * callees: 0x100097fa, 0x10009b56, 0x102c9d98
 */

CAlarmMessageUI *__thiscall CAlarmMessageUI::CAlarmMessageUI(CAlarmMessageUI *this)
{
  _DWORD *v2; // eax
  EventAttemper *v3; // eax

  CTYDialog::CTYDialog(this);
  *(_DWORD *)this = &CAlarmMessageUI::`vftable';
  *((_DWORD *)this + 22) = 28;
  *((_DWORD *)this + 959) = 9;
  CTYDialog::ShowDialog(this, 0, 0.0);
  *((_DWORD *)this + 42) = 2;
  CAlarmMessageUI::Initialize(this);
  CAlarmMessageUI::InitComponent(this);
  v2 = operator new(4u);
  if ( v2 )
    *v2 = &AlarmRangeObserver::`vftable';
  v3 = (EventAttemper *)EventAttemper::Instance(19, 5601);
  *((_DWORD *)this + 969) = EventAttemper::AddObserver(v3);
  return this;
}
