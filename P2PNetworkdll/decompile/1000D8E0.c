/*
 * func-name: sub_1000D8E0
 * func-address: 0x1000d8e0
 * callers: 0x10004730, 0x1000b090
 * callees: none
 */

int __stdcall sub_1000D8E0(int a1, int a2, Outpop::Utility::Ref_Object **a3)
{
  Outpop::Utility::Ref_Object *v3; // ecx
  bool v4; // zf

  std::string::string(a1, a2);
  v3 = *a3;
  v4 = *a3 == 0;
  *(_DWORD *)(a1 + 28) = *a3;
  if ( !v4 )
    Outpop::Utility::Ref_Object::addref(v3);
  return a1;
}
