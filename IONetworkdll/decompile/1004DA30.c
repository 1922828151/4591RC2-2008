/*
 * func-name: sub_1004DA30
 * func-address: 0x1004da30
 * callers: 0x1004ccb0
 * callees: none
 */

int __stdcall sub_1004DA30(int a1, int a2, Outpop::Utility::Ref_Object **a3)
{
  Outpop::Utility::Ref_Object *v3; // ecx
  bool v4; // zf

  std::string::string(a2);
  v3 = *a3;
  v4 = *a3 == 0;
  *(_DWORD *)(a1 + 28) = *a3;
  if ( !v4 )
    Outpop::Utility::Ref_Object::addref(v3);
  return a1;
}
