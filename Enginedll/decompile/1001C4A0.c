/*
 * func-name: ?SetAct@Event@@QAEXAAV?$Smart_Ptr@VRef_Object@Utility@Outpop@@@Utility@Outpop@@@Z
 * func-address: 0x1001c4a0
 * callers: none
 * callees: none
 */

void __thiscall Event::SetAct(_DWORD *this, Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx
  bool v5; // zf

  v3 = (Outpop::Utility::Ref_Object *)this[8];
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  v4 = *a2;
  v5 = *a2 == 0;
  this[8] = *a2;
  if ( !v5 )
    Outpop::Utility::Ref_Object::addref(v4);
}
