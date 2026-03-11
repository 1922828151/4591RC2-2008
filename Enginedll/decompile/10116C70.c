/*
 * func-name: ??0PrefabInstance@@QAE@PAVWorld@@@Z
 * func-address: 0x10116c70
 * callers: 0x10084f60, 0x100853c0, 0x1009b260
 * callees: 0x10009450, 0x10009550, 0x10012c20, 0x10051b50, 0x100f2ca0, 0x101a2534
 */

PrefabInstance *__thiscall PrefabInstance::PrefabInstance(PrefabInstance *this, struct World *a2)
{
  Model *v3; // eax
  Model *v4; // eax
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
  const char *v21; // [esp-28h] [ebp-ACh]
  char v22; // [esp-24h] [ebp-A8h] BYREF
  int v23; // [esp-20h] [ebp-A4h]
  int v24; // [esp-1Ch] [ebp-A0h]
  int v25; // [esp-18h] [ebp-9Ch]
  int v26; // [esp-14h] [ebp-98h]
  int v27; // [esp-10h] [ebp-94h]
  int v28; // [esp-Ch] [ebp-90h]
  int v29; // [esp-8h] [ebp-8Ch]
  int v30; // [esp-4h] [ebp-88h]
  PrefabInstance *v31; // [esp+Ch] [ebp-78h]
  char *v32; // [esp+10h] [ebp-74h]
  char *v33; // [esp+14h] [ebp-70h]
  _DWORD v34[24]; // [esp+18h] [ebp-6Ch] BYREF
  int v35; // [esp+80h] [ebp-4h]

  v31 = this;
  Prefab::Prefab(this, a2);
  v35 = 0;
  *(_DWORD *)this = &PrefabInstance::`vftable';
  std::string::string((char *)this + 1172);
  v3 = (Model *)operator new(0x1C8u);
  LOBYTE(v35) = 2;
  if ( v3 )
    v4 = Model::Model(v3);
  else
    v4 = 0;
  v30 = 0;
  v29 = 1;
  v21 = "Filename of XML Model located in 'Models' subdirectory to load for this Prefab Instance.";
  LOBYTE(v35) = 1;
  *((_DWORD *)this + 179) = v4;
  *((_BYTE *)this + 1080) = 1;
  *((_BYTE *)this + 726) = 0;
  *((_BYTE *)this + 440) = 1;
  std::string::string(&v22, v21);
  v32 = &v15;
  LOBYTE(v35) = 3;
  std::string::string(&v15, "Prefab Instance");
  v14 = (int)this + 1172;
  v33 = &v7;
  LOBYTE(v35) = 4;
  std::string::string(&v7, "ModelFilename");
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
                             (int)v21,
                             v22,
                             v23,
                             v24,
                             v25,
                             v26,
                             v27,
                             v28,
                             v29,
                             v30);
  LOBYTE(v35) = 5;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v5);
  LOBYTE(v35) = 1;
  EditorVar::~EditorVar((EditorVar *)v34);
  return this;
}
