/*
 * func-name: sub_10002BA0
 * func-address: 0x10002ba0
 * callers: 0x10002c30
 * callees: none
 */

int __thiscall sub_10002BA0(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  int result; // eax

  *this = &Outpop::P2P::Peer_Send_Result::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)this[14];
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  result = std::string::~string(this + 7);
  *this = &Outpop::IONetwork::Asynch_Result::`vftable';
  return result;
}
