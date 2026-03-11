/*
 * func-name: sub_10001230
 * func-address: 0x10001230
 * callers: none
 * callees: 0x1004e870, 0x1004e8d4, 0x1004e938
 */

char *__thiscall sub_10001230(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x10u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::IONetwork::security_error::~security_error);
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
