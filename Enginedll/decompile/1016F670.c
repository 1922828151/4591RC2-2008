/*
 * func-name: ?AddEvent@EventAttemper@@QAEPAVEvent@@EGMW4EVENT_ACTION_TYPE@@@Z
 * func-address: 0x1016f670
 * callers: 0x1013e2e0
 * callees: 0x1016f450
 */

float *__thiscall EventAttemper::AddEvent(_DWORD *this, unsigned __int8 a2, unsigned __int16 a3, _DWORD *a4, float *a5)
{
  return EventAttemper::AddEvent(this, a3 | (a2 << 16), a4, a5, &a2);
}
