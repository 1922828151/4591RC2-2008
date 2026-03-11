/*
 * func-name: ??0Remote_Event_Proxy@Message@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10004da0
 * callers: none
 * callees: 0x10004d00
 */

Outpop::Message::Remote_Event_Proxy *__thiscall Outpop::Message::Remote_Event_Proxy::Remote_Event_Proxy(
        Outpop::Message::Remote_Event_Proxy *this,
        const struct Outpop::Message::Remote_Event_Proxy *a2)
{
  *(_DWORD *)this = &Outpop::Message::Message_Handler::`vftable';
  *((_DWORD *)this + 1) = Outpop::Utility::Ref_Object::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &Outpop::Message::Remote_Event_Proxy::`vftable'{for `Outpop::Message::Message_Handler'};
  *((_DWORD *)this + 1) = &Outpop::Message::Remote_Event_Proxy::`vftable'{for `Outpop::Utility::Ref_Object'};
  *((_BYTE *)this + 12) = *((_BYTE *)a2 + 12);
  *((_WORD *)this + 7) = *((_WORD *)a2 + 7);
  Outpop::Message::Group::Group(
    (Outpop::Message::Remote_Event_Proxy *)((char *)this + 16),
    (const struct Outpop::Message::Remote_Event_Proxy *)((char *)a2 + 16));
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 24);
  *((_DWORD *)this + 25) = *((_DWORD *)a2 + 25);
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 26);
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28);
  *((_DWORD *)this + 29) = *((_DWORD *)a2 + 29);
  return this;
}
