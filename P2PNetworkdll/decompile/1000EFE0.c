/*
 * func-name: sub_1000EFE0
 * func-address: 0x1000efe0
 * callers: 0x1000efc0
 * callees: none
 */

void __thiscall sub_1000EFE0(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // edi

  v2 = (Outpop::Utility::Ref_Object *)(this + 19);
  *this = &Outpop::P2P::UPNP_Network::`vftable';
  this[19] = &Outpop::P2P::UPNP_Network::`vftable';
  Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)(this + 33));
  Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)(this + 26));
  Outpop::Utility::Ref_Object::~Ref_Object(v2);
  Outpop::Utility::Task::~Task((Outpop::Utility::Task *)this);
}
