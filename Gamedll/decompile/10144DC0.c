/*
 * func-name: ?AddEquip@Booty@GameClient@@QAEXPAVEquip@2@@Z_0
 * func-address: 0x10144dc0
 * callers: 0x1001a320
 * callees: 0x1000b6fe
 */

void __thiscall GameClient::Booty::AddEquip(GameClient::Booty *this, struct GameClient::Equip *a2)
{
  int v2; // eax
  _DWORD v3[2]; // [esp+0h] [ebp-8h] BYREF

  if ( a2 )
  {
    v2 = *((_DWORD *)a2 + 3);
    v3[0] = *((_DWORD *)a2 + 1);
    v3[1] = v2;
    sub_1000B6FE((int)v3);
  }
}
