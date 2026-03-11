/*
 * func-name: ?SetFreeCameraRot@Seat@GameClient@@QAEXABVVector@@@Z_0
 * func-address: 0x1011e9a0
 * callers: 0x100094c6
 * callees: none
 */

void __thiscall GameClient::Seat::SetFreeCameraRot(GameClient::Seat *this, const struct Vector *a2)
{
  *((float *)this + 67) = *((float *)this + 67) + *(float *)a2;
  *((float *)this + 68) = *((float *)a2 + 1) + *((float *)this + 68);
  *((float *)this + 69) = *((float *)a2 + 2) + *((float *)this + 69);
}
