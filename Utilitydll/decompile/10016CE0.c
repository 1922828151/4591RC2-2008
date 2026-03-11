/*
 * func-name: sub_10016CE0
 * func-address: 0x10016ce0
 * callers: none
 * callees: 0x10016e80, 0x10018cf2, 0x10018d56, 0x10018e1c
 */

char *__thiscall sub_10016CE0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xE0u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Utility::Record_Logger::~Record_Logger);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::Utility::Record_Logger::~Record_Logger((Outpop::Utility::Record_Logger *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
