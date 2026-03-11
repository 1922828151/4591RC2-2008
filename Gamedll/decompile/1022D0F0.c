/*
 * func-name: ?CreateInstance@FFunc_VehicleReceive@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x1022d0f0
 * callers: 0x10001c21
 * callees: 0x10005155, 0x10009246, 0x1000a506, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FFunc_VehicleReceive::CreateInstance(
        GameClient::FFunc_VehicleReceive *this,
        unsigned int a2)
{
  GameClient::Func_VehicleReceive *v2; // eax
  struct GameClient::Function *v3; // esi
  GameClient::FuncManager *v4; // eax

  v2 = (GameClient::Func_VehicleReceive *)operator new(0x90u);
  if ( v2 )
    v3 = (struct GameClient::Function *)GameClient::Func_VehicleReceive::Func_VehicleReceive(v2, a2);
  else
    v3 = 0;
  v4 = GameClient::FuncManager::Instance();
  GameClient::FuncManager::AddFunction(v4, v3);
  if ( v3 )
    return (struct GameClient::Function *)((char *)v3 + 16);
  else
    return 0;
}
