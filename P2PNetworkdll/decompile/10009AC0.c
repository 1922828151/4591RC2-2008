/*
 * func-name: sub_10009AC0
 * func-address: 0x10009ac0
 * callers: 0x10008e30
 * callees: none
 */

int __userpurge sub_10009AC0@<eax>(int a1@<edi>, int a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  std::string::string(a2, a1);
  v2 = *(Outpop::Utility::Ref_Object **)(a1 + 28);
  *(_DWORD *)(a2 + 28) = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  return a2;
}
