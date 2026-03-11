/*
 * func-name: sub_10003880
 * func-address: 0x10003880
 * callers: none
 * callees: 0x10004030, 0x10018cf2, 0x10018d56, 0x10018e1c
 */

char *__thiscall sub_10003880(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xB8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Utility::Timer_Queue::~Timer_Queue);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::Utility::Timer_Queue::~Timer_Queue((Outpop::Utility::Timer_Queue *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
