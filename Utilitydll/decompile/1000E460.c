/*
 * func-name: sub_1000E460
 * func-address: 0x1000e460
 * callers: none
 * callees: 0x1000a640, 0x10018cf2, 0x10018d56, 0x10018e1c
 */

char *__thiscall sub_1000E460(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x14u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Utility::winsock_error::~winsock_error);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::Utility::winsock_error::~winsock_error((Outpop::Utility::winsock_error *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
