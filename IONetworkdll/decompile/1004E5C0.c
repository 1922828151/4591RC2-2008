/*
 * func-name: sub_1004E5C0
 * func-address: 0x1004e5c0
 * callers: 0x1004a810, 0x1004ccb0
 * callees: none
 */

int __userpurge sub_1004E5C0@<eax>(int a1@<edi>, int a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  std::string::string(a1);
  v2 = *(Outpop::Utility::Ref_Object **)(a1 + 28);
  *(_DWORD *)(a2 + 28) = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  return a2;
}
