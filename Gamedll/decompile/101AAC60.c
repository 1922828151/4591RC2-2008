/*
 * func-name: sub_101AAC60
 * func-address: 0x101aac60
 * callers: 0x10016f31
 * callees: 0x1001a55a, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_101AAC60(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xA0u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::FPedrailVehicleWheel::~FPedrailVehicleWheel);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::FPedrailVehicleWheel::~FPedrailVehicleWheel((GameClient::FPedrailVehicleWheel *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
