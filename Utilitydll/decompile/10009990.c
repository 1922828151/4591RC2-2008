/*
 * func-name: sub_10009990
 * func-address: 0x10009990
 * callers: none
 * callees: 0x10014f00, 0x10018cf2, 0x10018d56, 0x10018e1c
 */

char *__thiscall sub_10009990(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x10u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Utility::outpop_exception::~outpop_exception);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::Utility::outpop_exception::~outpop_exception((Outpop::Utility::outpop_exception *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
