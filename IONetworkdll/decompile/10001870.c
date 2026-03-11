/*
 * func-name: sub_10001870
 * func-address: 0x10001870
 * callers: none
 * callees: 0x1004e870, 0x1004e8d4, 0x1004e938
 */

_DWORD *__thiscall sub_10001870(_DWORD *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      4u,
      *(this - 1),
      (void (__thiscall *)(void *))Outpop::IONetwork::Network_Config_Paser::~Network_Config_Paser);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 1);
    return this - 1;
  }
  else
  {
    *this = &Outpop::IONetwork::Network_Config_Paser::`vftable';
    *this = Outpop::Utility::Config_Paser::`vftable';
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
