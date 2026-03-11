/*
 * func-name: sub_10004EF0
 * func-address: 0x10004ef0
 * callers: none
 * callees: 0x100282e0, 0x100294f2, 0x10029556, 0x100295ba
 */

char *__thiscall sub_10004EF0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x78u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Message::Remote_Event_Proxy::~Remote_Event_Proxy);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::Message::Remote_Event_Proxy::~Remote_Event_Proxy((Outpop::Message::Remote_Event_Proxy *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
