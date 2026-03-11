/*
 * func-name: sub_10033F10
 * func-address: 0x10033f10
 * callers: 0x10011a77
 * callees: 0x10007f27, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10033F10(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x10u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::Interactable::~Interactable);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::Interactable::~Interactable((GameClient::Interactable *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
