/*
 * func-name: ?Instance@EventAttemper@@SAPAV1@XZ
 * func-address: 0x1016ed30
 * callers: 0x100958f0, 0x10096550, 0x10097ea0, 0x1013e2e0
 * callees: none
 */

struct EventAttemper *__cdecl EventAttemper::Instance()
{
  return EventAttemper::s_pInstance;
}
