/*
 * func-name: ?get_act_obj@Channel@IONetwork@Outpop@@QAE?AV?$Smart_Ptr@VRef_Object@Utility@Outpop@@@Utility@3@XZ
 * func-address: 0x10005310
 * callers: none
 * callees: none
 */

Outpop::Utility::Ref_Object **__thiscall Outpop::IONetwork::Channel::get_act_obj(
        _DWORD *this,
        Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  v2 = (Outpop::Utility::Ref_Object *)this[39];
  *a2 = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  return a2;
}
