/*
 * func-name: sub_1001DA30
 * func-address: 0x1001da30
 * callers: 0x1001dec0
 * callees: none
 */

void __userpurge sub_1001DA30(int a1@<esi>, Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Ref_Object *v3; // ecx
  bool v4; // zf

  v2 = *(Outpop::Utility::Ref_Object **)(a1 + 8);
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  v3 = *a2;
  v4 = *a2 == 0;
  *(_DWORD *)(a1 + 8) = *a2;
  if ( !v4 )
    Outpop::Utility::Ref_Object::addref(v3);
}
