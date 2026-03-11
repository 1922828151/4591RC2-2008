/*
 * func-name: sub_10009AD0
 * func-address: 0x10009ad0
 * callers: 0x1000fc90
 * callees: none
 */

void __usercall sub_10009AD0(
        Outpop::IONetwork::Acceptor_Config *a1@<eax>,
        Outpop::IONetwork::Acceptor_Config *a2@<edi>)
{
  Outpop::IONetwork::Acceptor_Config *i; // esi

  for ( i = a1; i != a2; i = (Outpop::IONetwork::Acceptor_Config *)((char *)i + 116) )
    Outpop::IONetwork::Acceptor_Config::~Acceptor_Config(i);
}
