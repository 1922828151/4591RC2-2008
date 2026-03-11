/*
 * func-name: ?get_remote_addr@Channel_Manager@Message@Outpop@@QAEAAVINET_Addr@IONetwork@3@H@Z
 * func-address: 0x10011f00
 * callers: 0x1000d220
 * callees: 0x10011530
 */

struct Outpop::IONetwork::INET_Addr *__thiscall Outpop::Message::Channel_Manager::get_remote_addr(
        Outpop::Message::Channel_Manager *this,
        char a2)
{
  Outpop::Utility::Ref_Object *v2; // esi
  struct Outpop::IONetwork::INET_Addr *remote_address; // edi

  v2 = (Outpop::Utility::Ref_Object *)*Outpop::Message::Channel_Manager::find_channel(this, a2);
  if ( !v2 )
    return (struct Outpop::IONetwork::INET_Addr *)&unk_100462AC;
  Outpop::Utility::Ref_Object::addref(v2);
  remote_address = Outpop::IONetwork::Channel::get_remote_address(v2);
  Outpop::Utility::Ref_Object::release(v2);
  return remote_address;
}
