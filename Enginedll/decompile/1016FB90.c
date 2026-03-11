/*
 * func-name: ?AddObserver@EventAttemper@@QAEHEGPAVEventObserver@@@Z
 * func-address: 0x1016fb90
 * callers: none
 * callees: 0x1016fa20
 */

int __thiscall EventAttemper::AddObserver(
        EventAttemper *this,
        unsigned __int8 a2,
        unsigned __int16 a3,
        struct EventObserver *a4)
{
  return EventAttemper::AddObserver(this, a3 | (a2 << 16), a4);
}
