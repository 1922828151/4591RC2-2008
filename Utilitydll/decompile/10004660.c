/*
 * func-name: sub_10004660
 * func-address: 0x10004660
 * callers: 0x10004830
 * callees: none
 */

_DWORD *__userpurge sub_10004660@<eax>(int *a1@<ecx>, _DWORD *a2@<ebx>, _DWORD *a3, int a4, int *a5, _DWORD *a6)
{
  int v6; // eax
  bool v7; // zf
  int v8; // eax

  *a3 = &Outpop::Utility::Ref_Object::`vftable';
  a3[1] = 0;
  *a3 = &Outpop::Utility::Thread_Message::`vftable';
  *a3 = &Outpop::Utility::Timer_Process_Message::`vftable';
  a3[2] = a4;
  v6 = *a1;
  v7 = *a1 == 0;
  a3[3] = *a1;
  if ( !v7 )
    InterlockedIncrement((volatile LONG *)(v6 + 4));
  v8 = *a5;
  v7 = *a5 == 0;
  a3[4] = *a5;
  if ( !v7 )
    InterlockedIncrement((volatile LONG *)(v8 + 4));
  a3[5] = *a6;
  a3[6] = a6[1];
  a3[7] = *a2;
  a3[8] = a2[1];
  return a3;
}
