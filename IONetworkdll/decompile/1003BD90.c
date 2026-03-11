/*
 * func-name: sub_1003BD90
 * func-address: 0x1003bd90
 * callers: 0x1000b8d0, 0x100148c0, 0x10015b70, 0x1003baf0
 * callees: none
 */

void __usercall sub_1003BD90(Outpop::Utility::Ref_Object **a1@<eax>, Outpop::Utility::Ref_Object **a2@<edi>)
{
  Outpop::Utility::Ref_Object **i; // esi

  for ( i = a1; i != a2; ++i )
  {
    if ( *i )
      Outpop::Utility::Ref_Object::release(*i);
  }
}
