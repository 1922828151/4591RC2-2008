/*
 * func-name: ?OnModel@EquipAsyncLoaderReport@GameClient@@UAEXHPAVModel@@@Z_0
 * func-address: 0x100fe450
 * callers: 0x1000679e
 * callees: 0x1001940c, 0x100195e7
 */

void __thiscall GameClient::EquipAsyncLoaderReport::OnModel(
        GameClient::EquipAsyncLoaderReport *this,
        int a2,
        struct Model *a3)
{
  int v4; // eax
  int v5; // ecx
  void (__thiscall *v6)(int, _BYTE *, _BYTE *, struct Model *); // eax
  int v7; // ecx
  int (__thiscall *v8)(int, _BYTE *, _BYTE *, struct Model *); // edx
  unsigned int v9; // ebp
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // esi
  int v16; // eax
  int v17; // esi
  unsigned int v18; // ebx
  int v19; // esi
  int v20; // eax
  int v21; // eax
  int v22; // ebp
  int v23; // esi
  int v24; // eax
  int v25; // ebp
  int v26; // esi
  int i; // [esp+2Ch] [ebp-80h]
  int j; // [esp+2Ch] [ebp-80h]
  _BYTE v29[28]; // [esp+30h] [ebp-7Ch] BYREF
  _BYTE v30[28]; // [esp+4Ch] [ebp-60h] BYREF
  _BYTE v31[28]; // [esp+68h] [ebp-44h] BYREF
  _BYTE v32[28]; // [esp+84h] [ebp-28h] BYREF
  int v33; // [esp+A8h] [ebp-4h]

  v4 = *((_DWORD *)this + 1);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 716) = a3;
    if ( a3 )
    {
      std::string::string(v30, "Back_Point");
      v33 = 0;
      std::string::string(v29, "BackPoint");
      v5 = *((_DWORD *)this + 1);
      v6 = *(void (__thiscall **)(int, _BYTE *, _BYTE *, struct Model *))(*(_DWORD *)v5 + 124);
      LOBYTE(v33) = 1;
      v6(v5, v29, v30, a3);
      LOBYTE(v33) = 0;
      std::string::~string(v29);
      v33 = -1;
      std::string::~string(v30);
      std::string::string(v29, "d_M_sword02");
      v33 = 2;
      std::string::string(v30, "AssistantPoint");
      v7 = *((_DWORD *)this + 1);
      v8 = *(int (__thiscall **)(int, _BYTE *, _BYTE *, struct Model *))(*(_DWORD *)v7 + 124);
      LOBYTE(v33) = 3;
      *(_DWORD *)(*((_DWORD *)this + 1) + 1272) = v8(v7, v30, v29, a3);
      LOBYTE(v33) = 2;
      std::string::~string(v30);
      v33 = -1;
      std::string::~string(v29);
      (*(void (__stdcall **)(int, int))(**((_DWORD **)this + 1) + 140))(
        *((_DWORD *)this + 1) + 2220,
        *((_DWORD *)this + 1) + 1080);
      v9 = 0;
      for ( i = 0; ; i += 28 )
      {
        v10 = *((_DWORD *)this + 1);
        v11 = *(_DWORD *)(v10 + 2256);
        v12 = v10 + 2252;
        if ( !v11 || v9 >= (*(_DWORD *)(v12 + 8) - v11) / 28 )
          break;
        v13 = sub_100195E7((int)v32, v9);
        v33 = 4;
        v14 = std::operator+<char>(v31, "ShootPoint", v13);
        v15 = *((_DWORD *)this + 1);
        v16 = *(_DWORD *)(v15 + 2256);
        v17 = v15 + 2252;
        LOBYTE(v33) = 5;
        if ( !v16 || v9 >= (*(_DWORD *)(v17 + 8) - v16) / 28 )
          _invalid_parameter_noinfo();
        (*(void (__thiscall **)(_DWORD, int, int, struct Model *))(**((_DWORD **)this + 1) + 124))(
          *((_DWORD *)this + 1),
          v14,
          i + *(_DWORD *)(v17 + 4),
          a3);
        LOBYTE(v33) = 4;
        std::string::~string(v31);
        v33 = -1;
        std::string::~string(v32);
        ++v9;
      }
      v18 = 0;
      for ( j = 0; ; j += 28 )
      {
        v19 = *((_DWORD *)this + 1);
        v20 = *(_DWORD *)(v19 + 2272);
        if ( !v20 || v18 >= (*(_DWORD *)(v19 + 2276) - v20) / 28 )
          break;
        v21 = *(_DWORD *)(v19 + 2272);
        if ( !v21 || v18 >= (*(_DWORD *)(v19 + 2276) - v21) / 28 )
          _invalid_parameter_noinfo();
        v22 = *(_DWORD *)(v19 + 2272);
        v23 = *((_DWORD *)this + 1);
        v24 = *(_DWORD *)(v23 + 2272);
        v25 = j + v22;
        v26 = v23 + 2268;
        if ( !v24 || v18 >= (*(_DWORD *)(v26 + 8) - v24) / 28 )
          _invalid_parameter_noinfo();
        (*(void (__thiscall **)(_DWORD, int, int, struct Model *))(**((_DWORD **)this + 1) + 124))(
          *((_DWORD *)this + 1),
          j + *(_DWORD *)(v26 + 4),
          v25,
          a3);
        ++v18;
      }
    }
    GameClient::AdapterActor::RemoveAsyncHandle(*((GameClient::AdapterActor **)this + 1), a2);
  }
}
