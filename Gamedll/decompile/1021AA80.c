/*
 * func-name: sub_1021AA80
 * func-address: 0x1021aa80
 * callers: 0x10001807
 * callees: none
 */

char __thiscall sub_1021AA80(_DWORD *this)
{
  EventAttemper *v2; // eax
  EventAttemper *v3; // eax
  EventAttemper *v4; // eax
  EventAttemper *v5; // eax
  EventAttemper *v6; // eax
  EventAttemper *v7; // eax
  EventAttemper *v8; // eax
  EventAttemper *v9; // eax
  EventAttemper *v10; // eax
  EventAttemper *v11; // eax

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
  v7 = (EventAttemper *)EventAttemper::Instance(this[8], 1);
  EventAttemper::RemoveObserver(v7);
  v8 = (EventAttemper *)EventAttemper::Instance(this[9], 1);
  EventAttemper::RemoveObserver(v8);
  v9 = (EventAttemper *)EventAttemper::Instance(this[10], 1);
  EventAttemper::RemoveObserver(v9);
  v10 = (EventAttemper *)EventAttemper::Instance(this[11], 1);
  EventAttemper::RemoveObserver(v10);
  v11 = (EventAttemper *)EventAttemper::Instance(this[12], 1);
  EventAttemper::RemoveObserver(v11);
  return 1;
}
