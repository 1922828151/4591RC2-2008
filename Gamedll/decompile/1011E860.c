/*
 * func-name: ?SetCameraRot@Seat@GameClient@@QAEXABVVector@@@Z_0
 * func-address: 0x1011e860
 * callers: 0x100010dc
 * callees: none
 */

void __thiscall GameClient::Seat::SetCameraRot(GameClient::Seat *this, const struct Vector *a2)
{
  *((_DWORD *)this + 44) = *(_DWORD *)a2;
  *((_DWORD *)this + 45) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 46) = *((_DWORD *)a2 + 2);
}
