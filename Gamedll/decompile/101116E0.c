/*
 * func-name: ?OnModel@RobotAsyncLoaderReport@GameClient@@UAEXHPAVModel@@@Z_0
 * func-address: 0x101116e0
 * callers: 0x100061e0
 * callees: 0x10015bb8, 0x1001940c
 */

void __thiscall GameClient::RobotAsyncLoaderReport::OnModel(
        GameClient::RobotAsyncLoaderReport *this,
        int a2,
        struct Model *a3)
{
  int v4; // ecx
  void (__thiscall *v5)(int, _BYTE *, _DWORD *, struct Model *); // edx
  int v6; // ecx
  void (__thiscall *v7)(int, _DWORD *, _BYTE *, struct Model *); // eax
  int v8; // ecx
  int (__thiscall *v9)(int, _DWORD *, _BYTE *, struct Model *); // edx
  int v10; // ecx
  void (__thiscall *v11)(int, _DWORD *, _BYTE *, struct Model *); // edx
  unsigned int v12; // ebx
  int v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // ebp
  int v17; // edi
  int v18; // eax
  char *v19; // ebp
  int v20; // edi
  unsigned int v21; // ebx
  int v22; // edi
  unsigned int v23; // ebp
  char v24[8]; // [esp+30h] [ebp-4Ch] BYREF
  _BYTE v25[28]; // [esp+38h] [ebp-44h] BYREF
  _DWORD v26[7]; // [esp+54h] [ebp-28h] BYREF
  int v27; // [esp+78h] [ebp-4h]
  struct Model *i; // [esp+84h] [ebp+8h]

  if ( *((_DWORD *)this + 1) )
  {
    *(_DWORD *)(*((_DWORD *)this + 1) + 716) = a3;
    *(_BYTE *)(*((_DWORD *)this + 1) + 816) = 0;
    if ( a3 )
    {
      std::string::string(v26, "Weapon_Point_R");
      v27 = 0;
      std::string::string(v25, "WeaponPoint0");
      v4 = *((_DWORD *)this + 1);
      v5 = *(void (__thiscall **)(int, _BYTE *, _DWORD *, struct Model *))(*(_DWORD *)v4 + 124);
      LOBYTE(v27) = 1;
      v5(v4, v25, v26, a3);
      LOBYTE(v27) = 0;
      std::string::~string(v25);
      v27 = -1;
      std::string::~string(v26);
      std::string::string(v25, "Weapon_Point_L");
      v27 = 2;
      std::string::string(v26, "WeaponPoint1");
      v6 = *((_DWORD *)this + 1);
      v7 = *(void (__thiscall **)(int, _DWORD *, _BYTE *, struct Model *))(*(_DWORD *)v6 + 124);
      LOBYTE(v27) = 3;
      v7(v6, v26, v25, a3);
      LOBYTE(v27) = 2;
      std::string::~string(v26);
      v27 = -1;
      std::string::~string(v25);
      std::string::string(v25, "Bip01_Head");
      v27 = 4;
      std::string::string(v26, "HeadPoint");
      v8 = *((_DWORD *)this + 1);
      v9 = *(int (__thiscall **)(int, _DWORD *, _BYTE *, struct Model *))(*(_DWORD *)v8 + 124);
      LOBYTE(v27) = 5;
      *(_DWORD *)(*((_DWORD *)this + 1) + 1800) = v9(v8, v26, v25, a3);
      LOBYTE(v27) = 4;
      std::string::~string(v26);
      v27 = -1;
      std::string::~string(v25);
      std::string::string(v25, "Bip01_Spine");
      v27 = 6;
      std::string::string(v26, "SpinePoint");
      v10 = *((_DWORD *)this + 1);
      v11 = *(void (__thiscall **)(int, _DWORD *, _BYTE *, struct Model *))(*(_DWORD *)v10 + 124);
      LOBYTE(v27) = 7;
      v11(v10, v26, v25, a3);
      LOBYTE(v27) = 6;
      std::string::~string(v26);
      v27 = -1;
      std::string::~string(v25);
      v12 = 0;
      for ( i = 0; ; i = (struct Model *)((char *)i + 56) )
      {
        v13 = *((_DWORD *)this + 1);
        v14 = *(_DWORD *)(v13 + 1356);
        if ( !v14 || v12 >= (*(_DWORD *)(v13 + 1360) - v14) / 56 )
          break;
        v15 = *(_DWORD *)(v13 + 1356);
        if ( !v15 || v12 >= (*(_DWORD *)(v13 + 1360) - v15) / 56 )
          _invalid_parameter_noinfo();
        v16 = *(_DWORD *)(v13 + 1356);
        v17 = *((_DWORD *)this + 1);
        v18 = *(_DWORD *)(v17 + 1356);
        v19 = (char *)i + v16;
        v20 = v17 + 1352;
        if ( !v18 || v12 >= (*(_DWORD *)(v20 + 8) - v18) / 56 )
          _invalid_parameter_noinfo();
        (*(void (__thiscall **)(_DWORD, int, char *))(**((_DWORD **)this + 1) + 140))(
          *((_DWORD *)this + 1),
          (int)i + *(_DWORD *)(v20 + 4),
          v19 + 28);
        ++v12;
      }
      v21 = *(_DWORD *)(v13 + 1360);
      v22 = v13 + 1352;
      if ( *(_DWORD *)(v22 + 4) > v21 )
        _invalid_parameter_noinfo();
      v23 = *(_DWORD *)(v22 + 4);
      if ( v23 > *(_DWORD *)(v22 + 8) )
        _invalid_parameter_noinfo();
      sub_10015BB8((int)v24, v22, v23, v22, v21);
    }
    GameClient::AdapterActor::RemoveAsyncHandle(*((GameClient::AdapterActor **)this + 1), a2);
  }
}
