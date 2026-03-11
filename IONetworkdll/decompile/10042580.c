/*
 * func-name: sub_10042580
 * func-address: 0x10042580
 * callers: none
 * callees: 0x10042cd0, 0x1004e870, 0x1004e8d4, 0x1004e938
 */

char *__thiscall sub_10042580(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x2C8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::IONetwork::P2P_Channel::~P2P_Channel);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::IONetwork::P2P_Channel::~P2P_Channel((Outpop::IONetwork::P2P_Channel *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
