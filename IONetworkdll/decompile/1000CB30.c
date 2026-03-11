/*
 * func-name: sub_1000CB30
 * func-address: 0x1000cb30
 * callers: none
 * callees: 0x1000c840, 0x1004e870, 0x1004e8d4, 0x1004e938
 */

char *__thiscall sub_1000CB30(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x28u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::IONetwork::network_io_error::~network_io_error);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    sub_1000C840((std::exception *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
