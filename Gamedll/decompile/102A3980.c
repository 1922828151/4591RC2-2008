/*
 * func-name: ?Tick@CVehicleRoofUI@@UAEXM@Z_0
 * func-address: 0x102a3980
 * callers: 0x10010e9c
 * callees: 0x1000194c, 0x10006947, 0x1000a506
 */

void __thiscall CVehicleRoofUI::Tick(CVehicleRoofUI *this, float a2)
{
  int v3; // esi
  GameClient::FuncManager *v4; // eax
  struct GameClient::Function *Function; // eax
  unsigned int v6; // [esp+Ch] [ebp-Ch]

  v3 = sub_1000194C(0);
  v6 = *((_DWORD *)this + 976);
  v4 = GameClient::FuncManager::Instance();
  Function = GameClient::FuncManager::GetFunction(v4, v6);
  if ( Function && v3 )
    (*(void (__thiscall **)(struct GameClient::Function *, int, int, int))(*(_DWORD *)Function + 64))(
      Function,
      v3,
      -1,
      -1);
  CTYDialog::Tick(this, a2);
}
