/*
 * func-name: sub_10004EF0
 * func-address: 0x10004ef0
 * callers: none
 * callees: 0x10004d20, 0x1004e870, 0x1004e8d4, 0x1004e938
 */

char *__thiscall sub_10004EF0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x74u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::IONetwork::Connector::~Connector);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::IONetwork::Connector::~Connector((Outpop::IONetwork::Connector *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
