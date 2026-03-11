/*
 * func-name: sub_10005650
 * func-address: 0x10005650
 * callers: none
 * callees: 0x10005080, 0x1004e870, 0x1004e8d4, 0x1004e938
 */

char *__thiscall sub_10005650(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xB4u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::IONetwork::Channel::~Channel);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::IONetwork::Channel::~Channel((Outpop::IONetwork::Channel *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
