/*
 * func-name: sub_100234B0
 * func-address: 0x100234b0
 * callers: 0x10023610, 0x10023720
 * callees: none
 */

Outpop::Utility::Timer_Handler *__stdcall sub_100234B0(
        Outpop::Utility::Timer_Handler *a1,
        int a2,
        int a3,
        Outpop::Utility::Ref_Object **a4)
{
  Outpop::Utility::Ref_Object *v4; // ecx
  bool v5; // zf

  Outpop::Utility::Timer_Handler::Timer_Handler(a1);
  *(_DWORD *)a1 = &Outpop::Message::Request_Ack::SRequestAckItem::`vftable';
  v4 = *a4;
  v5 = *a4 == 0;
  *((_DWORD *)a1 + 2) = *a4;
  if ( !v5 )
    Outpop::Utility::Ref_Object::addref(v4);
  *((_DWORD *)a1 + 3) = a3;
  *((_DWORD *)a1 + 5) = a2;
  *((_DWORD *)a1 + 6) = -1;
  return a1;
}
