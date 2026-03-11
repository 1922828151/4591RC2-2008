/*
 * func-name: sub_10003E20
 * func-address: 0x10003e20
 * callers: none
 * callees: 0x1000ae20, 0x10018cf2, 0x10018d56, 0x10018e1c
 */

char *__thiscall sub_10003E20(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xC4u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Utility::Dispatch_Thread_2::~Dispatch_Thread_2);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::Utility::Dispatch_Thread_2::~Dispatch_Thread_2((Outpop::Utility::Dispatch_Thread_2 *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
