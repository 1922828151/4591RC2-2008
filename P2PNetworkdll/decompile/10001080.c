/*
 * func-name: ?set_sap@P2P_Context@P2P@Outpop@@QAEXAAV?$Smart_Ptr@VSimple_Address_Protocol@P2P@Outpop@@@Utility@3@@Z
 * func-address: 0x10001080
 * callers: none
 * callees: none
 */

void __thiscall Outpop::P2P::P2P_Context::set_sap(_DWORD *this, Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx
  bool v5; // zf

  v3 = (Outpop::Utility::Ref_Object *)this[19];
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  v4 = *a2;
  v5 = *a2 == 0;
  this[19] = *a2;
  if ( !v5 )
    Outpop::Utility::Ref_Object::addref(v4);
}
