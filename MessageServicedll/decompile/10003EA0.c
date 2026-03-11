/*
 * func-name: sub_10003EA0
 * func-address: 0x10003ea0
 * callers: none
 * callees: 0x10010830, 0x100294f2, 0x10029556, 0x100295ba
 */

char *__thiscall sub_10003EA0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xA8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Message::Channel_Manager::~Channel_Manager);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::Message::Channel_Manager::~Channel_Manager((Outpop::Message::Channel_Manager *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
