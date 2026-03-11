/*
 * func-name: sub_10023080
 * func-address: 0x10023080
 * callers: 0x10022a60
 * callees: none
 */

void __usercall sub_10023080(Outpop::Utility::Ref_Object **a1@<eax>, Outpop::Utility::Ref_Object **a2@<edi>)
{
  Outpop::Utility::Ref_Object **i; // esi

  for ( i = a1; i != a2; ++i )
  {
    if ( *i )
      Outpop::Utility::Ref_Object::release(*i);
  }
}
