/*
 * func-name: ?set_connect_stream@Dgram_Accept_Bluider_Process@IONetwork@Outpop@@QAEXAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x100166d0
 * callers: none
 * callees: none
 */

void __thiscall Outpop::IONetwork::Dgram_Accept_Bluider_Process::set_connect_stream(
        _DWORD *this,
        Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx
  bool v5; // zf

  v3 = (Outpop::Utility::Ref_Object *)this[16];
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  v4 = *a2;
  v5 = *a2 == 0;
  this[16] = *a2;
  if ( !v5 )
    Outpop::Utility::Ref_Object::addref(v4);
}
