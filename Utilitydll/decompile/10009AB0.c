/*
 * func-name: sub_10009AB0
 * func-address: 0x10009ab0
 * callers: none
 * callees: 0x100099f0, 0x10018cf2, 0x10018d56, 0x10018e1c
 */

char *__thiscall sub_10009AB0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x18u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Utility::win32_error::~win32_error);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::Utility::win32_error::~win32_error((Outpop::Utility::win32_error *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
