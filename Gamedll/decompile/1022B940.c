/*
 * func-name: ?CreateInstance@FFunc_Power@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x1022b940
 * callers: 0x1000b4e7
 * callees: 0x10009246, 0x1000a506, 0x1000f5a1, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FFunc_Power::CreateInstance(
        GameClient::FFunc_Power *this,
        unsigned int a2)
{
  GameClient::Func_Power *v3; // eax
  struct GameClient::Function *v4; // edi
  GameClient::FuncManager *v5; // eax

  v3 = (GameClient::Func_Power *)operator new(0xD8u);
  v4 = 0;
  if ( v3 )
    v4 = (struct GameClient::Function *)GameClient::Func_Power::Func_Power(v3, a2);
  (*(void (__thiscall **)(_DWORD *, GameClient::FFunc_Power *))(*((_DWORD *)v4 + 4) + 4))((_DWORD *)v4 + 4, this);
  v5 = GameClient::FuncManager::Instance();
  GameClient::FuncManager::AddFunction(v5, v4);
  return (struct GameClient::Function *)((char *)v4 + 16);
}
