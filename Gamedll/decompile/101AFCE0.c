/*
 * func-name: ??0FAircraftVehicle@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101afce0
 * callers: 0x1001454c
 * callees: 0x100182b9
 */

GameClient::FAircraftVehicle *__thiscall GameClient::FAircraftVehicle::FAircraftVehicle(
        GameClient::FAircraftVehicle *this,
        const struct GameClient::FAircraftVehicle *a2)
{
  GameClient::FControlledEstab::FControlledEstab(this, a2);
  *(_DWORD *)this = &GameClient::FAircraftVehicle::`vftable';
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
  *((float *)this + 284) = *((float *)a2 + 284);
  *((float *)this + 285) = *((float *)a2 + 285);
  *((float *)this + 286) = *((float *)a2 + 286);
  *((float *)this + 287) = *((float *)a2 + 287);
  *((float *)this + 288) = *((float *)a2 + 288);
  *((float *)this + 289) = *((float *)a2 + 289);
  *((float *)this + 290) = *((float *)a2 + 290);
  *((float *)this + 291) = *((float *)a2 + 291);
  *((float *)this + 292) = *((float *)a2 + 292);
  *((float *)this + 293) = *((float *)a2 + 293);
  *((float *)this + 294) = *((float *)a2 + 294);
  *((float *)this + 295) = *((float *)a2 + 295);
  *((float *)this + 296) = *((float *)a2 + 296);
  *((_BYTE *)this + 1188) = *((_BYTE *)a2 + 1188);
  *((float *)this + 298) = *((float *)a2 + 298);
  *((float *)this + 299) = *((float *)a2 + 299);
  *((float *)this + 300) = *((float *)a2 + 300);
  *((float *)this + 301) = *((float *)a2 + 301);
  std::string::string((char *)this + 1208, (char *)a2 + 1208);
  std::string::string((char *)this + 1236, (char *)a2 + 1236);
  *((_DWORD *)this + 316) = *((_DWORD *)a2 + 316);
  return this;
}
