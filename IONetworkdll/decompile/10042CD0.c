/*
 * func-name: ??1P2P_Channel@IONetwork@Outpop@@UAE@XZ
 * func-address: 0x10042cd0
 * callers: 0x10042580
 * callees: 0x10005080, 0x10023210, 0x1003c700, 0x10046710
 */

void __thiscall Outpop::IONetwork::P2P_Channel::~P2P_Channel(Outpop::IONetwork::P2P_Channel *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx

  *(_DWORD *)this = &Outpop::IONetwork::P2P_Channel::`vftable';
  Outpop::Utility::Time_Value::~Time_Value((Outpop::IONetwork::P2P_Channel *)((char *)this + 704));
  v2 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 174);
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  v3 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 173);
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  std::string::~string((char *)this + 664);
  std::string::~string((char *)this + 636);
  v4 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 155);
  if ( v4 )
    Outpop::Utility::Ref_Object::release(v4);
  Outpop::Utility::Time_Value::~Time_Value((Outpop::IONetwork::P2P_Channel *)((char *)this + 604));
  Outpop::IONetwork::Sequence_Container::~Sequence_Container((Outpop::IONetwork::P2P_Channel *)((char *)this + 428));
  sub_10046710((char *)this + 272);
  Outpop::IONetwork::Comminute_Container::~Comminute_Container((Outpop::IONetwork::P2P_Channel *)((char *)this + 204));
  Outpop::IONetwork::Channel::~Channel(this);
}
