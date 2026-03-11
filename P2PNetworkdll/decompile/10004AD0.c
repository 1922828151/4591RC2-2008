/*
 * func-name: sub_10004AD0
 * func-address: 0x10004ad0
 * callers: 0x10004730, 0x10008dc0, 0x1000b090
 * callees: none
 */

int __stdcall sub_10004AD0(int a1)
{
  Outpop::Utility::Ref_Object *v1; // ecx

  v1 = *(Outpop::Utility::Ref_Object **)(a1 + 28);
  if ( v1 )
    Outpop::Utility::Ref_Object::release(v1);
  return std::string::~string(a1);
}
