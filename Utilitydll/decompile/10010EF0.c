/*
 * func-name: sub_10010EF0
 * func-address: 0x10010ef0
 * callers: none
 * callees: 0x10018cf2, 0x10018d56, 0x10018e1c
 */

char *__thiscall sub_10010EF0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      4u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Utility::Config_Paser::~Config_Paser);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &Outpop::Utility::Config_Paser::`vftable';
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
