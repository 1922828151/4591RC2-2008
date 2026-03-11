/*
 * func-name: ?AddSystemPart@EquipManager@GameClient@@QAEPAVSystemPart@2@PAV32@@Z_0
 * func-address: 0x1015f110
 * callers: 0x100097a0
 * callees: 0x1000e8b8
 */

struct GameClient::SystemPart *__thiscall GameClient::EquipManager::AddSystemPart(
        GameClient::EquipManager *this,
        struct GameClient::SystemPart *a2)
{
  _DWORD v3[2]; // [esp+4h] [ebp-14h] BYREF
  _BYTE v4[12]; // [esp+Ch] [ebp-Ch] BYREF

  v3[0] = *((_DWORD *)a2 + 3);
  v3[1] = a2;
  sub_1000E8B8((int)v4, (int)v3);
  return a2;
}
