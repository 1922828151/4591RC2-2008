/*
 * func-name: sub_10004C40
 * func-address: 0x10004c40
 * callers: none
 * callees: 0x10004a50, 0x1004e870, 0x1004e8d4, 0x1004e938
 */

char *__thiscall sub_10004C40(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x9Cu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::IONetwork::Acceptor::~Acceptor);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::IONetwork::Acceptor::~Acceptor((Outpop::IONetwork::Acceptor *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
