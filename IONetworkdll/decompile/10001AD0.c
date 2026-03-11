/*
 * func-name: sub_10001AD0
 * func-address: 0x10001ad0
 * callers: none
 * callees: 0x1000d190, 0x1004e870, 0x1004e8d4, 0x1004e938
 */

char *__thiscall sub_10001AD0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x30u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::IONetwork::Security::~Security);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::IONetwork::Security::~Security((Outpop::IONetwork::Security *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
