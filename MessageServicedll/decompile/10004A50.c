/*
 * func-name: sub_10004A50
 * func-address: 0x10004a50
 * callers: none
 * callees: 0x100251f0, 0x100294f2, 0x10029556, 0x100295ba
 */

char *__thiscall sub_10004A50(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xB8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Message::Request_Ack::~Request_Ack);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::Message::Request_Ack::~Request_Ack((Outpop::Message::Request_Ack *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
