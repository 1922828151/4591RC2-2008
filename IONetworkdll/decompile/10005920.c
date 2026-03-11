/*
 * func-name: sub_10005920
 * func-address: 0x10005920
 * callers: none
 * callees: 0x1004e870, 0x1004e8d4, 0x1004e938
 */

_DWORD *__thiscall sub_10005920(_DWORD *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      4u,
      *(this - 1),
      (void (__thiscall *)(void *))Outpop::IONetwork::P2P_Acceptor_Handler::~P2P_Acceptor_Handler);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 1);
    return this - 1;
  }
  else
  {
    *this = &Outpop::IONetwork::P2P_Acceptor_Handler::`vftable';
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
