/*
 * func-name: sub_10219DB0
 * func-address: 0x10219db0
 * callers: 0x10015433
 * callees: 0x1000c635, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10219DB0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xF30u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CMiniWorldMapUI::~CMiniWorldMapUI);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CMiniWorldMapUI::~CMiniWorldMapUI((CMiniWorldMapUI *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
