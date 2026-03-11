/*
 * func-name: sub_1000DB90
 * func-address: 0x1000db90
 * callers: 0x10056dd0, 0x10056df0, 0x10056e10
 * callees: none
 */

_DWORD *__stdcall sub_1000DB90(_DWORD *a1)
{
  *a1 = -1;
  Outpop::Utility::Thread_Mutex::Thread_Mutex((Outpop::Utility::Thread_Mutex *)(a1 + 1));
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  return a1;
}
