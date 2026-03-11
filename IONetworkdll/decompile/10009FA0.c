/*
 * func-name: ?push_stream_tocontainer@Priority_Container@IONetwork@Outpop@@QAEXAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x10009fa0
 * callers: none
 * callees: 0x1000b090
 */

char __thiscall Outpop::IONetwork::Priority_Container::push_stream_tocontainer(
        Outpop::Utility::Thread_Mutex *this,
        _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  v3 = Outpop::Utility::Thread_Mutex::acquire(this) - 1;
  if ( v3 != -1 )
  {
    v4 = Outpop::Utility::Binary_Stream::priority(*a2) - 1;
    if ( !v4 || (v5 = v4 - 2) == 0 || v5 == 2 )
      sub_1000B090(a2);
    LOBYTE(v3) = Outpop::Utility::Thread_Mutex::release(this);
  }
  return v3;
}
