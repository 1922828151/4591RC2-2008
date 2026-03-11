/*
 * func-name: ??0FWheelVehicle@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101aa730
 * callers: 0x1000ed8b
 * callees: 0x10002720, 0x1000aecf, 0x1000b613, 0x100182b9
 */

GameClient::FWheelVehicle *__thiscall GameClient::FWheelVehicle::FWheelVehicle(
        GameClient::FWheelVehicle *this,
        const struct GameClient::FWheelVehicle *a2)
{
  GameClient::FControlledEstab::FControlledEstab(this, a2);
  *(_DWORD *)this = &GameClient::FWheelVehicle::`vftable';
  *((_DWORD *)this + 268) = *((_DWORD *)a2 + 268);
  *((_DWORD *)this + 269) = *((_DWORD *)a2 + 269);
  *((_DWORD *)this + 270) = *((_DWORD *)a2 + 270);
  *((_DWORD *)this + 271) = *((_DWORD *)a2 + 271);
  *((_DWORD *)this + 272) = *((_DWORD *)a2 + 272);
  *((_DWORD *)this + 273) = *((_DWORD *)a2 + 273);
  *((float *)this + 274) = *((float *)a2 + 274);
  *((float *)this + 275) = *((float *)a2 + 275);
  *((float *)this + 276) = *((float *)a2 + 276);
  *((float *)this + 277) = *((float *)a2 + 277);
  *((float *)this + 278) = *((float *)a2 + 278);
  *((_DWORD *)this + 279) = *((_DWORD *)a2 + 279);
  *((_DWORD *)this + 280) = *((_DWORD *)a2 + 280);
  *((_DWORD *)this + 281) = *((_DWORD *)a2 + 281);
  *((float *)this + 282) = *((float *)a2 + 282);
  *((float *)this + 283) = *((float *)a2 + 283);
  *((_DWORD *)this + 284) = *((_DWORD *)a2 + 284);
  sub_1000B613((int)a2 + 1140);
  sub_1000AECF((int)a2 + 1156);
  sub_1000B613((int)a2 + 1172);
  sub_1000B613((int)a2 + 1188);
  sub_10002720((int)a2 + 1204);
  sub_1000B613((int)a2 + 1220);
  sub_1000B613((int)a2 + 1236);
  return this;
}
