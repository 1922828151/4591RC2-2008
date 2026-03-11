/*
 * func-name: sub_10005120
 * func-address: 0x10005120
 * callers: none
 * callees: 0x100294f2, 0x10029556, 0x100295ba
 */

char *__thiscall sub_10005120(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x1Cu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Message::Remote_Event_Stub::~Remote_Event_Stub);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &Outpop::Message::Remote_Event_Stub::`vftable';
    *(_DWORD *)this = &Outpop::Message::Message_Handler::`vftable';
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
