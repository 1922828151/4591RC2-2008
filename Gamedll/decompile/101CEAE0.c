/*
 * func-name: sub_101CEAE0
 * func-address: 0x101ceae0
 * callers: 0x1000a650
 * callees: 0x1000708b, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_101CEAE0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xF40u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))COccupyEstabUI::~COccupyEstabUI);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    COccupyEstabUI::~COccupyEstabUI((COccupyEstabUI *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
