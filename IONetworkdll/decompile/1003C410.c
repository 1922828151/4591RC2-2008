/*
 * func-name: sub_1003C410
 * func-address: 0x1003c410
 * callers: 0x1002c0f0, 0x1002c250, 0x1003be90, 0x1003c0f0, 0x1004e0a0, 0x1004e2b0
 * callees: none
 */

void __userpurge sub_1003C410(int a1@<edi>, Outpop::Utility::Ref_Object *a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  v2 = *(Outpop::Utility::Ref_Object **)(a1 + 88);
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  *(_DWORD *)(a1 + 88) = a2;
  if ( a2 )
  {
    Outpop::Utility::Ref_Object::addref(a2);
    Outpop::Utility::Ref_Object::release(a2);
  }
}
