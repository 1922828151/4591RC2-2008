/*
 * func-name: ?SetVelocity@DamageEquip@GameClient@@QAEXABVVector@@@Z_0
 * func-address: 0x1014dce0
 * callers: 0x1001463c
 * callees: none
 */

void __thiscall GameClient::DamageEquip::SetVelocity(GameClient::DamageEquip *this, const struct Vector *a2)
{
  *((_DWORD *)this + 202) = *(_DWORD *)a2;
  *((_DWORD *)this + 203) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 204) = *((_DWORD *)a2 + 2);
}
