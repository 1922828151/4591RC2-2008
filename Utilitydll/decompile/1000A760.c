/*
 * func-name: sub_1000A760
 * func-address: 0x1000a760
 * callers: none
 * callees: 0x10015f70, 0x10018cf2, 0x10018d56, 0x10018e1c
 */

char *__thiscall sub_1000A760(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x10u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Utility::logic_error::~logic_error);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::Utility::logic_error::~logic_error((Outpop::Utility::logic_error *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
