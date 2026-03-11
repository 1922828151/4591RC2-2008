/*
 * func-name: sub_10009A40
 * func-address: 0x10009a40
 * callers: 0x10009400
 * callees: none
 */

void __usercall sub_10009A40(
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
