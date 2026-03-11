/*
 * func-name: sub_101BF130
 * func-address: 0x101bf130
 * callers: 0x1001156d
 * callees: 0x1000ef93, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_101BF130(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xF30u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CPowerTransportUI::~CPowerTransportUI);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CPowerTransportUI::~CPowerTransportUI((CPowerTransportUI *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
