/*
 * func-name: sub_100014A0
 * func-address: 0x100014a0
 * callers: none
 * callees: 0x10005560, 0x100294f2, 0x10029556, 0x100295ba
 */

char *__thiscall sub_100014A0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x84u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Message::Context::~Context);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::Message::Context::~Context((Outpop::Message::Context *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
