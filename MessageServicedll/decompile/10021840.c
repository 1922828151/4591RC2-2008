/*
 * func-name: ?send_im@Message_Sender@Message@Outpop@@QAEXHAAV?$Smart_Ptr@VMessage@1Outpop@@@Utility@3@@Z
 * func-address: 0x10021840
 * callers: none
 * callees: 0x10011530
 */

void __thiscall Outpop::Message::Message_Sender::send_im(_DWORD *this, char a2, int a3)
{
  Outpop::Utility::Ref_Object *v3; // esi

  v3 = (Outpop::Utility::Ref_Object *)*Outpop::Message::Channel_Manager::find_channel(*(_DWORD **)(this[4] + 32), a2);
  if ( v3 )
  {
    Outpop::Utility::Ref_Object::addref(v3);
    Outpop::Utility::Ref_Object::release(v3);
  }
}
