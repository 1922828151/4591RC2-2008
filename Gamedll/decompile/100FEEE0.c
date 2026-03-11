/*
 * func-name: ?LoadAnimHandleFPV@AEquip@GameClient@@UAEXABV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z_0
 * func-address: 0x100feee0
 * callers: 0x100073f6
 * callees: 0x1000c757, 0x1000efed, 0x10011b7b, 0x102c71e0, 0x102c7580, 0x102c9d62
 */

void __thiscall GameClient::AEquip::LoadAnimHandleFPV(int this, int a2, int a3)
{
  int v4; // ebx
  unsigned int v5; // esi
  int v6; // eax
  int v7; // eax
  void *v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // esi
  const char *v14; // eax
  int v15; // ecx
  char v16; // bl
  int v17; // eax
  _DWORD *v18; // esi
  unsigned int v19; // [esp+1Ch] [ebp-114h]
  int v20; // [esp+20h] [ebp-110h]
  _BYTE v22[28]; // [esp+2Ch] [ebp-104h] BYREF
  _BYTE v23[28]; // [esp+48h] [ebp-E8h] BYREF
  _BYTE v24[28]; // [esp+64h] [ebp-CCh] BYREF
  _BYTE v25[28]; // [esp+80h] [ebp-B0h] BYREF
  _BYTE v26[28]; // [esp+9Ch] [ebp-94h] BYREF
  _BYTE v27[28]; // [esp+B8h] [ebp-78h] BYREF
  _BYTE v28[44]; // [esp+D4h] [ebp-5Ch] BYREF
  int v29; // [esp+100h] [ebp-30h]
  _DWORD v30[7]; // [esp+104h] [ebp-2Ch] BYREF
  int v31; // [esp+12Ch] [ebp-4h]

  std::string::string(v22, "Name");
  v4 = 0;
  v31 = 0;
  GameClient::AdapterActor::LoadAnimHandle((int)v22, a3);
  v31 = -1;
  std::string::~string(v22);
  *(_DWORD *)(this + 2136) = -1;
  *(_DWORD *)(this + 2200) = -1;
  *(_DWORD *)(this + 2204) = -1;
  *(_DWORD *)(this + 2208) = -1;
  *(_DWORD *)(this + 2212) = -1;
  *(_DWORD *)(this + 2216) = -1;
  if ( *(_DWORD *)(this + 1364) )
  {
    v5 = 0;
    v19 = 0;
    if ( sub_10011B7B() )
    {
      v20 = 0;
      do
      {
        v6 = *(_DWORD *)(a2 + 4);
        if ( !v6 || v5 >= (*(_DWORD *)(a2 + 8) - v6) / 28 )
          _invalid_parameter_noinfo();
        v7 = *(_DWORD *)(a2 + 4);
        if ( *(_DWORD *)(v4 + v7 + 20) )
        {
          if ( !v7 || v5 >= (*(_DWORD *)(a2 + 8) - v7) / 28 )
            _invalid_parameter_noinfo();
          v8 = (void *)sub_102C71E0(v22, v4 + *(_DWORD *)(a2 + 4));
          v31 = 1;
          sub_102C7580(v27, v8);
          LOBYTE(v31) = 3;
          std::string::~string(v22);
          v9 = std::string::length(v27);
          std::string::string(v30);
          LOBYTE(v31) = 4;
          v10 = std::string::substr(v27, v23, v9 - 1, 1);
          LOBYTE(v31) = 5;
          std::string::operator=(v30, v10);
          LOBYTE(v31) = 4;
          std::string::~string(v23);
          AnimationSet::AnimationSet((AnimationSet *)v28);
          v29 = -1;
          LOBYTE(v31) = 6;
          v11 = std::operator+<char>(v26, a3, "\\");
          LOBYTE(v31) = 7;
          v12 = std::operator+<char>(v25, v11, v27);
          LOBYTE(v31) = 8;
          v13 = std::operator+<char>(v23, v12, ".x");
          LOBYTE(v31) = 9;
          v14 = (const char *)std::string::c_str(v30);
          LOBYTE(v15) = atoi(v14) != 0;
          v16 = AnimationSet::Load(v28, v27, v13, v15, 0, 0);
          LOBYTE(v31) = 8;
          std::string::~string(v23);
          LOBYTE(v31) = 7;
          std::string::~string(v25);
          LOBYTE(v31) = 6;
          std::string::~string(v26);
          if ( v16 )
          {
            v29 = Model::AttachAnimSet(*(Model **)(this + 1364), (struct AnimationSet *)v28);
            v17 = std::operator+<char>(v24, v27, "FPV");
            LOBYTE(v31) = 10;
            v18 = (_DWORD *)sub_1000C757(v17);
            (*(void (__thiscall **)(_DWORD *, _BYTE *))(*v18 + 4))(v18, v28);
            v18[11] = v29;
            LOBYTE(v31) = 6;
            std::string::~string(v24);
          }
          LOBYTE(v31) = 4;
          AnimationSet::~AnimationSet((AnimationSet *)v28);
          LOBYTE(v31) = 3;
          std::string::~string(v30);
          v31 = -1;
          std::string::~string(v27);
          v4 = v20;
          v5 = v19;
        }
        ++v5;
        v4 += 28;
        v19 = v5;
        v20 = v4;
      }
      while ( v5 < sub_10011B7B() );
    }
  }
}
