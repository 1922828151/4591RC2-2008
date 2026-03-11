/*
 * func-name: ??1Remote_Event_Proxy@Message@Outpop@@UAE@XZ
 * func-address: 0x100282e0
 * callers: 0x10004ef0
 * callees: 0x10017550
 */

void __thiscall Outpop::Message::Remote_Event_Proxy::~Remote_Event_Proxy(Outpop::Message::Remote_Event_Proxy *this)
{
  Outpop::Utility::Ref_Object *v2; // edi

  v2 = (Outpop::Message::Remote_Event_Proxy *)((char *)this + 4);
  *(_DWORD *)this = &Outpop::Message::Remote_Event_Proxy::`vftable'{for `Outpop::Message::Message_Handler'};
  *((_DWORD *)this + 1) = &Outpop::Message::Remote_Event_Proxy::`vftable'{for `Outpop::Utility::Ref_Object'};
  Outpop::Utility::Lock::~Lock((Outpop::Message::Remote_Event_Proxy *)((char *)this + 96));
  Outpop::Message::Group::~Group((Outpop::Message::Remote_Event_Proxy *)((char *)this + 16));
  Outpop::Utility::Ref_Object::~Ref_Object(v2);
  *(_DWORD *)this = &Outpop::Message::Message_Handler::`vftable';
}
