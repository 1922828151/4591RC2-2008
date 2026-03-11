/*
 * func-name: sub_10016880
 * func-address: 0x10016880
 * callers: none
 * callees: 0x1003fe90, 0x1004e870, 0x1004e8d4, 0x1004e938
 */

char *__thiscall sub_10016880(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x44u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::IONetwork::Dgram_Accept_Bluider_Process::~Dgram_Accept_Bluider_Process);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::IONetwork::Dgram_Accept_Bluider_Process::~Dgram_Accept_Bluider_Process((Outpop::IONetwork::Dgram_Accept_Bluider_Process *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
