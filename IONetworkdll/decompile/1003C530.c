/*
 * func-name: sub_1003C530
 * func-address: 0x1003c530
 * callers: 0x1003c280
 * callees: none
 */

Outpop::Utility::Ref_Object **__usercall sub_1003C530@<eax>(
        Outpop::Utility::Ref_Object **result@<eax>,
        Outpop::Utility::Ref_Object **a2@<ecx>,
        Outpop::Utility::Ref_Object **a3@<ebx>)
{
  Outpop::Utility::Ref_Object **v3; // edi
  Outpop::Utility::Ref_Object **v4; // esi
  Outpop::Utility::Ref_Object *v5; // ecx
  Outpop::Utility::Ref_Object *v6; // ecx
  bool v7; // zf

  v3 = a2;
  v4 = result;
  if ( a3 != a2 )
  {
    do
    {
      v5 = *--v4;
      --v3;
      if ( v5 )
        Outpop::Utility::Ref_Object::release(v5);
      v6 = *v3;
      v7 = *v3 == 0;
      *v4 = *v3;
      if ( !v7 )
        Outpop::Utility::Ref_Object::addref(v6);
    }
    while ( v3 != a3 );
    return v4;
  }
  return result;
}
