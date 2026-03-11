/*
 * func-name: sub_10009F40
 * func-address: 0x10009f40
 * callers: none
 * callees: 0x10009db0, 0x10018cf2, 0x10018d56, 0x10018e1c
 */

char *__thiscall sub_10009F40(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x20u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Utility::stack_overflow::~stack_overflow);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::Utility::stack_overflow::~stack_overflow((Outpop::Utility::stack_overflow *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
