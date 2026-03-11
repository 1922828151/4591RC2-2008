/*
 * func-name: sub_102A64A0
 * func-address: 0x102a64a0
 * callers: 0x1000d10c
 * callees: none
 */

Outpop::Message::Message **__cdecl sub_102A64A0(
        Outpop::Message::Message **a1,
        unsigned __int8 a2,
        unsigned __int16 a3,
        unsigned int a4,
        int a5,
        int a6)
{
  Outpop::Utility::Ref_Object *v6; // esi
  Outpop::Utility::Ref_Object *v7; // ecx

  v6 = (Outpop::Utility::Ref_Object *)Outpop::Message::Message::operator new(0x6Cu);
  if ( v6 )
  {
    Outpop::Message::Message::Message(v6, 1, 1, 1, a5, a6);
    *(_DWORD *)v6 = &Outpop::Message::Message::`vftable';
    v7 = v6;
  }
  else
  {
    v7 = 0;
  }
  *a1 = v7;
  if ( v7 )
    Outpop::Utility::Ref_Object::addref(v7);
  Outpop::Message::Message::set_protocol_catalog(*a1, a2);
  Outpop::Message::Message::set_protocol_type(*a1, a3);
  Outpop::Message::Message::set_multi_id(*a1, a4);
  return a1;
}
