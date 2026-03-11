/*
 * func-name: sub_1001B880
 * func-address: 0x1001b880
 * callers: 0x100155b0, 0x1001acf0, 0x1001b060, 0x10020490, 0x10020800
 * callees: none
 */

void __userpurge sub_1001B880(int a1@<edi>, Outpop::Utility::Ref_Object *a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  v2 = *(Outpop::Utility::Ref_Object **)(a1 + 52);
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  *(_DWORD *)(a1 + 52) = a2;
  if ( a2 )
  {
    Outpop::Utility::Ref_Object::addref(a2);
    Outpop::Utility::Ref_Object::release(a2);
  }
}
