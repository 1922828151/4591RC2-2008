/*
 * func-name: ??0TerrainNode@@QAE@PAVWorld@@@Z
 * func-address: 0x101655b0
 * callers: 0x10169020, 0x1016bb80
 * callees: 0x10009550, 0x10012c20, 0x10017220, 0x1001dbb0, 0x10051b50
 */

TerrainNode *__thiscall TerrainNode::TerrainNode(TerrainNode *this, struct World *a2)
{
  struct EditorVar *v3; // eax
  struct EditorVar *v4; // eax
  struct EditorVar *v5; // eax
  struct EditorVar *v6; // eax
  char v8; // [esp-60h] [ebp-E8h] BYREF
  int v9; // [esp-5Ch] [ebp-E4h]
  int v10; // [esp-58h] [ebp-E0h]
  int v11; // [esp-54h] [ebp-DCh]
  int v12; // [esp-50h] [ebp-D8h]
  int v13; // [esp-4Ch] [ebp-D4h]
  int v14; // [esp-48h] [ebp-D0h]
  int v15; // [esp-44h] [ebp-CCh]
  char v16; // [esp-40h] [ebp-C8h] BYREF
  int v17; // [esp-3Ch] [ebp-C4h]
  int v18; // [esp-38h] [ebp-C0h]
  int v19; // [esp-34h] [ebp-BCh]
  int v20; // [esp-30h] [ebp-B8h]
  int v21; // [esp-2Ch] [ebp-B4h]
  const char *v22; // [esp-28h] [ebp-B0h]
  char v23; // [esp-24h] [ebp-ACh] BYREF
  int v24; // [esp-20h] [ebp-A8h]
  int v25; // [esp-1Ch] [ebp-A4h]
  int v26; // [esp-18h] [ebp-A0h]
  int v27; // [esp-14h] [ebp-9Ch]
  int v28; // [esp-10h] [ebp-98h]
  int v29; // [esp-Ch] [ebp-94h]
  int v30; // [esp-8h] [ebp-90h]
  int v31; // [esp-4h] [ebp-8Ch]
  TerrainNode *v32; // [esp+10h] [ebp-78h]
  char *v33; // [esp+14h] [ebp-74h]
  char *v34; // [esp+18h] [ebp-70h]
  _DWORD v35[24]; // [esp+1Ch] [ebp-6Ch] BYREF
  int v36; // [esp+84h] [ebp-4h]

  v32 = this;
  Prefab::Prefab(this, a2);
  *(_DWORD *)this = &TerrainNode::`vftable';
  v36 = 0;
  *((_DWORD *)this + 296) = 0;
  *((_DWORD *)this + 297) = 0;
  *((_DWORD *)this + 298) = 0;
  *((_DWORD *)this + 299) = 0;
  *((_DWORD *)this + 300) = 0;
  *((_DWORD *)this + 301) = 0;
  *((_DWORD *)this + 302) = 0;
  *((_DWORD *)this + 303) = 0;
  *((_DWORD *)this + 309) = sub_1001DBB0();
  *((_DWORD *)this + 310) = 0;
  *((_DWORD *)this + 312) = sub_1001DBB0();
  *((_DWORD *)this + 313) = 0;
  v31 = 0;
  v30 = 0;
  v22 = "Pos of X's stags.";
  LOBYTE(v36) = 3;
  *((_DWORD *)this + 304) = 0;
  *((_DWORD *)this + 305) = 0;
  *((_DWORD *)this + 306) = 0;
  *((_DWORD *)this + 307) = 0;
  *((_DWORD *)this + 293) = -1;
  *((_DWORD *)this + 294) = -1;
  *((_DWORD *)this + 314) = 0;
  *((_DWORD *)this + 315) = 0;
  *((_DWORD *)this + 266) = 3;
  std::string::string(&v23, v22);
  v33 = &v16;
  LOBYTE(v36) = 4;
  std::string::string(&v16, "Model");
  v15 = (int)this + 1172;
  v34 = &v8;
  LOBYTE(v36) = 5;
  std::string::string(&v8, "PosX");
  LOBYTE(v36) = 3;
  v3 = (struct EditorVar *)EditorVar::EditorVar(
                             v35,
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
                             (int)v22,
                             v23,
                             v24,
                             v25,
                             v26,
                             v27,
                             v28,
                             v29,
                             v30,
                             v31);
  LOBYTE(v36) = 6;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v3);
  LOBYTE(v36) = 3;
  EditorVar::~EditorVar((EditorVar *)v35);
  v31 = 0;
  v30 = 0;
  std::string::string(&v23, "Pos of Z's stags.");
  v34 = &v16;
  LOBYTE(v36) = 7;
  std::string::string(&v16, "Model");
  v15 = (int)this + 1176;
  v33 = &v8;
  LOBYTE(v36) = 8;
  std::string::string(&v8, "PosZ");
  LOBYTE(v36) = 3;
  v4 = (struct EditorVar *)EditorVar::EditorVar(
                             v35,
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
                             (int)v22,
                             v23,
                             v24,
                             v25,
                             v26,
                             v27,
                             v28,
                             v29,
                             v30,
                             v31);
  LOBYTE(v36) = 9;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v4);
  LOBYTE(v36) = 3;
  EditorVar::~EditorVar((EditorVar *)v35);
  v31 = 0;
  v30 = 0;
  std::string::string(&v23, "Parent's Pos in X.");
  v34 = &v16;
  LOBYTE(v36) = 10;
  std::string::string(&v16, "Model");
  v15 = (int)this + 1256;
  v33 = &v8;
  LOBYTE(v36) = 11;
  std::string::string(&v8, "ParentPosX");
  LOBYTE(v36) = 3;
  v5 = (struct EditorVar *)EditorVar::EditorVar(
                             v35,
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
                             (int)v22,
                             v23,
                             v24,
                             v25,
                             v26,
                             v27,
                             v28,
                             v29,
                             v30,
                             v31);
  LOBYTE(v36) = 12;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v5);
  LOBYTE(v36) = 3;
  EditorVar::~EditorVar((EditorVar *)v35);
  v31 = 0;
  v30 = 0;
  std::string::string(&v23, "Parent's Pos in Z.");
  LOBYTE(v36) = 13;
  v34 = &v16;
  std::string::string(&v16, "Model");
  v15 = (int)this + 1260;
  v33 = &v8;
  LOBYTE(v36) = 14;
  std::string::string(&v8, "ParentPosZ");
  LOBYTE(v36) = 3;
  v6 = (struct EditorVar *)EditorVar::EditorVar(
                             v35,
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
                             (int)v22,
                             v23,
                             v24,
                             v25,
                             v26,
                             v27,
                             v28,
                             v29,
                             v30,
                             v31);
  LOBYTE(v36) = 15;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v6);
  LOBYTE(v36) = 3;
  EditorVar::~EditorVar((EditorVar *)v35);
  return this;
}
