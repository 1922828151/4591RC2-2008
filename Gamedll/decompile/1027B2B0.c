/*
 * func-name: ??1BigMapState@@UAE@XZ_0
 * func-address: 0x1027b2b0
 * callers: 0x10010398
 * callees: none
 */

void __thiscall BigMapState::~BigMapState(BigMapState *this)
{
  EventAttemper *v2; // eax
  EventAttemper *v3; // eax
  EventAttemper *v4; // eax

  *(_DWORD *)this = &BigMapState::`vftable'{for `MapState'};
  *((_DWORD *)this + 2) = &BigMapState::`vftable'{for `EventObserver'};
  v2 = (EventAttemper *)EventAttemper::Instance(*((_DWORD *)this + 6), 0);
  EventAttemper::RemoveObserver(v2);
  v3 = (EventAttemper *)EventAttemper::Instance(*((_DWORD *)this + 4), 0);
  EventAttemper::RemoveObserver(v3);
  v4 = (EventAttemper *)EventAttemper::Instance(*((_DWORD *)this + 5), 0);
  EventAttemper::RemoveObserver(v4);
  *(_DWORD *)this = &MapState::`vftable';
}
