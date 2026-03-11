/*
 * func-name: ?GetFreeCameraRot@Seat@GameClient@@QAEXAAVVector@@@Z_0
 * func-address: 0x1011e9e0
 * callers: 0x10007d47
 * callees: none
 */

void __thiscall GameClient::Seat::GetFreeCameraRot(GameClient::Seat *this, struct Vector *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 67);
  *((_DWORD *)a2 + 1) = *((_DWORD *)this + 68);
  *((_DWORD *)a2 + 2) = *((_DWORD *)this + 69);
}
