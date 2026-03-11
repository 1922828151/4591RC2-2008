/*
 * func-name: ??0FPedrailVehicle@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101af7a0
 * callers: 0x1000d4ef
 * callees: 0x10002720, 0x1000b613, 0x100182b9, 0x10019fc9
 */

GameClient::FPedrailVehicle *__thiscall GameClient::FPedrailVehicle::FPedrailVehicle(
        GameClient::FPedrailVehicle *this,
        const struct GameClient::FPedrailVehicle *a2)
{
  GameClient::FControlledEstab::FControlledEstab(this, a2);
  *(_DWORD *)this = &GameClient::FPedrailVehicle::`vftable';
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
  sub_10019FC9((int)a2 + 1156);
  sub_1000B613((int)a2 + 1172);
  sub_1000B613((int)a2 + 1188);
  sub_10002720((int)a2 + 1204);
  sub_1000B613((int)a2 + 1220);
  std::string::string((char *)this + 1236, (char *)a2 + 1236);
  std::string::string((char *)this + 1264, (char *)a2 + 1264);
  std::string::string((char *)this + 1292, (char *)a2 + 1292);
  std::string::string((char *)this + 1320, (char *)a2 + 1320);
  *((_DWORD *)this + 337) = *((_DWORD *)a2 + 337);
  return this;
}
