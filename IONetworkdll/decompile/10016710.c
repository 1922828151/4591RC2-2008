/*
 * func-name: ??0Dgram_Accept_Bluider_Process@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10016710
 * callers: none
 * callees: 0x10002e10
 */

Outpop::IONetwork::Dgram_Accept_Bluider_Process *__thiscall Outpop::IONetwork::Dgram_Accept_Bluider_Process::Dgram_Accept_Bluider_Process(
        Outpop::IONetwork::Dgram_Accept_Bluider_Process *this,
        const struct Outpop::IONetwork::Dgram_Accept_Bluider_Process *a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx

  *(_DWORD *)this = Outpop::Utility::Ref_Object::`vftable';
  *((_DWORD *)this + 1) = 0;
  *(_DWORD *)this = &Outpop::IONetwork::Dgram_Accept_Bluider_Process::`vftable';
  Outpop::IONetwork::INET_Addr::INET_Addr(
    (Outpop::IONetwork::Dgram_Accept_Bluider_Process *)((char *)this + 8),
    (const struct Outpop::IONetwork::Dgram_Accept_Bluider_Process *)((char *)a2 + 8));
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  v3 = (Outpop::Utility::Ref_Object *)*((_DWORD *)a2 + 15);
  *((_DWORD *)this + 15) = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  v4 = (Outpop::Utility::Ref_Object *)*((_DWORD *)a2 + 16);
  *((_DWORD *)this + 16) = v4;
  if ( v4 )
    Outpop::Utility::Ref_Object::addref(v4);
  return this;
}
