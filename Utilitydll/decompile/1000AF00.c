/*
 * func-name: ?dispatch@Dispatch_Thread_2@Utility@Outpop@@UAEXAAV?$Smart_Ptr@VThread_Message@Utility@Outpop@@@23@@Z
 * func-address: 0x1000af00
 * callers: none
 * callees: 0x1000b100
 */

void __thiscall Outpop::Utility::Dispatch_Thread_2::dispatch(int this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)(this + 88);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 88));
  sub_1000B100();
  LeaveCriticalSection(v2);
}
