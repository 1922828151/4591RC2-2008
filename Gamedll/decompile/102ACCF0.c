/*
 * func-name: sub_102ACCF0
 * func-address: 0x102accf0
 * callers: 0x10013eb7
 * callees: none
 */

void __thiscall sub_102ACCF0(_DWORD *this, int a2, Outpop::Utility::Stream_Base **a3)
{
  Outpop::Utility::Stream_Base **v4; // edi

  v4 = a3;
  this[55] += Outpop::Utility::Stream_Base::get_readable(*a3);
  ++this[56];
  a3 = 0;
  Outpop::Message::Message_Facade::cache_asynch_request(a2, v4, &a3);
  if ( a3 )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)a3);
}
