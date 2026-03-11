/*
 * func-name: ?ImportModel@StaticModel@@QAE?AV?$vector@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@PBD_N@Z
 * func-address: 0x100ef9b0
 * callers: 0x10084160, 0x100efd60
 * callees: 0x1000e620, 0x1007bf30, 0x1007dcd0, 0x100971c0, 0x1009db20, 0x100ee890, 0x100f1970, 0x1011b080, 0x1017a610, 0x1017c0d0, 0x101a2500, 0x101a2534
 */

_DWORD *__thiscall StaticModel::ImportModel(ModelFrame **this, _DWORD *a2, int a3, char a4)
{
  int last_of; // eax
  int v6; // eax
  const char *v7; // eax
  struct StaticModel *ModelFromCache; // eax
  _DWORD *v9; // esi
  ModelFrame *v10; // eax
  int v12[21]; // [esp-40h] [ebp-E8h] BYREF
  int v13; // [esp+14h] [ebp-94h] BYREF
  int v14; // [esp+18h] [ebp-90h] BYREF
  void *v15; // [esp+1Ch] [ebp-8Ch]
  int v16; // [esp+20h] [ebp-88h]
  int v17; // [esp+24h] [ebp-84h]
  int v18; // [esp+28h] [ebp-80h]
  _BYTE v19[4]; // [esp+2Ch] [ebp-7Ch] BYREF
  void *v20; // [esp+30h] [ebp-78h]
  int v21; // [esp+34h] [ebp-74h]
  int v22; // [esp+38h] [ebp-70h]
  int *v23; // [esp+3Ch] [ebp-6Ch]
  _DWORD v24[6]; // [esp+40h] [ebp-68h] BYREF
  char v25; // [esp+58h] [ebp-50h]
  char v26; // [esp+59h] [ebp-4Fh]
  float v27; // [esp+5Ch] [ebp-4Ch]
  float v28; // [esp+60h] [ebp-48h]
  _BYTE v29[28]; // [esp+64h] [ebp-44h] BYREF
  _BYTE v30[28]; // [esp+80h] [ebp-28h] BYREF
  int v31; // [esp+A4h] [ebp-4h]

  v18 = 0;
  (*((void (__thiscall **)(ModelFrame **))*this + 4))(this);
  std::string::string(v30, a3);
  v31 = 1;
  last_of = std::string::find_last_of(v30, &unk_101C7E94, std::string::npos);
  if ( last_of == std::string::npos )
    v6 = 0;
  else
    v6 = last_of + 1;
  std::string::substr(v30, v29, v6, std::string::npos);
  LOBYTE(v31) = 2;
  sub_1017A610(v29);
  if ( a4 || (v7 = (const char *)std::string::c_str(v29), (ModelFromCache = StaticModel::FindModelFromCache(v7)) == 0) )
  {
    std::string::operator=(this + 80, a3);
    std::string::operator=(this + 87, v29);
    sub_1017A610(this + 80);
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v12[15] = (int)this;
    v13 = (int)&v12[8];
    LOBYTE(v31) = 4;
    std::string::string(&v12[8], this + 80);
    Serializer::LoadModel(v12[8], v12[9], v12[10], v12[11], v12[12], v12[13], v12[14], v12[15]);
    if ( this[77] )
    {
      v25 = 1;
      v27 = 100.0;
      v24[4] = 0;
      v28 = 100.0;
      v24[1] = 0;
      LOWORD(v24[0]) = 0;
      v26 = 0;
      v24[2] = 0;
      v24[5] = 0;
      v24[3] = GetTickCount();
      v13 = (int)&v12[9];
      LOBYTE(v31) = 6;
      std::string::string(&v12[9], &unk_101C7E82);
      v23 = &v12[2];
      LOBYTE(v31) = 7;
      std::string::string(&v12[2], "PRTAutoCompile");
      LOBYTE(v31) = 8;
      Engine::Instance();
      LOBYTE(v31) = 6;
      if ( !(unsigned __int8)sub_1017C0D0(
                               v12[2],
                               v12[3],
                               v12[4],
                               v12[5],
                               v12[6],
                               v12[7],
                               v12[8],
                               v12[9],
                               v12[10],
                               v12[11],
                               v12[12],
                               v12[13],
                               v12[14],
                               v12[15]) )
        v25 = 0;
      sub_1007DCD0(v24, this);
      if ( this[77] )
      {
        v23 = v12;
        qmemcpy(v12, this + 56, 0x40u);
        ModelFrame::UpdateMatrices(
          this[77],
          v12[0],
          v12[1],
          v12[2],
          v12[3],
          v12[4],
          v12[5],
          v12[6],
          v12[7],
          v12[8],
          v12[9],
          v12[10],
          v12[11],
          v12[12],
          v12[13],
          v12[14],
          v12[15]);
        (*((void (__thiscall **)(ModelFrame **))*this + 2))(this);
        v13 = (int)this;
        sub_100F1970((int)&unk_11240DA0, (int)&v13);
      }
      if ( !this[2] )
      {
        v10 = (ModelFrame *)operator new(0x10u);
        if ( v10 )
        {
          *((_DWORD *)v10 + 1) = 0;
          *((_DWORD *)v10 + 2) = 0;
          *((_DWORD *)v10 + 3) = 0;
        }
        else
        {
          v10 = 0;
        }
        v12[15] = (int)&v13;
        LOBYTE(v31) = 6;
        this[2] = v10;
        v13 = (int)this;
        sub_100F1970((int)v10, v12[15]);
      }
      v9 = a2;
      sub_1000E620(a2, (int)v19);
      v18 = 1;
      LOBYTE(v31) = 4;
      nullsub_1();
    }
    else
    {
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v9 = a2;
      LOBYTE(v31) = 5;
      sub_1000E620(a2, (int)&v14);
      v18 = 1;
      if ( v15 )
        operator delete(v15);
      v15 = 0;
      v16 = 0;
      v17 = 0;
    }
    if ( v20 )
      operator delete(v20);
    v22 = 0;
    v21 = 0;
    v20 = 0;
  }
  else
  {
    (*(void (__thiscall **)(struct StaticModel *, ModelFrame **, _DWORD, _DWORD))(*(_DWORD *)ModelFromCache + 24))(
      ModelFromCache,
      this,
      0,
      0);
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v9 = a2;
    LOBYTE(v31) = 3;
    sub_1000E620(a2, (int)&v14);
    v18 = 1;
    if ( v15 )
      operator delete(v15);
    v15 = 0;
    v16 = 0;
    v17 = 0;
  }
  LOBYTE(v31) = 1;
  std::string::~string(v29);
  LOBYTE(v31) = 0;
  std::string::~string(v30);
  return v9;
}
