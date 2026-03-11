/*
 * func-name: sub_10016DE0
 * func-address: 0x10016de0
 * callers: none
 * callees: 0x10016e90, 0x1004e870, 0x1004e8d4, 0x1004e938
 */

char *__thiscall sub_10016DE0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xE8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::IONetwork::Stream_Acceptor::~Stream_Acceptor);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::IONetwork::Stream_Acceptor::~Stream_Acceptor((Outpop::IONetwork::Stream_Acceptor *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
