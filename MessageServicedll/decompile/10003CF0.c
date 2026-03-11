/*
 * func-name: sub_10003CF0
 * func-address: 0x10003cf0
 * callers: none
 * callees: 0x10013290, 0x100294f2, 0x10029556, 0x100295ba
 */

char *__thiscall sub_10003CF0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x84u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))Outpop::Message::Connector_Manager::~Connector_Manager);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    Outpop::Message::Connector_Manager::~Connector_Manager((Outpop::Message::Connector_Manager *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
