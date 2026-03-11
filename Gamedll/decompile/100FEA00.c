/*
 * func-name: ?LoadAnimHandle@AEquip@GameClient@@UAEXABV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z_0
 * func-address: 0x100fea00
 * callers: 0x1000bfdc
 * callees: 0x1000b7d0, 0x1000c757, 0x1000efed, 0x10011b7b, 0x1001684c, 0x102c71e0, 0x102c7580, 0x102c9d62
 */

void __thiscall GameClient::AEquip::LoadAnimHandle(_DWORD *this, int a2, int a3)
{
  int v3; // edi
  unsigned int v5; // ebp
  int v6; // esi
  int v7; // eax
  int v8; // eax
  void *v9; // eax
  int v10; // esi
  int v11; // eax
  bool v12; // zf
  int v13; // eax
  int v14; // eax
  int v15; // esi
  const char *v16; // eax
  int v17; // eax
  int Animation; // eax
  int v19; // edi
  int v20; // ebp
  _DWORD *v21; // esi
  int v22; // eax
  int v23; // eax
  int v24; // esi
  const char *v25; // eax
  int v26; // ecx
  int v27; // [esp-8h] [ebp-170h]
  char v28; // [esp+17h] [ebp-151h]
  unsigned int v29; // [esp+1Ch] [ebp-14Ch]
  int v30; // [esp+20h] [ebp-148h]
  int v31; // [esp+24h] [ebp-144h] BYREF
  int v32; // [esp+28h] [ebp-140h]
  _BYTE v33[28]; // [esp+2Ch] [ebp-13Ch] BYREF
  _BYTE v34[28]; // [esp+48h] [ebp-120h] BYREF
  _BYTE v35[28]; // [esp+64h] [ebp-104h] BYREF
  _BYTE v36[28]; // [esp+80h] [ebp-E8h] BYREF
  _BYTE v37[28]; // [esp+9Ch] [ebp-CCh] BYREF
  _BYTE v38[28]; // [esp+B8h] [ebp-B0h] BYREF
  _BYTE v39[28]; // [esp+D4h] [ebp-94h] BYREF
  _BYTE v40[28]; // [esp+F0h] [ebp-78h] BYREF
  _BYTE v41[44]; // [esp+10Ch] [ebp-5Ch] BYREF
  int v42; // [esp+138h] [ebp-30h]
  _DWORD v43[7]; // [esp+13Ch] [ebp-2Ch] BYREF
  int v44; // [esp+164h] [ebp-4h]

  v3 = a2;
  v32 = a2;
  std::string::string(v33, "Name");
  v5 = 0;
  v44 = 0;
  GameClient::AdapterActor::LoadAnimHandle((int)v33, a3);
  v44 = -1;
  std::string::~string(v33);
  this[533] = -1;
  this[545] = -1;
  this[546] = -1;
  this[547] = -1;
  this[548] = -1;
  this[549] = -1;
  if ( this[179] )
  {
    v29 = 0;
    if ( sub_10011B7B() )
    {
      v6 = 0;
      v30 = 0;
      while ( 1 )
      {
        v7 = *(_DWORD *)(v3 + 4);
        if ( !v7 || v5 >= (*(_DWORD *)(v3 + 8) - v7) / 28 )
          _invalid_parameter_noinfo();
        v8 = *(_DWORD *)(v3 + 4);
        if ( !*(_DWORD *)(v6 + v8 + 20) )
          goto LABEL_17;
        if ( !v8 || v5 >= (*(_DWORD *)(v3 + 8) - v8) / 28 )
          _invalid_parameter_noinfo();
        v9 = (void *)sub_102C71E0(v33, v6 + *(_DWORD *)(v3 + 4));
        v44 = 1;
        sub_102C7580(v40, v9);
        LOBYTE(v44) = 3;
        std::string::~string(v33);
        v10 = std::string::length(v40);
        std::string::string(v43);
        LOBYTE(v44) = 4;
        v11 = std::string::substr(v40, v34, v10 - 1, 1);
        LOBYTE(v44) = 5;
        std::string::operator=(v43, v11);
        LOBYTE(v44) = 4;
        std::string::~string(v34);
        AnimationSet::AnimationSet((AnimationSet *)v41);
        v42 = -1;
        v12 = *((_BYTE *)this + 1108) == 0;
        LOBYTE(v44) = 6;
        if ( !v12 )
          break;
        v22 = std::operator+<char>(v35, a3, "\\");
        LOBYTE(v44) = 10;
        v23 = std::operator+<char>(v38, v22, v40);
        LOBYTE(v44) = 11;
        v24 = std::operator+<char>(v39, v23, ".x");
        LOBYTE(v44) = 12;
        v25 = (const char *)std::string::c_str(v43);
        LOBYTE(v26) = atoi(v25) != 0;
        v28 = AnimationSet::Load(v41, v40, v24, v26, 0, 0);
        LOBYTE(v44) = 11;
        std::string::~string(v39);
        LOBYTE(v44) = 10;
        std::string::~string(v38);
        LOBYTE(v44) = 6;
        std::string::~string(v35);
        if ( v28 )
        {
          v42 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 116))(this, v41);
          v21 = (_DWORD *)sub_1000C757((int)v40);
          (*(void (__thiscall **)(_DWORD *, _BYTE *))(*v21 + 4))(v21, v41);
          goto LABEL_15;
        }
LABEL_16:
        LOBYTE(v44) = 4;
        AnimationSet::~AnimationSet((AnimationSet *)v41);
        LOBYTE(v44) = 3;
        std::string::~string(v43);
        v44 = -1;
        std::string::~string(v40);
        v6 = v30;
LABEL_17:
        ++v5;
        v6 += 28;
        v29 = v5;
        v30 = v6;
        if ( v5 >= sub_10011B7B() )
          return;
      }
      v13 = std::operator+<char>(v36, a3, "\\");
      LOBYTE(v44) = 7;
      v14 = std::operator+<char>(v37, v13, v40);
      LOBYTE(v44) = 8;
      v15 = std::operator+<char>(v34, v14, ".x");
      LOBYTE(v44) = 9;
      v16 = (const char *)std::string::c_str(v43);
      atoi(v16);
      v17 = AsyncLoader::Instance(v40, v15);
      Animation = AsyncLoader::SubmitLoadAnimation(v17);
      v19 = this[310];
      v27 = *(_DWORD *)(v19 + 4);
      v31 = Animation;
      v20 = sub_1001684C(v19, v27, (int)&v31);
      sub_1000B7D0(1);
      *(_DWORD *)(v19 + 4) = v20;
      **(_DWORD **)(v20 + 4) = v20;
      LOBYTE(v44) = 8;
      std::string::~string(v34);
      LOBYTE(v44) = 7;
      std::string::~string(v37);
      LOBYTE(v44) = 6;
      std::string::~string(v36);
      v21 = (_DWORD *)sub_1000C757((int)v40);
      (*(void (__thiscall **)(_DWORD *, _BYTE *))(*v21 + 4))(v21, v41);
      v5 = v29;
      v3 = v32;
LABEL_15:
      v21[11] = v42;
      goto LABEL_16;
    }
  }
}
