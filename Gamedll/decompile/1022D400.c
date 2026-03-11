/*
 * func-name: ??0FFunc_VehicleReceive@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1022d400
 * callers: 0x1000903e
 * callees: 0x10019a97
 */

GameClient::FFunc_VehicleReceive *__thiscall GameClient::FFunc_VehicleReceive::FFunc_VehicleReceive(
        GameClient::FFunc_VehicleReceive *this,
        const struct GameClient::FFunc_VehicleReceive *a2)
{
  GameClient::FFunc_VehicleReceive *result; // eax

  GameClient::Flyweight::Flyweight(this, a2);
  *(_DWORD *)this = &GameClient::FFunc_Receive::`vftable';
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28);
  *((_DWORD *)this + 29) = *((_DWORD *)a2 + 29);
  *((float *)this + 30) = *((float *)a2 + 30);
  result = this;
  *((float *)this + 31) = *((float *)a2 + 31);
  *(_DWORD *)this = &GameClient::FFunc_VehicleReceive::`vftable';
  return result;
}
