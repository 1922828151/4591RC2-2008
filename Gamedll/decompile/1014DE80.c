/*
 * func-name: ?Instance@EquipManager@GameClient@@SAPAV12@XZ_0
 * func-address: 0x1014de80
 * callers: 0x1001344e
 * callees: 0x10019eca, 0x102c9d98
 */

struct GameClient::EquipManager *__cdecl GameClient::EquipManager::Instance()
{
  struct GameClient::EquipManager *result; // eax
  GameClient::EquipManager *v1; // eax

  result = GameClient::EquipManager::ms_pInstance;
  if ( !GameClient::EquipManager::ms_pInstance )
  {
    v1 = (GameClient::EquipManager *)operator new(0x28u);
    if ( v1 )
    {
      result = (struct GameClient::EquipManager *)GameClient::EquipManager::EquipManager(v1);
      GameClient::EquipManager::ms_pInstance = result;
    }
    else
    {
      result = 0;
      GameClient::EquipManager::ms_pInstance = 0;
    }
  }
  return result;
}
