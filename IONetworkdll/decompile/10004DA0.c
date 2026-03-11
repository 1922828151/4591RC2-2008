/*
 * func-name: ?get_act@Connector@IONetwork@Outpop@@QAE?AV?$Smart_Ptr@VRef_Object@Utility@Outpop@@@Utility@3@XZ
 * func-address: 0x10004da0
 * callers: none
 * callees: none
 */

Outpop::Utility::Ref_Object **__thiscall Outpop::IONetwork::Connector::get_act(
        _DWORD *this,
        Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  v2 = (Outpop::Utility::Ref_Object *)this[23];
  *a2 = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  return a2;
}
