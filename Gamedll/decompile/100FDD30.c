/*
 * func-name: ?SetAimOffsetHUD@AEquip@GameClient@@QAEXABVVector@@@Z_0
 * func-address: 0x100fdd30
 * callers: 0x10007257
 * callees: none
 */

void __thiscall GameClient::AEquip::SetAimOffsetHUD(GameClient::AEquip *this, const struct Vector *a2)
{
  *((_DWORD *)this + 343) = *(_DWORD *)a2;
  *((_DWORD *)this + 344) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 345) = *((_DWORD *)a2 + 2);
}
