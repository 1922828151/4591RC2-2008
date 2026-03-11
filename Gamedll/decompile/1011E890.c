/*
 * func-name: ?SetCameraLoc@Seat@GameClient@@QAEXABVVector@@@Z_0
 * func-address: 0x1011e890
 * callers: 0x1000ed36
 * callees: none
 */

void __thiscall GameClient::Seat::SetCameraLoc(GameClient::Seat *this, const struct Vector *a2)
{
  *((_DWORD *)this + 48) = *(_DWORD *)a2;
  *((_DWORD *)this + 49) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 50) = *((_DWORD *)a2 + 2);
}
