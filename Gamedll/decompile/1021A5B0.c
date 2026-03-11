/*
 * func-name: sub_1021A5B0
 * func-address: 0x1021a5b0
 * callers: 0x1001a64a
 * callees: none
 */

char __thiscall sub_1021A5B0(_DWORD *this)
{
  EventAttemper *v2; // eax
  EventAttemper *v3; // eax
  EventAttemper *v4; // eax
  EventAttemper *v5; // eax
  EventAttemper *v6; // eax

  v2 = (EventAttemper *)EventAttemper::Instance(this[3], 1);
  EventAttemper::RemoveObserver(v2);
  v3 = (EventAttemper *)EventAttemper::Instance(this[4], 1);
  EventAttemper::RemoveObserver(v3);
  v4 = (EventAttemper *)EventAttemper::Instance(this[5], 1);
  EventAttemper::RemoveObserver(v4);
  v5 = (EventAttemper *)EventAttemper::Instance(this[6], 1);
  EventAttemper::RemoveObserver(v5);
  v6 = (EventAttemper *)EventAttemper::Instance(this[7], 1);
  EventAttemper::RemoveObserver(v6);
  return 1;
}
