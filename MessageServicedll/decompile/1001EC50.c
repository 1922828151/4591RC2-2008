/*
 * func-name: sub_1001EC50
 * func-address: 0x1001ec50
 * callers: 0x1001ed10
 * callees: none
 */

void __thiscall sub_1001EC50(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *this = &Outpop::Message::Channel_Error_TM::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)this[25];
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)(this + 16));
  Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)(this + 9));
  Outpop::Utility::Thread_Message::~Thread_Message((Outpop::Utility::Thread_Message *)this);
}
