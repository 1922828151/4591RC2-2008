/*
 * func-name: ?start_channel@Channel_Manager@Message@Outpop@@QAEHHAAV?$Smart_Ptr@VRef_Object@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x10011490
 * callers: 0x1000cc50
 * callees: 0x10011530
 */

int __stdcall Outpop::Message::Channel_Manager::start_channel(char a1, int a2)
{
  Outpop::Utility::Ref_Object *v2; // esi

  v2 = *(Outpop::Utility::Ref_Object **)Outpop::Message::Channel_Manager::find_channel(a1);
  if ( !v2 )
    return -1;
  Outpop::Utility::Ref_Object::addref(v2);
  Outpop::IONetwork::Channel::set_act_obj(v2, a2);
  (*(void (__thiscall **)(Outpop::Utility::Ref_Object *))(*(_DWORD *)v2 + 8))(v2);
  Outpop::Utility::Ref_Object::release(v2);
  return 0;
}
