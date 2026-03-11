/*
 * func-name: sub_10023610
 * func-address: 0x10023610
 * callers: 0x100253f0, 0x10025e70
 * callees: 0x100234b0
 */

Outpop::Utility::Timer_Handler *__fastcall sub_10023610(
        int a1,
        int a2,
        Outpop::Utility::Timer_Handler *a3,
        Outpop::Utility::Ref_Object **a4,
        Outpop::Utility::Ref_Object **a5)
{
  Outpop::Utility::Ref_Object *v5; // ecx
  bool v6; // zf

  sub_100234B0(a3, a2, a1, a4);
  *(_DWORD *)a3 = &Outpop::Message::Request_Ack::SAsynchRequestAckItem::`vftable';
  v5 = *a5;
  v6 = *a5 == 0;
  *((_DWORD *)a3 + 7) = *a5;
  if ( !v6 )
    Outpop::Utility::Ref_Object::addref(v5);
  return a3;
}
