/*
 * func-name: sub_1022BFA0
 * func-address: 0x1022bfa0
 * callers: 0x10018241
 * callees: 0x10013ec6, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_1022BFA0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xACu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::FFunc_Power_Input::~FFunc_Power_Input);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &GameClient::FFunc_Power_Input::`vftable';
    GameClient::FFunc_Power::~FFunc_Power((GameClient::FFunc_Power *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
