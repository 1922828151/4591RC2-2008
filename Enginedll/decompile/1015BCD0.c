/*
 * func-name: sub_1015BCD0
 * func-address: 0x1015bcd0
 * callers: 0x1015c0b0
 * callees: 0x10009450, 0x10009550, 0x10012c20, 0x10017220, 0x10051b50, 0x1007ec70
 */

Prefab *__thiscall sub_1015BCD0(Prefab *this, struct World *a2)
{
  int v3; // eax
  struct EditorVar *v4; // eax
  struct EditorVar *v5; // eax
  struct EditorVar *v6; // eax
  struct EditorVar *v7; // eax
  struct EditorVar *v8; // eax
  char v10; // [esp-60h] [ebp-E8h] BYREF
  int v11; // [esp-5Ch] [ebp-E4h]
  int v12; // [esp-58h] [ebp-E0h]
  int v13; // [esp-54h] [ebp-DCh]
  int v14; // [esp-50h] [ebp-D8h]
  int v15; // [esp-4Ch] [ebp-D4h]
  int v16; // [esp-48h] [ebp-D0h]
  _DWORD *v17; // [esp-44h] [ebp-CCh]
  char v18; // [esp-40h] [ebp-C8h] BYREF
  int v19; // [esp-3Ch] [ebp-C4h]
  int v20; // [esp-38h] [ebp-C0h]
  int v21; // [esp-34h] [ebp-BCh]
  int v22; // [esp-30h] [ebp-B8h]
  int v23; // [esp-2Ch] [ebp-B4h]
  int v24; // [esp-28h] [ebp-B0h]
  char v25; // [esp-24h] [ebp-ACh] BYREF
  int v26; // [esp-20h] [ebp-A8h]
  int v27; // [esp-1Ch] [ebp-A4h]
  int v28; // [esp-18h] [ebp-A0h]
  int v29; // [esp-14h] [ebp-9Ch]
  int v30; // [esp-10h] [ebp-98h]
  int v31; // [esp-Ch] [ebp-94h]
  int v32; // [esp-8h] [ebp-90h]
  void *v33; // [esp-4h] [ebp-8Ch]
  Prefab *v34; // [esp+10h] [ebp-78h]
  char *v35; // [esp+14h] [ebp-74h]
  char *v36; // [esp+18h] [ebp-70h]
  _DWORD v37[24]; // [esp+1Ch] [ebp-6Ch] BYREF
  int v38; // [esp+84h] [ebp-4h]

  v34 = this;
  Prefab::Prefab(this, a2);
  v38 = 0;
  *(_DWORD *)this = &PrefabState::`vftable';
  std::string::string((char *)this + 1188);
  v33 = &unk_101CD8F7;
  LOBYTE(v38) = 1;
  *((_DWORD *)this + 293) = 0;
  *((_DWORD *)this + 294) = 0;
  *((_DWORD *)this + 295) = 0;
  *((_DWORD *)this + 296) = 0;
  std::string::operator=((char *)this + 1188, v33);
  v3 = *((_DWORD *)this + 178);
  *((_DWORD *)this + 266) = 4;
  if ( v3 && *(_BYTE *)(v3 + 80) || *((_BYTE *)Editor::Instance() + 2056) )
  {
    v33 = 0;
    v32 = 1;
    std::string::string(&v25, &unk_101CD91C);
    v35 = &v18;
    LOBYTE(v38) = 2;
    std::string::string(&v18, "State");
    v17 = (_DWORD *)((char *)this + 1172);
    v36 = &v10;
    LOBYTE(v38) = 3;
    std::string::string(&v10, "MapLeft");
    LOBYTE(v38) = 1;
    v4 = (struct EditorVar *)EditorVar::EditorVar(
                               v37,
                               v10,
                               v11,
                               v12,
                               v13,
                               v14,
                               v15,
                               v16,
                               (int)v17,
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
                               v30,
                               v31,
                               v32,
                               (char)v33);
    LOBYTE(v38) = 4;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v4);
    LOBYTE(v38) = 1;
    EditorVar::~EditorVar((EditorVar *)v37);
    v33 = 0;
    v32 = 1;
    std::string::string(&v25, &unk_101CD91D);
    v36 = &v18;
    LOBYTE(v38) = 5;
    std::string::string(&v18, "State");
    v17 = (_DWORD *)((char *)this + 1176);
    v35 = &v10;
    LOBYTE(v38) = 6;
    std::string::string(&v10, "MapRight");
    LOBYTE(v38) = 1;
    v5 = (struct EditorVar *)EditorVar::EditorVar(
                               v37,
                               v10,
                               v11,
                               v12,
                               v13,
                               v14,
                               v15,
                               v16,
                               (int)v17,
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
                               v30,
                               v31,
                               v32,
                               (char)v33);
    LOBYTE(v38) = 7;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v5);
    LOBYTE(v38) = 1;
    EditorVar::~EditorVar((EditorVar *)v37);
    v33 = 0;
    v32 = 1;
    std::string::string(&v25, &unk_101CD91E);
    v36 = &v18;
    LOBYTE(v38) = 8;
    std::string::string(&v18, "State");
    v17 = (_DWORD *)((char *)this + 1180);
    v35 = &v10;
    LOBYTE(v38) = 9;
    std::string::string(&v10, "MapTop");
    LOBYTE(v38) = 1;
    v6 = (struct EditorVar *)EditorVar::EditorVar(
                               v37,
                               v10,
                               v11,
                               v12,
                               v13,
                               v14,
                               v15,
                               v16,
                               (int)v17,
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
                               v30,
                               v31,
                               v32,
                               (char)v33);
    LOBYTE(v38) = 10;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v6);
    LOBYTE(v38) = 1;
    EditorVar::~EditorVar((EditorVar *)v37);
    v33 = 0;
    v32 = 1;
    std::string::string(&v25, &unk_101CD91F);
    v36 = &v18;
    LOBYTE(v38) = 11;
    std::string::string(&v18, "State");
    v17 = (_DWORD *)((char *)this + 1184);
    v35 = &v10;
    LOBYTE(v38) = 12;
    std::string::string(&v10, "MapBottom");
    LOBYTE(v38) = 1;
    v7 = (struct EditorVar *)EditorVar::EditorVar(
                               v37,
                               v10,
                               v11,
                               v12,
                               v13,
                               v14,
                               v15,
                               v16,
                               (int)v17,
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
                               v30,
                               v31,
                               v32,
                               (char)v33);
    LOBYTE(v38) = 13;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v7);
    LOBYTE(v38) = 1;
    EditorVar::~EditorVar((EditorVar *)v37);
    v33 = 0;
    v32 = 1;
    std::string::string(&v25, &unk_101CD926);
    v36 = &v18;
    LOBYTE(v38) = 14;
    std::string::string(&v18, "State");
    v17 = (_DWORD *)((char *)this + 1188);
    v35 = &v10;
    LOBYTE(v38) = 15;
    std::string::string(&v10, "MapFilename");
    LOBYTE(v38) = 1;
    v8 = (struct EditorVar *)EditorVar::EditorVar(
                               v37,
                               v10,
                               v11,
                               v12,
                               v13,
                               v14,
                               v15,
                               v16,
                               (int)v17,
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
                               v30,
                               v31,
                               v32,
                               (char)v33);
    LOBYTE(v38) = 16;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v8);
    LOBYTE(v38) = 1;
    EditorVar::~EditorVar((EditorVar *)v37);
  }
  return this;
}
