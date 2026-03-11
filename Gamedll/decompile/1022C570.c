/*
 * func-name: ?CreateInstance@FFunc_RobotReceive@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x1022c570
 * callers: 0x10015f23
 * callees: 0x10009246, 0x1000a506, 0x100160ea, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FFunc_RobotReceive::CreateInstance(
        GameClient::FFunc_RobotReceive *this,
        unsigned int a2)
{
  GameClient::Func_RobotReceive *v2; // eax
  struct GameClient::Function *v3; // esi
  GameClient::FuncManager *v4; // eax

  v2 = (GameClient::Func_RobotReceive *)operator new(0x90u);
  if ( v2 )
    v3 = (struct GameClient::Function *)GameClient::Func_RobotReceive::Func_RobotReceive(v2, a2);
  else
    v3 = 0;
  v4 = GameClient::FuncManager::Instance();
  GameClient::FuncManager::AddFunction(v4, v3);
  if ( v3 )
    return (struct GameClient::Function *)((char *)v3 + 16);
  else
    return 0;
}
