/*
 * func-name: sub_102A63C0
 * func-address: 0x102a63c0
 * callers: none
 * callees: none
 */

Outpop::Message::Message **__cdecl sub_102A63C0(
        Outpop::Message::Message **a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned int a5,
        int a6,
        int a7)
{
  Outpop::Utility::Ref_Object *v7; // esi
  Outpop::Utility::Ref_Object *v8; // ecx

  v7 = (Outpop::Utility::Ref_Object *)Outpop::Message::Message::operator new(0x6Cu);
  if ( v7 )
  {
    Outpop::Message::Message::Message(v7, 1, 1, 2, a6, a7);
    *(_DWORD *)v7 = &Outpop::Message::Message::`vftable';
    v8 = v7;
  }
  else
  {
    v8 = 0;
  }
  *a1 = v8;
  if ( v8 )
    Outpop::Utility::Ref_Object::addref(v8);
  Outpop::Message::Message::set_protocol_catalog(*a1, a2);
  Outpop::Message::Message::set_protocol_type(*a1, a4);
  Outpop::Message::Message::set_multi_id(*a1, a3);
  Outpop::Message::Message::set_token(*a1, a5);
  return a1;
}
