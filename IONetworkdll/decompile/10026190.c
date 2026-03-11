/*
 * func-name: sub_10026190
 * func-address: 0x10026190
 * callers: none
 * callees: 0x100262f0, 0x1004e870, 0x1004e8d4, 0x1004e938
 */

char *__thiscall sub_10026190(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x170u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::IONetwork::Dgram_Acceptor::~Dgram_Acceptor);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::IONetwork::Dgram_Acceptor::~Dgram_Acceptor((Outpop::IONetwork::Dgram_Acceptor *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
