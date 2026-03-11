/*
 * func-name: ?CreateInstance@FFunc_Power_Input@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x1022be00
 * callers: 0x10015dde
 * callees: 0x10009246, 0x1000a506, 0x10013f6b, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FFunc_Power_Input::CreateInstance(
        GameClient::FFunc_Power_Input *this,
        unsigned int a2)
{
  GameClient::Func_Power_Input *v3; // eax
  struct GameClient::Function *v4; // edi
  GameClient::FuncManager *v5; // eax

  v3 = (GameClient::Func_Power_Input *)operator new(0xD8u);
  v4 = 0;
  if ( v3 )
    v4 = (struct GameClient::Function *)GameClient::Func_Power_Input::Func_Power_Input(v3, a2);
  (*(void (__thiscall **)(_DWORD *, GameClient::FFunc_Power_Input *))(*((_DWORD *)v4 + 4) + 4))((_DWORD *)v4 + 4, this);
  v5 = GameClient::FuncManager::Instance();
  GameClient::FuncManager::AddFunction(v5, v4);
  return (struct GameClient::Function *)((char *)v4 + 16);
}
