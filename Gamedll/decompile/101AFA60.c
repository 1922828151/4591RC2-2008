/*
 * func-name: ??0FSuspendVehicle@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101afa60
 * callers: 0x1000ec32
 * callees: 0x10002720, 0x1000b613, 0x100167c5, 0x100182b9
 */

GameClient::FSuspendVehicle *__thiscall GameClient::FSuspendVehicle::FSuspendVehicle(
        GameClient::FSuspendVehicle *this,
        const struct GameClient::FSuspendVehicle *a2)
{
  GameClient::FControlledEstab::FControlledEstab(this, a2);
  *(_DWORD *)this = &GameClient::FSuspendVehicle::`vftable';
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
  sub_100167C5((int)a2 + 1156);
  sub_1000B613((int)a2 + 1172);
  sub_1000B613((int)a2 + 1188);
  sub_10002720((int)a2 + 1204);
  *((float *)this + 305) = *((float *)a2 + 305);
  *((float *)this + 306) = *((float *)a2 + 306);
  *((float *)this + 307) = *((float *)a2 + 307);
  *((float *)this + 308) = *((float *)a2 + 308);
  sub_1000B613((int)a2 + 1236);
  sub_1000B613((int)a2 + 1252);
  *((_DWORD *)this + 317) = *((_DWORD *)a2 + 317);
  return this;
}
