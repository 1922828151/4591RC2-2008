/*
 * func-name: ??1P2P_Context@P2P@Outpop@@UAE@XZ
 * func-address: 0x10001de0
 * callers: 0x10001350, 0x100256f0
 * callees: none
 */

void __thiscall Outpop::P2P::P2P_Context::~P2P_Context(Outpop::P2P::P2P_Context *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *(_DWORD *)this = &Outpop::P2P::P2P_Context::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 19);
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::P2P::P2P_Context *)((char *)this + 48));
  Outpop::Utility::Time_Value::~Time_Value((Outpop::P2P::P2P_Context *)((char *)this + 36));
  Outpop::Utility::Time_Value::~Time_Value((Outpop::P2P::P2P_Context *)((char *)this + 24));
  Outpop::Utility::Time_Value::~Time_Value((Outpop::P2P::P2P_Context *)((char *)this + 16));
  Outpop::Utility::Time_Value::~Time_Value((Outpop::P2P::P2P_Context *)((char *)this + 8));
  *(_DWORD *)this = Outpop::Utility::Config_Paser::`vftable';
}
