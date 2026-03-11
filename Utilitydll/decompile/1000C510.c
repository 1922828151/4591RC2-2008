/*
 * func-name: ?release@Recursive_mutex@Utility@Outpop@@QAE_NXZ
 * func-address: 0x1000c510
 * callers: none
 * callees: none
 */

char __thiscall Outpop::Utility::Recursive_mutex::release(LPCRITICAL_SECTION lpCriticalSection)
{
  if ( lpCriticalSection[1].DebugInfo )
  {
    DeleteCriticalSection(lpCriticalSection);
    lpCriticalSection[1].DebugInfo = 0;
  }
  return 1;
}
