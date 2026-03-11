/*
 * func-name: ?SplitFrame@Editor@@QAEXPAUModelFrame@@@Z
 * func-address: 0x10080a00
 * callers: 0x10080a00, 0x10082490
 * callees: 0x10051b50, 0x10080a00, 0x1009d930, 0x1009f940, 0x100eeba0, 0x100f2ca0, 0x101786e0, 0x10179840, 0x1017ad40, 0x101a251c, 0x101a2534
 */

void __thiscall Editor::SplitFrame(struct World **this, struct ModelFrame **a2)
{
  Prefab *v3; // eax
  Prefab *v4; // ebp
  int v5; // eax
  Model *v6; // eax
  Model *v7; // eax
  Model *v8; // ecx
  void (__thiscall *v9)(Model *); // eax
  struct ModelFrame *v10; // eax
  int v11; // edx
  int v12; // ecx
  StaticModel *v13; // ecx
  struct ModelFrame *v14; // edx
  struct World **v15; // esi
  int v16; // ecx
  struct ModelFrame *v17; // ebx
  _DWORD v18[6]; // [esp-18h] [ebp-DCh] BYREF
  size_t v19; // [esp+0h] [ebp-C4h]
  Prefab *v20; // [esp+14h] [ebp-B0h]
  Editor *v21; // [esp+18h] [ebp-ACh]
  _BYTE v22[28]; // [esp+1Ch] [ebp-A8h] BYREF
  float v23[16]; // [esp+38h] [ebp-8Ch] BYREF
  char v24; // [esp+78h] [ebp-4Ch] BYREF
  int v25; // [esp+C0h] [ebp-4h]

  v21 = (Editor *)this;
  v3 = (Prefab *)operator new(0x494u);
  v20 = v3;
  v25 = 0;
  if ( v3 )
    v4 = Prefab::Prefab(v3, this[512]);
  else
    v4 = 0;
  v20 = (Prefab *)v18;
  v25 = -1;
  std::string::string(v18, "SplitedFrame");
  v5 = sub_1017AD40(v22, v18[0]);
  v25 = 1;
  std::string::operator=((char *)v4 + 444, v5);
  v25 = -1;
  std::string::~string(v22);
  v6 = (Model *)operator new(0x1C8u);
  v20 = v6;
  v25 = 2;
  if ( v6 )
    v7 = Model::Model(v6);
  else
    v7 = 0;
  *((_DWORD *)v4 + 179) = v7;
  v8 = v7;
  v9 = *(void (__thiscall **)(Model *))(*(_DWORD *)v7 + 8);
  v25 = -1;
  v9(v8);
  v10 = ModelFrame::Clone((ModelFrame *)a2, *((struct StaticModel **)v4 + 179), 1, 0);
  v11 = *((_DWORD *)v4 + 179);
  v19 = 64;
  *(_DWORD *)(v11 + 308) = v10;
  memset(v23, 0, v19);
  sub_101786E0(1.0);
  v12 = *((_DWORD *)v4 + 179);
  v23[15] = 1.0;
  qmemcpy((void *)(*(_DWORD *)(v12 + 308) + 100), v23, 0x40u);
  *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v4 + 179) + 308) + 360) = 0;
  *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v4 + 179) + 308) + 356) = 0;
  *(_BYTE *)(*((_DWORD *)v4 + 179) + 312) = 1;
  v13 = (StaticModel *)*((_DWORD *)v4 + 179);
  *((_DWORD *)v4 + 183) = 2;
  StaticModel::UpdateWorldBBox(v13);
  *((_DWORD *)v4 + 214) = a2[53];
  *((_DWORD *)v4 + 215) = a2[54];
  v14 = a2[55];
  v19 = (size_t)&v24;
  *((_DWORD *)v4 + 216) = v14;
  qmemcpy((char *)v4 + 868, (const void *)sub_10179840(v19), 0x40u);
  (*(void (__thiscall **)(Prefab *, _DWORD))(*(_DWORD *)v4 + 92))(v4, *((_DWORD *)v4 + 179));
  v15 = (struct World **)v21;
  v16 = *((_DWORD *)v4 + 179);
  *((_BYTE *)v4 + 440) = 1;
  ModelFrame::FixNames(*(ModelFrame **)(v16 + 308), v15[512], 0);
  if ( a2[89] )
    Editor::SplitFrame((Editor *)v15, a2[89]);
  v17 = a2[90];
  if ( v17 )
    Editor::SplitFrame((Editor *)v15, v17);
}
