/*
 * func-name: ?cache_send@Message_Sender@Message@Outpop@@QAEXHAAV?$Smart_Ptr@VMessage@1Outpop@@@Utility@3@@Z
 * func-address: 0x10021450
 * callers: 0x1000ce10
 * callees: 0x100218b0
 */

void __stdcall Outpop::Message::Message_Sender::cache_send(int a1, Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v2; // edi

  v2 = *a2;
  if ( *a2 )
    Outpop::Utility::Ref_Object::addref(v2);
  sub_100218B0();
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
}
