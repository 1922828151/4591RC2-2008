/*
 * func-name: ??0ActorInstancer@@QAE@PAVWorld@@@Z
 * func-address: 0x100544f0
 * callers: 0x1009b3b0
 * callees: 0x10009450, 0x10009550, 0x10012c20, 0x10050b80, 0x10054b30
 */

ActorInstancer *__thiscall ActorInstancer::ActorInstancer(ActorInstancer *this, struct World *a2)
{
  struct EditorVar *v3; // eax
  struct EditorVar *v4; // eax
  char v6; // [esp-60h] [ebp-E8h] BYREF
  int v7; // [esp-5Ch] [ebp-E4h]
  int v8; // [esp-58h] [ebp-E0h]
  int v9; // [esp-54h] [ebp-DCh]
  int v10; // [esp-50h] [ebp-D8h]
  int v11; // [esp-4Ch] [ebp-D4h]
  int v12; // [esp-48h] [ebp-D0h]
  int v13; // [esp-44h] [ebp-CCh]
  char v14; // [esp-40h] [ebp-C8h] BYREF
  int v15; // [esp-3Ch] [ebp-C4h]
  int v16; // [esp-38h] [ebp-C0h]
  int v17; // [esp-34h] [ebp-BCh]
  int v18; // [esp-30h] [ebp-B8h]
  int v19; // [esp-2Ch] [ebp-B4h]
  void *v20; // [esp-28h] [ebp-B0h]
  char v21; // [esp-24h] [ebp-ACh] BYREF
  int v22; // [esp-20h] [ebp-A8h]
  int v23; // [esp-1Ch] [ebp-A4h]
  int v24; // [esp-18h] [ebp-A0h]
  int v25; // [esp-14h] [ebp-9Ch]
  int v26; // [esp-10h] [ebp-98h]
  int v27; // [esp-Ch] [ebp-94h]
  int v28; // [esp-8h] [ebp-90h]
  int v29; // [esp-4h] [ebp-8Ch]
  ActorInstancer *v30; // [esp+10h] [ebp-78h]
  char *v31; // [esp+14h] [ebp-74h]
  char *v32; // [esp+18h] [ebp-70h]
  _DWORD v33[24]; // [esp+1Ch] [ebp-6Ch] BYREF
  int v34; // [esp+84h] [ebp-4h]

  v30 = this;
  Actor::Actor(this, a2);
  v34 = 0;
  *(_DWORD *)this = &ActorInstancer::`vftable';
  std::string::string((char *)this + 1056);
  std::string::string((char *)this + 1084);
  v29 = 0;
  v28 = 1;
  a2 = (struct World *)&v21;
  v20 = &unk_101C08A4;
  LOBYTE(v34) = 2;
  *((_BYTE *)this + 442) = 0;
  *((_BYTE *)this + 816) = 1;
  *((_BYTE *)this + 724) = 1;
  *((_BYTE *)this + 440) = 1;
  *((_BYTE *)this + 1052) = 0;
  *((_BYTE *)this + 1053) = 0;
  *((_BYTE *)this + 725) = 1;
  std::string::string(&v21, v20);
  v31 = &v14;
  LOBYTE(v34) = 3;
  std::string::string(&v14, "General");
  v13 = (int)this + 1056;
  v32 = &v6;
  LOBYTE(v34) = 4;
  std::string::string(&v6, "ActorSceneFile");
  LOBYTE(v34) = 2;
  v3 = (struct EditorVar *)EditorVar::EditorVar(
                             v33,
                             v6,
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
                             (int)v20,
                             v21,
                             v22,
                             v23,
                             v24,
                             v25,
                             v26,
                             v27,
                             v28,
                             v29);
  LOBYTE(v34) = 5;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v3);
  LOBYTE(v34) = 2;
  EditorVar::~EditorVar((EditorVar *)v33);
  v29 = 0;
  v28 = 1;
  a2 = (struct World *)&v21;
  std::string::string(&v21, &unk_101C08A5);
  v32 = &v14;
  LOBYTE(v34) = 6;
  std::string::string(&v14, "General");
  LOBYTE(v34) = 7;
  v13 = (int)this + 1084;
  v31 = &v6;
  std::string::string(&v6, "ActorName");
  LOBYTE(v34) = 2;
  v4 = (struct EditorVar *)EditorVar::EditorVar(
                             v33,
                             v6,
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
                             (int)v20,
                             v21,
                             v22,
                             v23,
                             v24,
                             v25,
                             v26,
                             v27,
                             v28,
                             v29);
  LOBYTE(v34) = 8;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v4);
  LOBYTE(v34) = 2;
  EditorVar::~EditorVar((EditorVar *)v33);
  a2 = this;
  sub_10054B30((int)&ActorInstancer::ActorInstancers, (int)&a2);
  return this;
}
