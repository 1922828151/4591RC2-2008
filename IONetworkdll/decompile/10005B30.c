/*
 * func-name: sub_10005B30
 * func-address: 0x10005b30
 * callers: 0x100117b0, 0x10027c50
 * callees: none
 */

Outpop::Utility::Thread_Mutex **__usercall sub_10005B30@<eax>(
        Outpop::Utility::Thread_Mutex *a1@<ecx>,
        Outpop::Utility::Thread_Mutex **a2@<esi>)
{
  *a2 = a1;
  a2[1] = 0;
  a2[1] = (Outpop::Utility::Thread_Mutex *)(Outpop::Utility::Thread_Mutex::acquire(a1) - 1);
  return a2;
}
