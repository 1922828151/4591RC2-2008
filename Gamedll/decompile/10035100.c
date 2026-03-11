/*
 * func-name: sub_10035100
 * func-address: 0x10035100
 * callers: 0x1001979f
 * callees: 0x10012b07, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10035100(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x98u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::SystemPart::~SystemPart);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::SystemPart::~SystemPart((GameClient::SystemPart *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
