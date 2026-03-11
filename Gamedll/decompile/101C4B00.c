/*
 * func-name: ?Initialize@Func_Sheild@GameClient@@UAEXXZ_0
 * func-address: 0x101c4b00
 * callers: 0x100197c2
 * callees: 0x1000451b, 0x1000516e, 0x102c9d98
 */

void __thiscall GameClient::Func_Sheild::Initialize(GameClient::Func_Sheild *this)
{
  GameClient::AdapterActor *v2; // esi
  int v3; // eax
  struct Game *v4; // eax
  int v5; // ecx
  void (__thiscall *v6)(int, int, _BYTE *, _BYTE *); // edx
  float *v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // [esp-Ch] [ebp-A4h]
  _BYTE v12[28]; // [esp+14h] [ebp-84h] BYREF
  _BYTE v13[28]; // [esp+30h] [ebp-68h] BYREF
  float v14[16]; // [esp+4Ch] [ebp-4Ch] BYREF
  int v15; // [esp+94h] [ebp-4h]

  v2 = (GameClient::AdapterActor *)operator new(0x4F8u);
  v3 = 0;
  v15 = 0;
  if ( v2 )
  {
    v4 = Game::Instance();
    v3 = GameClient::AdapterActor::AdapterActor(v2, *((struct World **)v4 + 25));
  }
  v15 = -1;
  *((_DWORD *)this + 12) = v3;
  std::string::string(v13, &unk_10316265);
  v15 = 1;
  std::string::string(v12, &unk_10316266);
  v5 = *((_DWORD *)this + 12);
  v6 = *(void (__thiscall **)(int, int, _BYTE *, _BYTE *))(*(_DWORD *)v5 + 108);
  v11 = *((_DWORD *)this + 11) + 108;
  LOBYTE(v15) = 2;
  v6(v5, v11, v12, v13);
  LOBYTE(v15) = 1;
  std::string::~string(v12);
  v15 = -1;
  std::string::~string(v13);
  v7 = (float *)*((_DWORD *)this + 7);
  qmemcpy(v14, v7 + 9, sizeof(v14));
  v14[12] = v7[6];
  v8 = *((_DWORD *)this + 12);
  v14[13] = v7[7];
  v14[14] = v7[8];
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)v8 + 136))(v8, v14);
  v9 = *(_DWORD *)(*((_DWORD *)this + 12) + 716);
  if ( v9 )
  {
    v10 = NxPhysics::Instance(0, -1, v9, v14, 9);
    *((_DWORD *)this + 13) = NxPhysics::CreateMeshActor(v10);
  }
}
