/*
 * func-name: ??0Channel_Manager@Message@Outpop@@QAE@AAVContext@12@@Z
 * func-address: 0x10010740
 * callers: 0x100052a0
 * callees: 0x10012390, 0x100278e0
 */

Outpop::Message::Channel_Manager *__thiscall Outpop::Message::Channel_Manager::Channel_Manager(
        Outpop::Message::Channel_Manager *this,
        struct Outpop::Message::Context *a2)
{
  *(_DWORD *)this = Outpop::IONetwork::Channel_Error_Handler::`vftable';
  *((_DWORD *)this + 1) = Outpop::IONetwork::Channel_Handler::`vftable';
  *(_DWORD *)this = &Outpop::Message::Channel_Manager::`vftable'{for `Outpop::IONetwork::Channel_Error_Handler'};
  *((_DWORD *)this + 1) = &Outpop::Message::Channel_Manager::`vftable'{for `Outpop::IONetwork::Channel_Handler'};
  sub_10012390((char *)this + 8);
  *((_DWORD *)this + 15) = a2;
  Outpop::Utility::Lock::Lock((Outpop::Message::Channel_Manager *)((char *)this + 64));
  sub_100278E0((char *)this + 88, &a2);
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_BYTE *)this + 164) = 1;
  *((_DWORD *)this + 32) = 1;
  return this;
}
