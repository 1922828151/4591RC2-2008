/*
 * func-name: sub_10004100
 * func-address: 0x10004100
 * callers: none
 * callees: 0x1001ef90, 0x100294f2, 0x10029556, 0x100295ba
 */

char *__thiscall sub_10004100(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x44u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Message::Handler_Manager::~Handler_Manager);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::Message::Handler_Manager::~Handler_Manager((Outpop::Message::Handler_Manager *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
