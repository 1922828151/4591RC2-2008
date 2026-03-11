/*
 * func-name: ?AddEvent@EventAttemper@@QAEPAVEvent@@EGMW4EVENT_ACTION_TYPE@@AAH@Z
 * func-address: 0x1016f640
 * callers: none
 * callees: 0x1016f450
 */

float *__thiscall EventAttemper::AddEvent(
        _DWORD *this,
        unsigned __int8 a2,
        unsigned __int16 a3,
        _DWORD *a4,
        float *a5,
        _DWORD *a6)
{
  return EventAttemper::AddEvent(this, a3 | (a2 << 16), a4, a5, a6);
}
