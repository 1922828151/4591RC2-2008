/*
 * func-name: sub_10023720
 * func-address: 0x10023720
 * callers: 0x10026580
 * callees: 0x100234b0
 */

_DWORD *__fastcall sub_10023720(int a1, int a2, _DWORD *a3, Outpop::Utility::Ref_Object **a4)
{
  sub_100234B0((Outpop::Utility::Timer_Handler *)a3, a2, a1, a4);
  *a3 = &Outpop::Message::Request_Ack::SSynchRequestAckItem::`vftable';
  Outpop::Utility::Manual_Event::Manual_Event((Outpop::Utility::Manual_Event *)(a3 + 7), 0, 0);
  a3[10] = 0;
  return a3;
}
