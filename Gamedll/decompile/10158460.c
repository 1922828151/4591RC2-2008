/*
 * func-name: ?AddArmor@DamageUnit@GameClient@@QAEXW4ARMOR_TYPE@@HMMM@Z_0
 * func-address: 0x10158460
 * callers: 0x100102c1
 * callees: 0x1001a89d
 */

int __thiscall GameClient::DamageUnit::AddArmor(int this, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD v7[5]; // [esp+0h] [ebp-14h] BYREF

  v7[2] = a4;
  v7[0] = a2;
  v7[3] = a6;
  v7[4] = a5;
  v7[1] = a3;
  return sub_1001A89D((void *)(this + 4), v7);
}
