/*
 * func-name: ??1Message@0Outpop@@UAE@XZ
 * func-address: 0x10020b90
 * callers: 0x10004620
 * callees: none
 */

void __thiscall Outpop::Message::Message::~Message(Outpop::Message::Message *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *(_DWORD *)this = &Outpop::Message::Message::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 23);
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  Outpop::Utility::Binary_Stream::~Binary_Stream(this);
}
