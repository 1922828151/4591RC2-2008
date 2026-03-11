/*
 * func-name: sub_1001DBE0
 * func-address: 0x1001dbe0
 * callers: none
 * callees: 0x1001dd60, 0x1004e870, 0x1004e8d4, 0x1004e938
 */

char *__thiscall sub_1001DBE0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xACu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::IONetwork::Stream_Connector::~Stream_Connector);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::IONetwork::Stream_Connector::~Stream_Connector((Outpop::IONetwork::Stream_Connector *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
