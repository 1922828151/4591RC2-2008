/*
 * func-name: sub_101C3360
 * func-address: 0x101c3360
 * callers: 0x10016202
 * callees: 0x10016595, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_101C3360(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xFD8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CRobotRoofUI::~CRobotRoofUI);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CRobotRoofUI::~CRobotRoofUI((CRobotRoofUI *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
