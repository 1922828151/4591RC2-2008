/*
 * func-name: ??0Connector_Manager@Message@Outpop@@QAE@AAVContext@12@@Z
 * func-address: 0x100131c0
 * callers: 0x100052a0
 * callees: 0x100278e0
 */

Outpop::Message::Connector_Manager *__thiscall Outpop::Message::Connector_Manager::Connector_Manager(
        Outpop::Message::Connector_Manager *this,
        struct Outpop::Message::Context *a2)
{
  struct Outpop::Message::Context *v3; // ecx

  *(_DWORD *)this = Outpop::IONetwork::Connector_Handler::`vftable';
  v3 = a2;
  *(_DWORD *)this = &Outpop::Message::Connector_Manager::`vftable';
  *((_DWORD *)this + 1) = v3;
  sub_100278E0((char *)this + 8, &a2);
  Outpop::Utility::Lock::Lock((Outpop::Message::Connector_Manager *)((char *)this + 48));
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 18) = 1;
  *((_BYTE *)this + 124) = 1;
  return this;
}
