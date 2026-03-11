/*
 * func-name: sub_10023320
 * func-address: 0x10023320
 * callers: 0x100225b0
 * callees: none
 */

void __usercall sub_10023320(_DWORD *a1@<eax>, _DWORD *a2@<ebx>, _DWORD *a3@<edi>)
{
  _DWORD *i; // esi
  Outpop::Utility::Ref_Object *v4; // ecx
  Outpop::Utility::Ref_Object *v5; // ecx

  for ( i = a1; i != a2; i += 2 )
  {
    *i = *a3;
    v4 = (Outpop::Utility::Ref_Object *)i[1];
    if ( v4 )
      Outpop::Utility::Ref_Object::release(v4);
    v5 = (Outpop::Utility::Ref_Object *)a3[1];
    i[1] = v5;
    if ( v5 )
      Outpop::Utility::Ref_Object::addref(v5);
  }
}
