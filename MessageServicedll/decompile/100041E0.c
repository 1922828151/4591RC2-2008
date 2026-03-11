/*
 * func-name: sub_100041E0
 * func-address: 0x100041e0
 * callers: none
 * callees: 0x100294f2, 0x10029556, 0x100295ba
 */

char *__thiscall sub_100041E0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      4u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Message::Message_Handler::~Message_Handler);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &Outpop::Message::Message_Handler::`vftable';
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
