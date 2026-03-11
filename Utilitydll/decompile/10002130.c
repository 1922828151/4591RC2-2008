/*
 * func-name: ?get_lock@Singleton_Manager@Utility@Outpop@@SAAAVLock@23@XZ
 * func-address: 0x10002130
 * callers: none
 * callees: none
 */

struct _RTL_CRITICAL_SECTION *__cdecl Outpop::Utility::Singleton_Manager::get_lock()
{
  return &Outpop::Utility::Singleton_Manager::g_singleton_lock_;
}
