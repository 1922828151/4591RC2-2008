/*
 * func-name: sub_1000BD30
 * func-address: 0x1000bd30
 * callers: 0x1000b090, 0x1000c450
 * callees: none
 */

void __cdecl sub_1000BD30(Outpop::Utility::Ref_Object **a1)
{
  Outpop::Utility::Ref_Object **v1; // ecx
  Outpop::Utility::Ref_Object *v2; // ecx

  if ( a1 )
  {
    v2 = *v1;
    *a1 = v2;
    if ( v2 )
      Outpop::Utility::Ref_Object::addref(v2);
  }
}
