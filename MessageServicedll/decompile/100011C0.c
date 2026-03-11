/*
 * func-name: sub_100011C0
 * func-address: 0x100011c0
 * callers: none
 * callees: 0x100294f2, 0x10029556, 0x100295ba
 */

char *__thiscall sub_100011C0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xCu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Message::Message_Config_Paser::~Message_Config_Paser);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &Outpop::Message::Message_Config_Paser::`vftable';
    *(_DWORD *)this = Outpop::Utility::Config_Paser::`vftable';
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
