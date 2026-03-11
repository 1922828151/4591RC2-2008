/*
 * func-name: ?AddPartModel@CombinActor@GameClient@@UAEPAVModel@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z_0
 * func-address: 0x10105680
 * callers: 0x1000ddc3
 * callees: 0x1000290f, 0x10007eff, 0x1000bfaf, 0x1000cb2b, 0x10010e6f, 0x1001561d, 0x100156e5, 0x10016c6b, 0x100173f5, 0x1001a0f0, 0x102c9d62
 */

void *__thiscall GameClient::CombinActor::AddPartModel(int this, void *a2, void *a3)
{
  bool v4; // zf
  int v6; // ebp
  void *v7; // eax
  int v8; // eax
  int Model; // edi
  int v10; // ebx
  int v11; // esi
  _BYTE v12[8]; // [esp-18h] [ebp-E8h] BYREF
  _DWORD v13[5]; // [esp-10h] [ebp-E0h] BYREF
  int v14; // [esp+4h] [ebp-CCh]
  int v15; // [esp+8h] [ebp-C8h]
  int v16; // [esp+Ch] [ebp-C4h]
  int v17; // [esp+10h] [ebp-C0h]
  int v18; // [esp+14h] [ebp-BCh]
  void *v19; // [esp+24h] [ebp-ACh] BYREF
  int v20; // [esp+28h] [ebp-A8h] BYREF
  int v21; // [esp+2Ch] [ebp-A4h]
  int v22; // [esp+30h] [ebp-A0h] BYREF
  int v23; // [esp+34h] [ebp-9Ch]
  _BYTE v24[28]; // [esp+88h] [ebp-48h] BYREF
  int v25[7]; // [esp+A4h] [ebp-2Ch] BYREF
  int v26; // [esp+CCh] [ebp-4h]

  v4 = *(_DWORD *)(this + 716) == 0;
  v19 = a3;
  if ( v4 )
  {
    if ( *(_BYTE *)(this + 1108) )
    {
      sub_1000CB2B(v17, v18);
      v26 = 0;
      std::string::operator=(v24, a2);
      std::string::operator=(v25, a3);
      sub_1001561D(v24);
      v26 = -1;
      sub_100173F5(v17, v18);
    }
    return 0;
  }
  else
  {
    sub_100156E5((int)&v20, (int)a2);
    v6 = v20;
    v23 = *(_DWORD *)(this + 1280);
    if ( !v20 || v20 != this + 1276 )
      _invalid_parameter_noinfo();
    if ( v21 == v23 )
    {
      GameClient::CombinPart::CombinPart((GameClient::CombinPart *)v24);
      v26 = 1;
      std::string::operator=(v24, a2);
      v16 = 0;
      v22 = (int)v13;
      std::string::string(v13, a2);
      v25[0] = StaticModel::GetNodeHandle(
                 *(_DWORD *)(this + 716),
                 v13[0],
                 v13[1],
                 v13[2],
                 v13[3],
                 v13[4],
                 v14,
                 v15,
                 v16);
      if ( !v25[0] )
      {
        v26 = -1;
        GameClient::CombinPart::~CombinPart((GameClient::CombinPart *)v24);
        return 0;
      }
      v7 = (void *)sub_10016C6B(a2, (struct GameClient::CombinPart *)v24);
      LOBYTE(v26) = 2;
      sub_10010E6F((int)&v22, v7);
      LOBYTE(v26) = 1;
      sub_10007EFF(v17, v18);
      sub_100156E5((int)&v22, (int)a2);
      v6 = v22;
      v21 = v23;
      v26 = -1;
      GameClient::CombinPart::~CombinPart((GameClient::CombinPart *)v24);
    }
    if ( *(_BYTE *)(this + 1389) )
    {
      v8 = AsyncLoader::Instance(v19, *(_DWORD *)(this + 1384));
      Model = AsyncLoader::SubmitLoadModel(v8);
      if ( !v6 )
        _invalid_parameter_noinfo();
      v10 = v21;
      if ( v21 == *(_DWORD *)(v6 + 4) )
        _invalid_parameter_noinfo();
      v20 = Model;
      v21 = v10 + 36;
      sub_1000290F((int)&v22, (int)&v20);
      LogPrintf("Submit Load Part Model : %d", Model);
      return 0;
    }
    else
    {
      v16 = 1;
      v15 = 0;
      v14 = 0;
      v22 = (int)v12;
      std::string::string(v12, v19);
      v19 = (void *)Precacher::CacheModel();
      if ( !v6 )
        _invalid_parameter_noinfo();
      v11 = v21;
      if ( v21 == *(_DWORD *)(v6 + 4) )
        _invalid_parameter_noinfo();
      std::vector<Model *>::push_back(v11 + 68, &v19);
      return v19;
    }
  }
}
