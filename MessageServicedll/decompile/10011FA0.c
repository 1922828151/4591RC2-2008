/*
 * func-name: ?cache_start_channel@Channel_Manager@Message@Outpop@@QAEHHAAV?$Smart_Ptr@VRef_Object@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x10011fa0
 * callers: 0x1000cc70
 * callees: 0x10011530, 0x100129e0
 */

int __thiscall Outpop::Message::Channel_Manager::cache_start_channel(_DWORD *this, char a2, int a3)
{
  Outpop::Utility::Ref_Object *v3; // edi

  v3 = (Outpop::Utility::Ref_Object *)*Outpop::Message::Channel_Manager::find_channel(this, a2);
  if ( !v3 )
    return -1;
  Outpop::Utility::Ref_Object::addref(v3);
  Outpop::IONetwork::Channel::set_act_obj(v3, a3);
  sub_100129E0();
  Outpop::Utility::Ref_Object::release(v3);
  return 0;
}
