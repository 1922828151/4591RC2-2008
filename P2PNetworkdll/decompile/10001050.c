/*
 * func-name: ?get_sap@P2P_Context@P2P@Outpop@@QAE?AV?$Smart_Ptr@VSimple_Address_Protocol@P2P@Outpop@@@Utility@3@XZ
 * func-address: 0x10001050
 * callers: 0x10003100, 0x100031a0, 0x100037e0, 0x10003870, 0x10003ae0, 0x10003f10, 0x100041d0, 0x10005230, 0x100054c0
 * callees: none
 */

Outpop::Utility::Ref_Object **__thiscall Outpop::P2P::P2P_Context::get_sap(
        _DWORD *this,
        Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  v2 = (Outpop::Utility::Ref_Object *)this[19];
  *a2 = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  return a2;
}
