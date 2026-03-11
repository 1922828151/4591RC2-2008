/*
 * func-name: sub_10019210
 * func-address: 0x10019210
 * callers: 0x1001a850
 * callees: none
 */

int __thiscall sub_10019210(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  int result; // eax

  *this = &Outpop::IONetwork::Asynch_IO_Accpet_Result<Outpop::Utility::Smart_Ptr<Outpop::IONetwork::Stream_Acceptor>>::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)this[13];
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  result = -1;
  *this = &Outpop::IONetwork::Asynch_IO_Result::`vftable';
  *this = &Outpop::IONetwork::Asynch_Result::`vftable';
  return result;
}
