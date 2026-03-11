/*
 * func-name: ??0SurfaceNode@@QAE@PAVWorld@@@Z
 * func-address: 0x10165f10
 * callers: 0x10166fb0, 0x10169020, 0x1016bbf0
 * callees: 0x10009450, 0x10009550, 0x10012c20, 0x10017220, 0x10051b50
 */

SurfaceNode *__thiscall SurfaceNode::SurfaceNode(SurfaceNode *this, struct World *a2)
{
  struct EditorVar *v3; // eax
  struct EditorVar *v4; // eax
  struct EditorVar *v5; // eax
  char v7; // [esp-60h] [ebp-E4h] BYREF
  int v8; // [esp-5Ch] [ebp-E0h]
  int v9; // [esp-58h] [ebp-DCh]
  int v10; // [esp-54h] [ebp-D8h]
  int v11; // [esp-50h] [ebp-D4h]
  int v12; // [esp-4Ch] [ebp-D0h]
  int v13; // [esp-48h] [ebp-CCh]
  int v14; // [esp-44h] [ebp-C8h]
  char v15; // [esp-40h] [ebp-C4h] BYREF
  int v16; // [esp-3Ch] [ebp-C0h]
  int v17; // [esp-38h] [ebp-BCh]
  int v18; // [esp-34h] [ebp-B8h]
  int v19; // [esp-30h] [ebp-B4h]
  int v20; // [esp-2Ch] [ebp-B0h]
  int v21; // [esp-28h] [ebp-ACh]
  char v22; // [esp-24h] [ebp-A8h] BYREF
  int v23; // [esp-20h] [ebp-A4h]
  int v24; // [esp-1Ch] [ebp-A0h]
  int v25; // [esp-18h] [ebp-9Ch]
  int v26; // [esp-14h] [ebp-98h]
  int v27; // [esp-10h] [ebp-94h]
  int v28; // [esp-Ch] [ebp-90h]
  int v29; // [esp-8h] [ebp-8Ch]
  int v30; // [esp-4h] [ebp-88h]
  SurfaceNode *v31; // [esp+Ch] [ebp-78h]
  char *v32; // [esp+10h] [ebp-74h]
  char *v33; // [esp+14h] [ebp-70h]
  _DWORD v34[24]; // [esp+18h] [ebp-6Ch] BYREF
  int v35; // [esp+80h] [ebp-4h]

  v31 = this;
  Prefab::Prefab(this, a2);
  v35 = 0;
  *(_DWORD *)this = &SurfaceNode::`vftable';
  std::string::string((char *)this + 1172);
  v30 = 0;
  v29 = 1;
  LOBYTE(v35) = 1;
  std::string::string(&v22, &unk_101CE3C8);
  v32 = &v15;
  LOBYTE(v35) = 2;
  std::string::string(&v15, "Model");
  v14 = (int)this + 1172;
  v33 = &v7;
  LOBYTE(v35) = 3;
  std::string::string(&v7, "Terrain");
  LOBYTE(v35) = 1;
  v3 = (struct EditorVar *)EditorVar::EditorVar(
                             v34,
                             v7,
                             v8,
                             v9,
                             v10,
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
                             v26,
                             v27,
                             v28,
                             v29,
                             v30);
  LOBYTE(v35) = 4;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v3);
  LOBYTE(v35) = 1;
  EditorVar::~EditorVar((EditorVar *)v34);
  v30 = 0;
  v29 = 1;
  std::string::string(&v22, &unk_101CE3E4);
  v33 = &v15;
  LOBYTE(v35) = 5;
  std::string::string(&v15, "Model");
  v14 = (int)this + 1200;
  v32 = &v7;
  LOBYTE(v35) = 6;
  std::string::string(&v7, "IndexX");
  LOBYTE(v35) = 1;
  v4 = (struct EditorVar *)EditorVar::EditorVar(
                             v34,
                             v7,
                             v8,
                             v9,
                             v10,
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
                             v26,
                             v27,
                             v28,
                             v29,
                             v30);
  LOBYTE(v35) = 7;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v4);
  LOBYTE(v35) = 1;
  EditorVar::~EditorVar((EditorVar *)v34);
  v30 = 0;
  v29 = 1;
  std::string::string(&v22, &unk_101CE3FC);
  v33 = &v15;
  LOBYTE(v35) = 8;
  std::string::string(&v15, "Model");
  v14 = (int)this + 1204;
  v32 = &v7;
  LOBYTE(v35) = 9;
  std::string::string(&v7, "IndexZ");
  LOBYTE(v35) = 1;
  v5 = (struct EditorVar *)EditorVar::EditorVar(
                             v34,
                             v7,
                             v8,
                             v9,
                             v10,
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
                             v26,
                             v27,
                             v28,
                             v29,
                             v30);
  LOBYTE(v35) = 10;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v5);
  LOBYTE(v35) = 1;
  EditorVar::~EditorVar((EditorVar *)v34);
  return this;
}
