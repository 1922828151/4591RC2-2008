/*
 * func-name: ?set_act_obj@Channel@IONetwork@Outpop@@QAEXAAV?$Smart_Ptr@VRef_Object@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x100052e0
 * callers: none
 * callees: none
 */

void __thiscall Outpop::IONetwork::Channel::set_act_obj(_DWORD *this, Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx
  bool v5; // zf

  v3 = (Outpop::Utility::Ref_Object *)this[39];
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  v4 = *a2;
  v5 = *a2 == 0;
  this[39] = *a2;
  if ( !v5 )
    Outpop::Utility::Ref_Object::addref(v4);
}
