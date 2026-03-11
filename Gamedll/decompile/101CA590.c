/*
 * func-name: sub_101CA590
 * func-address: 0x101ca590
 * callers: 0x10018831
 * callees: 0x100073a6, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_101CA590(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xF50u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CVehicleRoofUI::~CVehicleRoofUI);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CVehicleRoofUI::~CVehicleRoofUI((CVehicleRoofUI *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
