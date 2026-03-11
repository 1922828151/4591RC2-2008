/*
 * func-name: sub_1004D1B0
 * func-address: 0x1004d1b0
 * callers: 0x1004a160, 0x1004a750, 0x1004ccb0
 * callees: none
 */

int __stdcall sub_1004D1B0(int a1)
{
  Outpop::Utility::Ref_Object *v1; // ecx

  v1 = *(Outpop::Utility::Ref_Object **)(a1 + 28);
  if ( v1 )
    Outpop::Utility::Ref_Object::release(v1);
  return std::string::~string(a1);
}
