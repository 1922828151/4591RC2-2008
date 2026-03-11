/*
 * func-name: sub_10009260
 * func-address: 0x10009260
 * callers: 0x10009400
 * callees: none
 */

void __usercall sub_10009260(Outpop::Utility::Ref_Object **a1@<eax>, Outpop::Utility::Ref_Object **a2@<edi>)
{
  Outpop::Utility::Ref_Object **i; // esi

  for ( i = a1; i != a2; ++i )
  {
    if ( *i )
      Outpop::Utility::Ref_Object::release(*i);
  }
}
