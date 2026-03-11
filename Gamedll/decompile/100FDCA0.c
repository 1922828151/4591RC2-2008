/*
 * func-name: sub_100FDCA0
 * func-address: 0x100fdca0
 * callers: 0x10010d34
 * callees: 0x10009999, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_100FDCA0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x4F8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::AdapterActor::~AdapterActor);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::AdapterActor::~AdapterActor((GameClient::AdapterActor *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
