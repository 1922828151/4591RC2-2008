/*
 * func-name: sub_10003BD0
 * func-address: 0x10003bd0
 * callers: none
 * callees: 0x10018cf2, 0x10018d56, 0x10018e1c
 */

char *__thiscall sub_10003BD0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Utility::Quit_Process::~Quit_Process);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &Outpop::Utility::Quit_Process::`vftable';
    *(_DWORD *)this = &Outpop::Utility::Thread_Message::`vftable';
    *(_DWORD *)this = &Outpop::Utility::Ref_Object::`vftable';
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
