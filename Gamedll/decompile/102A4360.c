/*
 * func-name: ?Submit@CVehicleRoofUI@@IAEXXZ_0
 * func-address: 0x102a4360
 * callers: 0x100135a2
 * callees: 0x1000194c, 0x10006947, 0x1000a506, 0x1001a0f5, 0x102c9d50
 */

void __thiscall CVehicleRoofUI::Submit(CVehicleRoofUI *this)
{
  GameClient::FuncManager *v2; // eax
  struct GameClient::Function *Function; // esi
  int v4; // eax
  unsigned int v5; // [esp-4h] [ebp-30h]
  int v6; // [esp+10h] [ebp-1Ch] BYREF
  void *v7; // [esp+14h] [ebp-18h]
  int v8; // [esp+18h] [ebp-14h]
  int v9; // [esp+1Ch] [ebp-10h]
  int v10; // [esp+28h] [ebp-4h]

  v5 = *((_DWORD *)this + 976);
  v2 = GameClient::FuncManager::Instance();
  Function = GameClient::FuncManager::GetFunction(v2, v5);
  if ( Function && *((_DWORD *)this + 977) != -1 )
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    sub_1001A0F5(&v6, (int)this + 3908);
    v4 = sub_1000194C(0);
    (*(void (__thiscall **)(struct GameClient::Function *, int, int *, _DWORD))(*(_DWORD *)Function + 72))(
      Function,
      v4,
      &v6,
      0);
    if ( v7 )
      operator delete(v7);
  }
}
