/*
 * func-name: sub_1001CCF0
 * func-address: 0x1001ccf0
 * callers: 0x1001cc90
 * callees: none
 */

void __cdecl sub_1001CCF0()
{
  DeleteCriticalSection(&Outpop::Utility::Singleton_Manager::g_singleton_lock_);
}
