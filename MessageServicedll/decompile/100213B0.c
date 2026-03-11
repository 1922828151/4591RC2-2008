/*
 * func-name: ?send@Message_Sender@Message@Outpop@@QAEXHAAV?$vector@V?$Smart_Ptr@VMessage@1Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VMessage@1Outpop@@@Utility@Outpop@@@std@@@std@@W4EPriority@Utility@3@W4ESequenceType@73@_N@Z
 * func-address: 0x100213b0
 * callers: none
 * callees: 0x10011530
 */

void __thiscall Outpop::Message::Message_Sender::send(_DWORD *this, char a2, int a3, int a4, int a5, int a6)
{
  Outpop::Utility::Ref_Object *v6; // esi

  v6 = (Outpop::Utility::Ref_Object *)*Outpop::Message::Channel_Manager::find_channel(*(_DWORD **)(this[4] + 32), a2);
  if ( v6 )
  {
    Outpop::Utility::Ref_Object::addref(v6);
    (*(void (__thiscall **)(Outpop::Utility::Ref_Object *, int, int, int, int))(*(_DWORD *)v6 + 16))(v6, a3, a4, a5, a6);
    Outpop::Utility::Ref_Object::release(v6);
  }
}
