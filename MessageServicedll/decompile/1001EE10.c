/*
 * func-name: sub_1001EE10
 * func-address: 0x1001ee10
 * callers: 0x1001eee0
 * callees: none
 */

void __thiscall sub_1001EE10(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Ref_Object *v3; // ecx

  *this = &Outpop::Message::Channel_Connect_Failed_TM::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)this[17];
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  v3 = (Outpop::Utility::Ref_Object *)this[16];
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)(this + 9));
  Outpop::Utility::Thread_Message::~Thread_Message((Outpop::Utility::Thread_Message *)this);
}
