/*
 * func-name: ??1Dgram_Accept_Bluider_Process@IONetwork@Outpop@@UAE@XZ
 * func-address: 0x1003fe90
 * callers: 0x10016880
 * callees: none
 */

void __thiscall Outpop::IONetwork::Dgram_Accept_Bluider_Process::~Dgram_Accept_Bluider_Process(
        Outpop::IONetwork::Dgram_Accept_Bluider_Process *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx

  *(_DWORD *)this = &Outpop::IONetwork::Dgram_Accept_Bluider_Process::`vftable';
  v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 11);
  if ( v2 )
    (**v2)(v2, 1);
  v3 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 16);
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  v4 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 15);
  if ( v4 )
    Outpop::Utility::Ref_Object::release(v4);
  *((_DWORD *)this + 2) = &Outpop::IONetwork::INET_Addr::`vftable';
  *((_DWORD *)this + 2) = &Outpop::IONetwork::Addr::`vftable';
  Outpop::Utility::Ref_Object::~Ref_Object(this);
}
