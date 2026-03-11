/*
 * func-name: ?start_read@P2P_Channel@IONetwork@Outpop@@UAEXXZ
 * func-address: 0x10042de0
 * callers: none
 * callees: 0x1004b970
 */

char __thiscall Outpop::IONetwork::P2P_Channel::start_read(Outpop::IONetwork::P2P_Channel *this)
{
  Outpop::Utility::Thread_Mutex *v2; // edi
  int v3; // eax
  Outpop::IONetwork::P2PUdpBuilder *v4; // ecx

  v2 = (Outpop::IONetwork::P2P_Channel *)((char *)this + 132);
  v3 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::P2P_Channel *)((char *)this + 132)) - 1;
  if ( v3 != -1 )
  {
    if ( !*((_BYTE *)this + 632) )
    {
      v4 = (Outpop::IONetwork::P2PUdpBuilder *)*((_DWORD *)this + 45);
      *((_BYTE *)this + 632) = 1;
      Outpop::IONetwork::P2PUdpBuilder::PostAccept(v4, 65500);
    }
    LOBYTE(v3) = Outpop::Utility::Thread_Mutex::release(v2);
  }
  return v3;
}
