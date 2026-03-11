/*
 * func-name: ?start_read@Dgram_Channel@IONetwork@Outpop@@UAEXXZ
 * func-address: 0x1002d230
 * callers: none
 * callees: 0x10027810, 0x10038d30
 */

char __thiscall Outpop::IONetwork::Dgram_Channel::start_read(volatile LONG *this)
{
  int v2; // eax
  int v3; // edi
  Outpop::IONetwork::Dgram_Acceptor *v4; // ecx
  Outpop::IONetwork::Dgram_Connector *v5; // ecx

  InterlockedExchange(this + 175, 1);
  v2 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 33)) - 1;
  v3 = v2;
  if ( v2 != -1 )
  {
    if ( !*((_BYTE *)this + 640) )
    {
      v3 = -1;
      *((_BYTE *)this + 640) = 1;
      Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)(this + 33));
      v4 = (Outpop::IONetwork::Dgram_Acceptor *)*((_DWORD *)this + 46);
      if ( v4 )
      {
        Outpop::IONetwork::Dgram_Acceptor::PostAccept(v4, 0xFFDCu);
      }
      else
      {
        v5 = (Outpop::IONetwork::Dgram_Connector *)*((_DWORD *)this + 47);
        if ( v5 )
          Outpop::IONetwork::Dgram_Connector::asynch_receive(v5, 0);
      }
    }
    LOBYTE(v2) = -1;
    if ( v3 != -1 )
      LOBYTE(v2) = Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)(this + 33));
  }
  return v2;
}
