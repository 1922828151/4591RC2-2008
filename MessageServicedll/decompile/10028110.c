/*
 * func-name: sub_10028110
 * func-address: 0x10028110
 * callers: 0x1001dfb0
 * callees: none
 */

void __usercall sub_10028110(_DWORD *a1@<eax>, _DWORD *a2@<edi>, _DWORD *a3)
{
  _DWORD *i; // esi
  Outpop::Utility::Ref_Object *v4; // ecx
  Outpop::Utility::Ref_Object *v5; // ecx
  Outpop::Utility::Ref_Object *v6; // ecx
  Outpop::Utility::Ref_Object *v7; // ecx

  for ( i = a1; i != a3; i += 3 )
  {
    *i = *a2;
    v4 = (Outpop::Utility::Ref_Object *)i[1];
    if ( v4 )
      Outpop::Utility::Ref_Object::release(v4);
    v5 = (Outpop::Utility::Ref_Object *)a2[1];
    i[1] = v5;
    if ( v5 )
      Outpop::Utility::Ref_Object::addref(v5);
    v6 = (Outpop::Utility::Ref_Object *)i[2];
    if ( v6 )
      Outpop::Utility::Ref_Object::release(v6);
    v7 = (Outpop::Utility::Ref_Object *)a2[2];
    i[2] = v7;
    if ( v7 )
      Outpop::Utility::Ref_Object::addref(v7);
  }
}
