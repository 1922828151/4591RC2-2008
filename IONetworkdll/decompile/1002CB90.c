/*
 * func-name: sub_1002CB90
 * func-address: 0x1002cb90
 * callers: none
 * callees: 0x100367a0, 0x1004e870, 0x1004e8d4, 0x1004e938
 */

char *__thiscall sub_1002CB90(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x188u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::IONetwork::Dgram_Connector::~Dgram_Connector);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::IONetwork::Dgram_Connector::~Dgram_Connector((Outpop::IONetwork::Dgram_Connector *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
