/*
 * func-name: sub_101A6A80
 * func-address: 0x101a6a80
 * callers: 0x1000c0b8
 * callees: 0x1001006e, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_101A6A80(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x94u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::FWheel::~FWheel);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::FWheel::~FWheel((GameClient::FWheel *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
