/*
 * func-name: sub_10001350
 * func-address: 0x10001350
 * callers: none
 * callees: 0x10001de0, 0x10023306, 0x10023356, 0x100233ba
 */

char *__thiscall sub_10001350(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x54u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::P2P::P2P_Context::~P2P_Context);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::P2P::P2P_Context::~P2P_Context((Outpop::P2P::P2P_Context *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
