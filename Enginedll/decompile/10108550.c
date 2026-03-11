/*
 * func-name: ?CreateFXFromConfigFile@PostProcess@@QAEXAAVConfigFile@@@Z
 * func-address: 0x10108550
 * callers: 0x101087e0, 0x1013e2e0
 * callees: 0x1003b320, 0x10106b20, 0x10106b80, 0x10107ff0, 0x10108250, 0x101189f0, 0x1017bd70, 0x1017c4e0
 */

void __thiscall PostProcess::CreateFXFromConfigFile(PostProcess *this, struct ConfigFile *a2)
{
  PostProcess *v3; // eax
  int i; // esi
  int v5; // eax
  char v6; // bl
  int v7; // eax
  int v8; // eax
  int v9; // eax
  struct RenderDevice *v10; // eax
  char v11; // [esp-40h] [ebp-F4h] BYREF
  int v12; // [esp-3Ch] [ebp-F0h]
  int v13; // [esp-38h] [ebp-ECh] BYREF
  int v14; // [esp-34h] [ebp-E8h]
  int v15; // [esp-30h] [ebp-E4h]
  int v16; // [esp-2Ch] [ebp-E0h]
  int v17; // [esp-28h] [ebp-DCh]
  int v18; // [esp-24h] [ebp-D8h] BYREF
  int v19; // [esp-20h] [ebp-D4h]
  int v20; // [esp-1Ch] [ebp-D0h] BYREF
  int v21; // [esp-18h] [ebp-CCh]
  int v22; // [esp-14h] [ebp-C8h]
  int v23; // [esp-10h] [ebp-C4h]
  int v24; // [esp-Ch] [ebp-C0h]
  int v25; // [esp-8h] [ebp-BCh]
  int v26; // [esp-4h] [ebp-B8h]
  int *v27; // [esp+10h] [ebp-A4h]
  int *v28; // [esp+14h] [ebp-A0h]
  _DWORD *v29; // [esp+18h] [ebp-9Ch]
  _BYTE v30[28]; // [esp+1Ch] [ebp-98h] BYREF
  _BYTE v31[28]; // [esp+38h] [ebp-7Ch] BYREF
  _BYTE v32[28]; // [esp+54h] [ebp-60h] BYREF
  _BYTE v33[28]; // [esp+70h] [ebp-44h] BYREF
  _BYTE v34[28]; // [esp+8Ch] [ebp-28h] BYREF
  int v35; // [esp+B0h] [ebp-4h]

  v29 = this;
  v3 = PostProcess::Instance();
  PostProcess::RemoveAllEffects(v3);
  if ( *((float *)RenderDevice::Instance() + 411) >= 2.0 )
  {
    *((_DWORD *)this + 20) = a2;
    for ( i = 0; i < 10; ++i )
    {
      v27 = &v20;
      std::string::string(&v20, "PostProcessFX");
      v35 = 0;
      v5 = sub_1003B320((int)v33, i);
      v28 = &v13;
      LOBYTE(v35) = 1;
      std::operator+<char>(&v13, "Effect", v5);
      LOBYTE(v35) = 2;
      v6 = sub_1017BD70(v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26);
      v35 = -1;
      std::string::~string(v33);
      if ( v6 )
      {
        v28 = &v20;
        std::string::string(&v20, "PostProcessFX");
        v35 = 3;
        v7 = sub_1003B320((int)v34, i);
        v27 = &v13;
        LOBYTE(v35) = 4;
        std::operator+<char>(&v13, "Effect", v7);
        LOBYTE(v35) = 5;
        sub_1017C4E0(v30, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26);
        LOBYTE(v35) = 7;
        std::string::~string(v34);
        v8 = std::string::find(v30, ",", 0);
        std::string::substr(v30, v32, 0, v8);
        v26 = std::string::npos;
        LOBYTE(v35) = 8;
        v9 = std::string::find(v30, ",", 0);
        std::string::substr(v30, v31, v9 + 1, v26);
        LOBYTE(v35) = 9;
        if ( std::string::find(v31, "DOF", 0) == -1
          || (v10 = RenderDevice::Instance(),
              (*(unsigned __int8 (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v10 + 132))(v10)) )
        {
          v26 = -1;
          v25 = 1;
          v28 = &v18;
          std::string::string(&v18, v31);
          v27 = (int *)&v11;
          LOBYTE(v35) = 10;
          std::string::string(&v11, v32);
          LOBYTE(v35) = 9;
          PostProcess::AddPostProcessEffect(
            v29,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
        }
        LOBYTE(v35) = 8;
        std::string::~string(v31);
        LOBYTE(v35) = 7;
        std::string::~string(v32);
        v35 = -1;
        std::string::~string(v30);
      }
    }
    PostProcessEffect_Permanent::ReloadPermanentEffects();
  }
}
