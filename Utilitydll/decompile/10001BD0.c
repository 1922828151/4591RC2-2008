/*
 * func-name: sub_10001BD0
 * func-address: 0x10001bd0
 * callers: none
 * callees: 0x10018cf2, 0x10018d56
 */

char *__thiscall sub_10001BD0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Utility::Timer_Handler::~Timer_Handler);
    if ( (a2 & 1) != 0 )
      operator delete(this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &Outpop::Utility::Timer_Handler::`vftable';
    *(_DWORD *)this = &Outpop::Utility::Ref_Object::`vftable';
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
