/*
 * func-name: sub_1001EA70
 * func-address: 0x1001ea70
 * callers: 0x1001eb50
 * callees: none
 */

void __thiscall sub_1001EA70(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Ref_Object *v3; // ecx

  *this = &Outpop::Message::Channel_Build_TM::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)this[25];
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  v3 = (Outpop::Utility::Ref_Object *)this[24];
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)(this + 15));
  Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)(this + 8));
  Outpop::Utility::Thread_Message::~Thread_Message((Outpop::Utility::Thread_Message *)this);
}
