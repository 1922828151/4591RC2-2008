/*
 * func-name: sub_10002240
 * func-address: 0x10002240
 * callers: none
 * callees: 0x1004e870, 0x1004e8d4, 0x1004e938
 */

_DWORD *__thiscall sub_10002240(_DWORD *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xCu,
      *(this - 1),
      (void (__thiscall *)(void *))Outpop::IONetwork::Addr::~Addr);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 1);
    return this - 1;
  }
  else
  {
    *this = &Outpop::IONetwork::Addr::`vftable';
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
