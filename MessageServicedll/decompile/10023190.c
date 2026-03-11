/*
 * func-name: sub_10023190
 * func-address: 0x10023190
 * callers: 0x10022a60
 * callees: none
 */

void __usercall sub_10023190(
        Outpop::Utility::Ref_Object **a1@<eax>,
        Outpop::Utility::Ref_Object **a2@<ebx>,
        Outpop::Utility::Ref_Object **a3@<edi>)
{
  Outpop::Utility::Ref_Object **i; // esi
  Outpop::Utility::Ref_Object *v4; // ecx
  bool v5; // zf

  for ( i = a1; i != a3; ++i )
  {
    if ( *i )
      Outpop::Utility::Ref_Object::release(*i);
    v4 = *a2;
    v5 = *a2 == 0;
    *i = *a2;
    if ( !v5 )
      Outpop::Utility::Ref_Object::addref(v4);
  }
}
