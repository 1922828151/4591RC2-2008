/*
 * func-name: sub_100176F0
 * func-address: 0x100176f0
 * callers: none
 * callees: 0x100175f0, 0x10018cf2, 0x10018d56
 */

char *__thiscall sub_100176F0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x10u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Utility::Shared_Data::~Shared_Data);
    if ( (a2 & 1) != 0 )
      operator delete(this - 4);
    return this - 4;
  }
  else
  {
    Outpop::Utility::Shared_Data::~Shared_Data((Outpop::Utility::Shared_Data *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
