/*
 * func-name: ?erase_security_wait_channel_from_map@Dgram_Connector@IONetwork@Outpop@@QAEXAAVINET_Addr@23@@Z
 * func-address: 0x10036b30
 * callers: 0x10040f80, 0x10042050
 * callees: 0x1003a2e0
 */

char __thiscall Outpop::IONetwork::Dgram_Connector::erase_security_wait_channel_from_map(
        Outpop::IONetwork::Dgram_Connector *this,
        struct Outpop::IONetwork::INET_Addr *a2)
{
  Outpop::Utility::Thread_Mutex *v3; // edi
  int v4; // eax

  v3 = (Outpop::IONetwork::Dgram_Connector *)((char *)this + 232);
  v4 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Dgram_Connector *)((char *)this + 232)) - 1;
  if ( v4 != -1 )
  {
    ntohl(*((_DWORD *)a2 + 4));
    ntohs(*((_WORD *)a2 + 7));
    sub_1003A2E0((char *)this + 256);
    LOBYTE(v4) = Outpop::Utility::Thread_Mutex::release(v3);
  }
  return v4;
}
