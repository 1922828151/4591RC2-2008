/*
 * func-name: sub_10002870
 * func-address: 0x10002870
 * callers: none
 * callees: 0x10002f90, 0x10023306, 0x10023356, 0x100233ba
 */

char *__thiscall sub_10002870(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xA4u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::P2P::Peer::~Peer);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::P2P::Peer::~Peer((Outpop::P2P::Peer *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
