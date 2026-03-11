/*
 * func-name: ?CreateInstance@EventAttemper@@SA_NXZ
 * func-address: 0x1016f9a0
 * callers: 0x10097ea0
 * callees: 0x1016f8d0, 0x101a2534
 */

bool __cdecl EventAttemper::CreateInstance()
{
  EventAttemper *v0; // eax
  struct EventAttemper *v1; // eax

  if ( EventAttemper::s_pInstance )
  {
    (**(void (__thiscall ***)(struct EventAttemper *, int))EventAttemper::s_pInstance)(EventAttemper::s_pInstance, 1);
    EventAttemper::s_pInstance = 0;
  }
  v0 = (EventAttemper *)operator new(0xACu);
  if ( v0 )
    v1 = EventAttemper::EventAttemper(v0);
  else
    v1 = 0;
  EventAttemper::s_pInstance = v1;
  return v1 != 0;
}
