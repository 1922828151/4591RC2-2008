/*
 * func-name: ?set_login_in_pakcet@Dgram_Channel@IONetwork@Outpop@@QAEXAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x100321f0
 * callers: 0x10026cd0
 * callees: none
 */

void __thiscall Outpop::IONetwork::Dgram_Channel::set_login_in_pakcet(_DWORD *this, Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx
  bool v5; // zf

  v3 = (Outpop::Utility::Ref_Object *)this[157];
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  v4 = *a2;
  v5 = *a2 == 0;
  this[157] = *a2;
  if ( !v5 )
    Outpop::Utility::Ref_Object::addref(v4);
}
