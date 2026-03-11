/*
 * func-name: sub_10219E50
 * func-address: 0x10219e50
 * callers: 0x10006258
 * callees: none
 */

char __thiscall sub_10219E50(_DWORD *this)
{
  EventAttemper *v1; // eax

  v1 = (EventAttemper *)EventAttemper::Instance(this[3], 1);
  EventAttemper::RemoveObserver(v1);
  return 1;
}
