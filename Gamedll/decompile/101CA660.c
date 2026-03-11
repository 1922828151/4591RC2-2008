/*
 * func-name: ??1Func_VehicleReceive@GameClient@@UAE@XZ_0
 * func-address: 0x101ca660
 * callers: 0x1000def4
 * callees: none
 */

void __thiscall GameClient::Func_VehicleReceive::~Func_VehicleReceive(GameClient::Func_VehicleReceive *this)
{
  *(_DWORD *)this = &GameClient::Func_VehicleReceive::`vftable'{for `GameClient::Interactable'};
  *((_DWORD *)this + 4) = &GameClient::Func_VehicleReceive::`vftable'{for `GameClient::DataObject'};
  GameClient::Func_Receive::~Func_Receive(this);
}
