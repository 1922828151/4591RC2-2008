/*
 * func-name: sub_100429D0
 * func-address: 0x100429d0
 * callers: none
 * callees: 0x1004aa10, 0x1004e870, 0x1004e8d4, 0x1004e938
 */

char *__thiscall sub_100429D0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xFCu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::IONetwork::P2PUdpBuilder::~P2PUdpBuilder);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::IONetwork::P2PUdpBuilder::~P2PUdpBuilder((Outpop::IONetwork::P2PUdpBuilder *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
