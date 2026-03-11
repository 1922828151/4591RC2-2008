/*
 * func-name: ?GetAckMessage@Event@@QAE?AV?$Smart_Ptr@VMessage@1Outpop@@@Utility@Outpop@@XZ
 * func-address: 0x1001c500
 * callers: none
 * callees: none
 */

Outpop::Utility::Ref_Object **__thiscall Event::GetAckMessage(_DWORD *this, Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  v2 = (Outpop::Utility::Ref_Object *)this[6];
  *a2 = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  return a2;
}
