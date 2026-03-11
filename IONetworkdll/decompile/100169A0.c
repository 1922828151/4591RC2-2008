/*
 * func-name: ?get_connect_stream@Dgram_Connect_Bluider_Process@IONetwork@Outpop@@QAE?AV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@XZ
 * func-address: 0x100169a0
 * callers: 0x100390a0
 * callees: none
 */

Outpop::Utility::Ref_Object **__thiscall Outpop::IONetwork::Dgram_Connect_Bluider_Process::get_connect_stream(
        _DWORD *this,
        Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  v2 = (Outpop::Utility::Ref_Object *)this[17];
  *a2 = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  return a2;
}
