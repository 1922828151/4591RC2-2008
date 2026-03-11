/*
 * func-name: ?CreateInstance@FFunc_Sheild@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x1022cb00
 * callers: 0x10012c38
 * callees: 0x100054ed, 0x10009246, 0x1000a506, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FFunc_Sheild::CreateInstance(
        GameClient::FFunc_Sheild *this,
        unsigned int a2)
{
  GameClient::Func_Sheild *v3; // eax
  struct GameClient::Function *v4; // edi
  GameClient::FuncManager *v5; // eax

  v3 = (GameClient::Func_Sheild *)operator new(0x50u);
  v4 = 0;
  if ( v3 )
    v4 = (struct GameClient::Function *)GameClient::Func_Sheild::Func_Sheild(v3, a2);
  (*(void (__thiscall **)(_DWORD *, GameClient::FFunc_Sheild *))(*((_DWORD *)v4 + 4) + 4))((_DWORD *)v4 + 4, this);
  v5 = GameClient::FuncManager::Instance();
  GameClient::FuncManager::AddFunction(v5, v4);
  return (struct GameClient::Function *)((char *)v4 + 16);
}
