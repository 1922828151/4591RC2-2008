/*
 * func-name: ?handle_time_out@Synch_Ack_Handler@Message@Outpop@@QAEXAAV?$Smart_Ptr@VMessage@1Outpop@@@Utility@3@AAV?$Smart_Ptr@USSynchRequestAckItem@Request_Ack@Message@Outpop@@@53@@Z
 * func-address: 0x10024860
 * callers: none
 * callees: none
 */

bool __stdcall Outpop::Message::Synch_Ack_Handler::handle_time_out(Outpop::Utility::Ref_Object **a1, int a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Ref_Object **v3; // esi
  Outpop::Utility::Ref_Object *v4; // ecx
  bool v5; // zf

  v2 = *(Outpop::Utility::Ref_Object **)(*(_DWORD *)a2 + 40);
  v3 = (Outpop::Utility::Ref_Object **)(*(_DWORD *)a2 + 40);
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  v4 = *a1;
  v5 = *a1 == 0;
  *v3 = *a1;
  if ( !v5 )
    Outpop::Utility::Ref_Object::addref(v4);
  return Outpop::Utility::Event_Base::signal((Outpop::Utility::Event_Base *)(*(_DWORD *)a2 + 28));
}
