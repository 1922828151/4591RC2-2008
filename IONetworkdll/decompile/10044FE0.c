/*
 * func-name: ?get_squences_stream@P2P_Channel@IONetwork@Outpop@@UAEXAAV?$vector@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@Outpop@@@std@@@std@@00@Z
 * func-address: 0x10044fe0
 * callers: none
 * callees: 0x1003cc10
 */

char __thiscall Outpop::IONetwork::P2P_Channel::get_squences_stream(int this, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  Outpop::Utility::Thread_Mutex *v5; // edi
  int v6; // eax

  v5 = (Outpop::Utility::Thread_Mutex *)(this + 132);
  v6 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 132)) - 1;
  if ( v6 != -1 )
  {
    *(_BYTE *)(this + 200) = 1;
    Outpop::IONetwork::Sequence_Container::get_stream_from_container((_WORD *)(this + 428), a2, a3, a4);
    LOBYTE(v6) = Outpop::Utility::Thread_Mutex::release(v5);
  }
  return v6;
}
