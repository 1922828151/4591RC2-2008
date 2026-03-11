/*
 * func-name: ?CreateInstance@FFunc_Store@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x1022cea0
 * callers: 0x10003f35
 * callees: 0x10008706, 0x10009246, 0x1000a506, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FFunc_Store::CreateInstance(
        GameClient::FFunc_Store *this,
        unsigned int a2)
{
  GameClient::Func_Store *v3; // eax
  struct GameClient::Function *v4; // edi
  GameClient::FuncManager *v5; // eax

  v3 = (GameClient::Func_Store *)operator new(0x60u);
  v4 = 0;
  if ( v3 )
    v4 = (struct GameClient::Function *)GameClient::Func_Store::Func_Store(v3, a2);
  (*(void (__thiscall **)(_DWORD *, GameClient::FFunc_Store *))(*((_DWORD *)v4 + 4) + 4))((_DWORD *)v4 + 4, this);
  v5 = GameClient::FuncManager::Instance();
  GameClient::FuncManager::AddFunction(v5, v4);
  return (struct GameClient::Function *)((char *)v4 + 16);
}
