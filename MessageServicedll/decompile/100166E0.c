/*
 * func-name: sub_100166E0
 * func-address: 0x100166e0
 * callers: 0x100167c0
 * callees: none
 */

Outpop::Utility::Timer_Handler *__stdcall sub_100166E0(Outpop::Utility::Timer_Handler *a1, int a2, int a3)
{
  Outpop::Utility::Timer_Handler::Timer_Handler(a1);
  *(_DWORD *)a1 = &Outpop::Message::Re_Connect_Handler::`vftable';
  *((_DWORD *)a1 + 2) = a2;
  *((_DWORD *)a1 + 3) = a3;
  return a1;
}
