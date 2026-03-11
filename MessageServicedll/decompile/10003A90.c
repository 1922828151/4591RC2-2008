/*
 * func-name: sub_10003A90
 * func-address: 0x10003a90
 * callers: none
 * callees: 0x1000e2e0, 0x100294f2, 0x10029556, 0x100295ba
 */

char *__thiscall sub_10003A90(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x5Cu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Message::Acceptor_Manager::~Acceptor_Manager);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::Message::Acceptor_Manager::~Acceptor_Manager((Outpop::Message::Acceptor_Manager *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
