/*
 * func-name: sub_10003D30
 * func-address: 0x10003d30
 * callers: none
 * callees: 0x1000a880, 0x10018cf2, 0x10018d56, 0x10018e1c
 */

char *__thiscall sub_10003D30(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xA4u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Utility::Dispatch_Thread::~Dispatch_Thread);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::Utility::Dispatch_Thread::~Dispatch_Thread((Outpop::Utility::Dispatch_Thread *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
