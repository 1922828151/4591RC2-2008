/*
 * func-name: ?synch_Accept@TSocket@IONetwork@Outpop@@QAEIAAV123@PAUsockaddr_in@@PAH@Z
 * func-address: 0x1000d710
 * callers: none
 * callees: none
 */

SOCKET __thiscall Outpop::IONetwork::TSocket::synch_Accept(
        SOCKET *this,
        struct Outpop::IONetwork::TSocket *a2,
        struct sockaddr *a3,
        int *a4)
{
  return accept(*this, a3, a4);
}
