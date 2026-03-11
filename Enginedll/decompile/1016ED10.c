/*
 * func-name: ?DestroyInstance@EventAttemper@@SAXXZ
 * func-address: 0x1016ed10
 * callers: 0x10096550
 * callees: none
 */

void __cdecl EventAttemper::DestroyInstance()
{
  if ( EventAttemper::s_pInstance )
  {
    (**(void (__thiscall ***)(struct EventAttemper *, int))EventAttemper::s_pInstance)(EventAttemper::s_pInstance, 1);
    EventAttemper::s_pInstance = 0;
  }
}
