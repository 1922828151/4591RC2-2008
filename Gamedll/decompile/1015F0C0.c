/*
 * func-name: ?RemoveSystemPart@EquipManager@GameClient@@QAEPAVSystemPart@2@PAV32@@Z_0
 * func-address: 0x1015f0c0
 * callers: 0x1000f68c
 * callees: none
 */

struct GameClient::SystemPart *__thiscall GameClient::EquipManager::RemoveSystemPart(
        GameClient::EquipManager *this,
        struct GameClient::SystemPart *a2)
{
  struct GameClient::SystemPart *result; // eax

  result = a2;
  if ( a2 )
    return GameClient::EquipManager::RemoveSystemPart(this, *((_DWORD *)a2 + 3));
  return result;
}
