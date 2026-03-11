/*
 * func-name: ??0Remote_Event_Proxy@Message@Outpop@@QAE@EG@Z
 * func-address: 0x10028240
 * callers: none
 * callees: 0x100174e0
 */

Outpop::Message::Remote_Event_Proxy *__thiscall Outpop::Message::Remote_Event_Proxy::Remote_Event_Proxy(
        Outpop::Message::Remote_Event_Proxy *this,
        char a2,
        unsigned __int16 a3)
{
  _DWORD *v4; // edi

  *(_DWORD *)this = &Outpop::Message::Message_Handler::`vftable';
  v4 = (_DWORD *)((char *)this + 4);
  Outpop::Utility::Ref_Object::Ref_Object((Outpop::Message::Remote_Event_Proxy *)((char *)this + 4));
  *((_WORD *)this + 7) = a3;
  *(_DWORD *)this = &Outpop::Message::Remote_Event_Proxy::`vftable'{for `Outpop::Message::Message_Handler'};
  *v4 = &Outpop::Message::Remote_Event_Proxy::`vftable'{for `Outpop::Utility::Ref_Object'};
  *((_BYTE *)this + 12) = a2;
  Outpop::Message::Group::Group((Outpop::Message::Remote_Event_Proxy *)((char *)this + 16));
  Outpop::Utility::Lock::Lock((Outpop::Message::Remote_Event_Proxy *)((char *)this + 96));
  return this;
}
