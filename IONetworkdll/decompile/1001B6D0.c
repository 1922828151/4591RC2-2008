/*
 * func-name: sub_1001B6D0
 * func-address: 0x1001b6d0
 * callers: 0x10015700, 0x1001ae40, 0x1001b1b0, 0x100205e0, 0x10020950
 * callees: none
 */

void __userpurge sub_1001B6D0(int a1@<edi>, Outpop::Utility::Ref_Object *a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  v2 = *(Outpop::Utility::Ref_Object **)(a1 + 56);
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  *(_DWORD *)(a1 + 56) = a2;
  if ( a2 )
  {
    Outpop::Utility::Ref_Object::addref(a2);
    Outpop::Utility::Ref_Object::release(a2);
  }
}
