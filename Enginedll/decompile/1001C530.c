/*
 * func-name: ?GetRefAct@Event@@QAE?AV?$Smart_Ptr@VRef_Object@Utility@Outpop@@@Utility@Outpop@@XZ
 * func-address: 0x1001c530
 * callers: none
 * callees: none
 */

Outpop::Utility::Ref_Object **__thiscall Event::GetRefAct(_DWORD *this, Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  v2 = (Outpop::Utility::Ref_Object *)this[8];
  *a2 = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  return a2;
}
