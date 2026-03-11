/*
 * func-name: ??1Dgram_Connect_Bluider_Process@IONetwork@Outpop@@UAE@XZ
 * func-address: 0x10040ec0
 * callers: 0x10016b90
 * callees: none
 */

void __thiscall Outpop::IONetwork::Dgram_Connect_Bluider_Process::~Dgram_Connect_Bluider_Process(
        Outpop::IONetwork::Dgram_Connect_Bluider_Process *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx

  *(_DWORD *)this = &Outpop::IONetwork::Dgram_Connect_Bluider_Process::`vftable';
  v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 9);
  if ( v2 )
    (**v2)(v2, 1);
  v3 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 17);
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  Outpop::Utility::Time_Value::~Time_Value((Outpop::IONetwork::Dgram_Connect_Bluider_Process *)((char *)this + 60));
  v4 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 13);
  if ( v4 )
    Outpop::Utility::Ref_Object::release(v4);
  *((_DWORD *)this + 2) = &Outpop::IONetwork::INET_Addr::`vftable';
  *((_DWORD *)this + 2) = &Outpop::IONetwork::Addr::`vftable';
  Outpop::Utility::Ref_Object::~Ref_Object(this);
}
