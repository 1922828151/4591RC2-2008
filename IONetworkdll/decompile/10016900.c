/*
 * func-name: ?get_send_stream@Dgram_Connect_Bluider_Process@IONetwork@Outpop@@QAE?AV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@XZ
 * func-address: 0x10016900
 * callers: none
 * callees: none
 */

Outpop::Utility::Ref_Object **__thiscall Outpop::IONetwork::Dgram_Connect_Bluider_Process::get_send_stream(
        _DWORD *this,
        Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  v2 = (Outpop::Utility::Ref_Object *)this[13];
  *a2 = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  return a2;
}
