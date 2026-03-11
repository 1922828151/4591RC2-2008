/*
 * func-name: sub_1002C4F0
 * func-address: 0x1002c4f0
 * callers: 0x1000b8d0, 0x1003baf0
 * callees: none
 */

void __usercall sub_1002C4F0(
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
