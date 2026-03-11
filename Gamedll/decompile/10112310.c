/*
 * func-name: ?LoadModel@CombinRobot@GameClient@@UAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z_0
 * func-address: 0x10112310
 * callers: 0x10004df9
 * callees: 0x1000a961, 0x1000e28c, 0x10012e3b
 */

char __thiscall GameClient::CombinRobot::LoadModel(struct Model **this, void *a2, int a3, int a4)
{
  int *v5; // edi
  char result; // al
  bool v7; // zf
  void (__thiscall *v8)(struct Model **, _BYTE *, _BYTE *, int); // edx
  void (__thiscall *v9)(struct Model **, _BYTE *, _BYTE *, int); // edx
  int (__thiscall *v10)(struct Model **, _BYTE *, _BYTE *, int); // edx
  void (__thiscall *v11)(struct Model **, _BYTE *, _BYTE *, int); // edx
  void (__thiscall *v12)(struct Model **, _BYTE *, _DWORD *, int); // edx
  struct GameClient::CombinRobot **v13; // eax
  int v14; // [esp+18h] [ebp-94h]
  int v15; // [esp+18h] [ebp-94h]
  int v16; // [esp+18h] [ebp-94h]
  int v17; // [esp+18h] [ebp-94h]
  int v18; // [esp+18h] [ebp-94h]
  _BYTE v19[28]; // [esp+30h] [ebp-7Ch] BYREF
  _BYTE v20[28]; // [esp+4Ch] [ebp-60h] BYREF
  _BYTE v21[28]; // [esp+68h] [ebp-44h] BYREF
  _DWORD v22[7]; // [esp+84h] [ebp-28h] BYREF
  int v23; // [esp+A8h] [ebp-4h]

  v5 = (int *)(this + 179);
  if ( this[179] )
    Precacher::PurgeModel(this + 179);
  result = GameClient::AdapterActor::LoadModel(a2, a3, a4);
  if ( result )
  {
    v7 = *v5 == 0;
    *((_BYTE *)this + 816) = 0;
    if ( !v7 )
    {
      std::string::string(v20, "Weapon_Point_R");
      v23 = 0;
      std::string::string(v19, "WeaponPoint0");
      v14 = *v5;
      v8 = (void (__thiscall *)(struct Model **, _BYTE *, _BYTE *, int))*((_DWORD *)*this + 31);
      LOBYTE(v23) = 1;
      v8(this, v19, v20, v14);
      LOBYTE(v23) = 0;
      std::string::~string(v19);
      v23 = -1;
      std::string::~string(v20);
      std::string::string(v19, "Weapon_Point_L");
      v23 = 2;
      std::string::string(v20, "WeaponPoint1");
      v15 = *v5;
      v9 = (void (__thiscall *)(struct Model **, _BYTE *, _BYTE *, int))*((_DWORD *)*this + 31);
      LOBYTE(v23) = 3;
      v9(this, v20, v19, v15);
      LOBYTE(v23) = 2;
      std::string::~string(v20);
      v23 = -1;
      std::string::~string(v19);
      std::string::string(v19, "Bip01_Head");
      v23 = 4;
      std::string::string(v20, "HeadPoint");
      v16 = *v5;
      v10 = (int (__thiscall *)(struct Model **, _BYTE *, _BYTE *, int))*((_DWORD *)*this + 31);
      LOBYTE(v23) = 5;
      this[450] = (struct Model *)v10(this, v20, v19, v16);
      LOBYTE(v23) = 4;
      std::string::~string(v20);
      v23 = -1;
      std::string::~string(v19);
      std::string::string(v19, "Bip01_Spine");
      v23 = 6;
      std::string::string(v20, "SpinePoint");
      v17 = *v5;
      v11 = (void (__thiscall *)(struct Model **, _BYTE *, _BYTE *, int))*((_DWORD *)*this + 31);
      LOBYTE(v23) = 7;
      v11(this, v20, v19, v17);
      LOBYTE(v23) = 6;
      std::string::~string(v20);
      v23 = -1;
      std::string::~string(v19);
      std::string::string(v22, "Bip01_Neck");
      v23 = 8;
      std::string::string(v21, "NeckPoint");
      v18 = *v5;
      v12 = (void (__thiscall *)(struct Model **, _BYTE *, _DWORD *, int))*((_DWORD *)*this + 31);
      LOBYTE(v23) = 9;
      v12(this, v21, v22, v18);
      LOBYTE(v23) = 8;
      std::string::~string(v21);
      v23 = -1;
      std::string::~string(v22);
    }
    v13 = (struct GameClient::CombinRobot **)sub_10012E3B(a2);
    GameClient::CombinRobot::Clone((GameClient::CombinRobot *)this, *v13);
    return 1;
  }
  return result;
}
