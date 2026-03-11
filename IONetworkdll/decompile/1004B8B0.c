/*
 * func-name: ?set_listen_socket@P2PUdpBuilder@IONetwork@Outpop@@QAEXPAVTSocket@23@AAUP2P_Config@23@@Z
 * func-address: 0x1004b8b0
 * callers: none
 * callees: 0x10002880, 0x10004960
 */

int __thiscall Outpop::IONetwork::P2PUdpBuilder::set_listen_socket(
        Outpop::IONetwork::P2PUdpBuilder *this,
        struct Outpop::IONetwork::TSocket *a2,
        struct Outpop::IONetwork::P2P_Config *a3)
{
  char *v4; // edi
  int result; // eax

  Outpop::IONetwork::P2P_Config::operator=((int)this + 12, (int)a3);
  if ( *((_DWORD *)a3 + 17) < 0x10u )
    v4 = (char *)a3 + 48;
  else
    v4 = (char *)*((_DWORD *)a3 + 12);
  result = Outpop::IONetwork::INET_Addr::set(
             (Outpop::IONetwork::P2PUdpBuilder *)((char *)this + 116),
             *((_WORD *)this + 42),
             v4,
             1,
             0);
  *((_DWORD *)this + 48) = a2;
  return result;
}
