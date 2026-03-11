/*
 * func-name: ?set_act@Message@1Outpop@@QAEXAAV?$Smart_Ptr@VRef_Object@Utility@Outpop@@@Utility@2@@Z
 * func-address: 0x10004540
 * callers: 0x100119c0
 * callees: none
 */

void __thiscall Outpop::Message::Message::set_act(_DWORD *this, Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx
  bool v5; // zf

  v3 = (Outpop::Utility::Ref_Object *)this[23];
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  v4 = *a2;
  v5 = *a2 == 0;
  this[23] = *a2;
  if ( !v5 )
    Outpop::Utility::Ref_Object::addref(v4);
}
