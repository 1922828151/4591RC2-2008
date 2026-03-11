/*
 * func-name: sub_10001460
 * func-address: 0x10001460
 * callers: 0x10001440
 * callees: none
 */

void __thiscall sub_10001460(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *this = &Outpop::P2P::Network_Detector::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)this[26];
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)(this + 18));
  Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)(this + 11));
  Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)(this + 4));
  Outpop::Utility::Ref_Object::~Ref_Object((Outpop::Utility::Ref_Object *)this);
}
