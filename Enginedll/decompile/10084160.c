/*
 * func-name: ?AddPrefab@Editor@@QAEPAVPrefab@@AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10084160
 * callers: 0x10084dd0
 * callees: 0x1000bc40, 0x10012a30, 0x10051b50, 0x1007bf30, 0x1007da70, 0x1007ea80, 0x10080200, 0x10082690, 0x100977a0, 0x100ef9b0, 0x100f2ca0, 0x10179840, 0x101a2500, 0x101a2534
 */

Prefab *__thiscall Editor::AddPrefab(struct World **this, int a2)
{
  Prefab *v3; // eax
  Prefab *v4; // ebp
  Model *v5; // eax
  Model *v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int last_of; // edi
  int v11; // eax
  int v12; // eax
  const char *v13; // eax
  _DWORD *v15; // eax
  int v16; // ecx
  float *v17; // eax
  float *v18; // edx
  Editor *v19; // esi
  bool v20; // zf
  char v21; // [esp-3Ch] [ebp-110h] BYREF
  int v22; // [esp-38h] [ebp-10Ch]
  int v23; // [esp-34h] [ebp-108h]
  int v24; // [esp-30h] [ebp-104h]
  int v25; // [esp-2Ch] [ebp-100h]
  int v26; // [esp-28h] [ebp-FCh]
  int v27; // [esp-24h] [ebp-F8h]
  char v28; // [esp-20h] [ebp-F4h] BYREF
  int v29; // [esp-1Ch] [ebp-F0h]
  int v30; // [esp-18h] [ebp-ECh]
  int v31; // [esp-14h] [ebp-E8h]
  int v32; // [esp-10h] [ebp-E4h]
  int v33; // [esp-Ch] [ebp-E0h]
  int v34; // [esp-8h] [ebp-DCh]
  int v35; // [esp-4h] [ebp-D8h]
  Editor *v36; // [esp+10h] [ebp-C4h] BYREF
  char *v37; // [esp+14h] [ebp-C0h]
  _DWORD v38[4]; // [esp+18h] [ebp-BCh] BYREF
  int v39; // [esp+28h] [ebp-ACh]
  float v40; // [esp+2Ch] [ebp-A8h]
  float v41; // [esp+30h] [ebp-A4h]
  float v42; // [esp+34h] [ebp-A0h]
  float v43; // [esp+38h] [ebp-9Ch]
  int v44; // [esp+3Ch] [ebp-98h] BYREF
  void *v45; // [esp+40h] [ebp-94h]
  char *v46; // [esp+4Ch] [ebp-88h]
  _BYTE v47[28]; // [esp+50h] [ebp-84h] BYREF
  _BYTE v48[28]; // [esp+6Ch] [ebp-68h] BYREF
  float v49[16]; // [esp+88h] [ebp-4Ch] BYREF
  int v50; // [esp+D0h] [ebp-4h]

  v36 = (Editor *)this;
  v3 = (Prefab *)operator new(0x494u);
  v37 = (char *)v3;
  v50 = 0;
  if ( v3 )
    v4 = Prefab::Prefab(v3, this[512]);
  else
    v4 = 0;
  v5 = (Model *)operator new(0x1C8u);
  v37 = (char *)v5;
  v50 = 1;
  if ( v5 )
    v6 = Model::Model(v5);
  else
    v6 = 0;
  v50 = -1;
  v35 = 1;
  *((_DWORD *)v4 + 179) = v6;
  v7 = std::string::c_str(a2);
  StaticModel::ImportModel(*((ModelFrame **)v4 + 179), (int)&v44, v7, v35);
  v35 = (int)&v44;
  v8 = (int)this[512] + 3188;
  v50 = 2;
  v9 = std::string::c_str(v8);
  v37 = &v28;
  std::string::string(&v28, v9);
  v46 = &v21;
  LOBYTE(v50) = 3;
  std::string::string(&v21, a2);
  LOBYTE(v50) = 2;
  Editor::CopyPrtFiles(v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, (_DWORD *)v35);
  *(_BYTE *)(*((_DWORD *)v4 + 179) + 312) = 1;
  std::string::string(v47, "Prefab");
  LOBYTE(v50) = 4;
  last_of = std::string::find_last_of(a2, "\\/", std::string::npos);
  v11 = std::string::find_last_of(a2, ".", std::string::npos);
  if ( v11 > last_of + 1 )
  {
    v12 = std::string::substr(a2, v48, last_of + 1, v11 - last_of - 1);
    LOBYTE(v50) = 5;
    std::string::operator=(v47, v12);
    LOBYTE(v50) = 4;
    std::string::~string(v48);
  }
  std::string::operator=((char *)v4 + 444, v47);
  if ( *(_DWORD *)(*((_DWORD *)v4 + 179) + 308) )
  {
    Editor::FixName(this, v4);
    qmemcpy((char *)v4 + 868, (const void *)sub_10179840(v49), 0x40u);
    v15 = *(_DWORD **)(*((_DWORD *)v4 + 179) + 308);
    v16 = v15[53];
    v15 += 53;
    *((_DWORD *)v4 + 214) = v16;
    *((_DWORD *)v4 + 215) = v15[1];
    *((_DWORD *)v4 + 216) = v15[2];
    v17 = sub_1000BC40(v49);
    v18 = (float *)(*(_DWORD *)(*((_DWORD *)v4 + 179) + 308) + 100);
    qmemcpy(v18, v17, 0x40u);
    qmemcpy((void *)(*(_DWORD *)(*((_DWORD *)v4 + 179) + 308) + 164), v18, 0x40u);
    (*(void (__thiscall **)(_DWORD, int, int))(**((_DWORD **)v4 + 179) + 28))(
      *((_DWORD *)v4 + 179),
      (int)v4 + 868,
      (int)v4 + 856);
    LOWORD(v41) = 1;
    v42 = 100.0;
    v39 = 0;
    v43 = 100.0;
    v38[1] = 0;
    LOWORD(v38[0]) = 0;
    v38[2] = 0;
    v40 = 0.0;
    v38[3] = GetTickCount();
    v19 = v36;
    v39 = *((_DWORD *)v36 + 512);
    LOBYTE(v50) = 6;
    LOBYTE(v41) = 0;
    sub_1007DA70(v38, (int)v4);
    Editor::UnSelectAll(v19);
    v20 = *((_BYTE *)v4 + 442) == 0;
    v36 = v4;
    if ( !v20 )
    {
      if ( !*((_BYTE *)v4 + 441) )
      {
        v35 = (int)&v36;
        *((_BYTE *)v19 + 2060) = 1;
        std::vector<Actor *>::push_back((_DWORD *)v19 + 561, (int *)v35);
      }
      *((_BYTE *)v4 + 441) = 1;
    }
    LOBYTE(v50) = 4;
    nullsub_1();
    LOBYTE(v50) = 2;
    std::string::~string(v47);
    if ( v45 )
      operator delete(v45);
    return v4;
  }
  else
  {
    (*(void (__thiscall **)(Prefab *, int))(*(_DWORD *)v4 + 80))(v4, 1);
    v13 = (const char *)std::string::c_str(a2);
    SeriousWarning("Prefab load failed for %s (root frame is null)", v13);
    LOBYTE(v50) = 2;
    std::string::~string(v47);
    if ( v45 )
      operator delete(v45);
    return 0;
  }
}
