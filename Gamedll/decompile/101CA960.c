/*
 * func-name: ??0Func_VehicleReceive@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101ca960
 * callers: 0x10011fd1
 * callees: 0x100109a6
 */

GameClient::Func_VehicleReceive *__thiscall GameClient::Func_VehicleReceive::Func_VehicleReceive(
        GameClient::Func_VehicleReceive *this,
        const struct GameClient::Func_VehicleReceive *a2)
{
  GameClient::Func_Receive::Func_Receive(this, a2);
  *(_DWORD *)this = &GameClient::Func_VehicleReceive::`vftable'{for `GameClient::Interactable'};
  *((_DWORD *)this + 4) = &GameClient::Func_VehicleReceive::`vftable'{for `GameClient::DataObject'};
  return this;
}
