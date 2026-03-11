/*
 * func-name: ??0Func_VehicleReceive@GameClient@@QAE@K@Z_0
 * func-address: 0x101ca630
 * callers: 0x10005155
 * callees: 0x10008d32
 */

GameClient::Func_VehicleReceive *__thiscall GameClient::Func_VehicleReceive::Func_VehicleReceive(
        GameClient::Func_VehicleReceive *this,
        unsigned int a2)
{
  GameClient::Func_Receive::Func_Receive(this, a2);
  *(_DWORD *)this = &GameClient::Func_VehicleReceive::`vftable'{for `GameClient::Interactable'};
  *((_DWORD *)this + 4) = &GameClient::Func_VehicleReceive::`vftable'{for `GameClient::DataObject'};
  *((_DWORD *)this + 10) = 3;
  return this;
}
