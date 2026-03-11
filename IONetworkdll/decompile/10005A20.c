/*
 * func-name: ?create_stream@Channel_Handler@IONetwork@Outpop@@UAE?AV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@I@Z
 * func-address: 0x10005a20
 * callers: none
 * callees: none
 */

Outpop::Utility::Ref_Object **__stdcall Outpop::IONetwork::Channel_Handler::create_stream(
        Outpop::Utility::Ref_Object **a1,
        int a2)
{
  Outpop::Utility::Binary_Stream *v2; // esi
  Outpop::Utility::Ref_Object *v3; // ecx

  v2 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
  if ( v2 )
  {
    Outpop::Utility::Binary_Stream::Binary_Stream(v2, a2);
    *(_DWORD *)v2 = &Outpop::Utility::Binary_Stream::`vftable';
    v3 = v2;
  }
  else
  {
    v3 = 0;
  }
  *a1 = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  return a1;
}
