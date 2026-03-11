/*
 * func-name: sub_1000C5C0
 * func-address: 0x1000c5c0
 * callers: 0x1000b2b0, 0x1000bcf0, 0x10016160, 0x100246d0
 * callees: none
 */

Outpop::Utility::Ref_Object **__usercall sub_1000C5C0@<eax>(
        Outpop::Utility::Ref_Object **result@<eax>,
        Outpop::Utility::Ref_Object **a2@<ecx>,
        Outpop::Utility::Ref_Object **a3@<ebx>)
{
  Outpop::Utility::Ref_Object **v3; // edi
  Outpop::Utility::Ref_Object **v4; // esi
  Outpop::Utility::Ref_Object *v5; // ecx
  bool v6; // zf

  v3 = a2;
  v4 = result;
  if ( a2 != a3 )
  {
    do
    {
      if ( *v4 )
        Outpop::Utility::Ref_Object::release(*v4);
      v5 = *v3;
      v6 = *v3 == 0;
      *v4 = *v3;
      if ( !v6 )
        Outpop::Utility::Ref_Object::addref(v5);
      ++v3;
      ++v4;
    }
    while ( v3 != a3 );
    return v4;
  }
  return result;
}
