/*
 * func-name: ??0BigMapState@@QAE@XZ_0
 * func-address: 0x1027b1d0
 * callers: 0x10006b1d
 * callees: none
 */

BigMapState *__thiscall BigMapState::BigMapState(BigMapState *this)
{
  EventAttemper *v2; // eax
  EventAttemper *v3; // eax
  EventAttemper *v4; // eax
  int v5; // eax
  BigMapState *result; // eax

  *(_DWORD *)this = &MapState::`vftable';
  *((_DWORD *)this + 1) = 0;
  *((float *)this + 9) = 0.0;
  *((float *)this + 10) = 0.0;
  *((float *)this + 11) = 0.0;
  *(_DWORD *)this = &BigMapState::`vftable'{for `MapState'};
  *((_DWORD *)this + 2) = &BigMapState::`vftable'{for `EventObserver'};
  *((_BYTE *)this + 48) = 0;
  v2 = (EventAttemper *)EventAttemper::Instance(9, 4150);
  *((_DWORD *)this + 6) = EventAttemper::AddObserver(v2);
  v3 = (EventAttemper *)EventAttemper::Instance(9, 4106);
  *((_DWORD *)this + 4) = EventAttemper::AddObserver(v3);
  v4 = (EventAttemper *)EventAttemper::Instance(9, 4109);
  v5 = EventAttemper::AddObserver(v4);
  *((float *)this + 17) = 0.2;
  *((_DWORD *)this + 5) = v5;
  result = this;
  *((float *)this + 16) = 0.40000001;
  *((float *)this + 15) = 0.60000002;
  *((float *)this + 14) = 0.80000001;
  *((float *)this + 13) = 1.0;
  return result;
}
