/*
 * func-name: sub_101BC980
 * func-address: 0x101bc980
 * callers: 0x10002946
 * callees: 0x1001a49c, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_101BC980(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x10u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::PedrailVehicleController::~PedrailVehicleController);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::PedrailVehicleController::~PedrailVehicleController((GameClient::PedrailVehicleController *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
