/*
 * func-name: ??0Prefab@@QAE@PAVWorld@@@Z
 * func-address: 0x10051b50
 * callers: 0x10038ca0, 0x10045740, 0x10080a00, 0x10084160, 0x100846a0, 0x1009b180, 0x100ea5d0, 0x10116c70, 0x10137050, 0x1015bcd0, 0x10162f00, 0x101655b0, 0x10165f10
 * callees: 0x10009550, 0x10012c20, 0x10017220, 0x10050b80, 0x101786e0, 0x101a251c, 0x101a2534
 */

Prefab *__thiscall Prefab::Prefab(Prefab *this, struct World *a2)
{
  _DWORD *v3; // eax
  struct EditorVar *v4; // eax
  char v6; // [esp-5Ch] [ebp-E8h] BYREF
  int v7; // [esp-58h] [ebp-E4h]
  int v8; // [esp-54h] [ebp-E0h]
  int v9; // [esp-50h] [ebp-DCh]
  int v10; // [esp-4Ch] [ebp-D8h]
  int v11; // [esp-48h] [ebp-D4h]
  int v12; // [esp-44h] [ebp-D0h]
  int v13; // [esp-40h] [ebp-CCh]
  char v14; // [esp-3Ch] [ebp-C8h] BYREF
  int v15; // [esp-38h] [ebp-C4h]
  int v16; // [esp-34h] [ebp-C0h]
  int v17; // [esp-30h] [ebp-BCh]
  int v18; // [esp-2Ch] [ebp-B8h]
  int v19; // [esp-28h] [ebp-B4h]
  const char *v20; // [esp-24h] [ebp-B0h]
  char v21; // [esp-20h] [ebp-ACh] BYREF
  int v22; // [esp-1Ch] [ebp-A8h]
  int v23; // [esp-18h] [ebp-A4h]
  int v24; // [esp-14h] [ebp-A0h]
  int v25; // [esp-10h] [ebp-9Ch]
  int v26; // [esp-Ch] [ebp-98h]
  void *v27; // [esp-8h] [ebp-94h]
  int v28; // [esp-4h] [ebp-90h]
  size_t v29; // [esp+0h] [ebp-8Ch]
  Prefab *v30; // [esp+14h] [ebp-78h]
  char *v31; // [esp+18h] [ebp-74h]
  char *v32; // [esp+1Ch] [ebp-70h]
  _DWORD v33[24]; // [esp+20h] [ebp-6Ch] BYREF
  int v34; // [esp+88h] [ebp-4h]

  v30 = this;
  Actor::Actor(this, a2);
  *(_DWORD *)this = &Prefab::`vftable';
  *((float *)this + 272) = 0.0;
  *((float *)this + 273) = 0.0;
  *((float *)this + 274) = 0.0;
  v29 = 64;
  *((float *)this + 276) = 0.0;
  v28 = 0;
  *((float *)this + 277) = 0.0;
  v27 = (char *)this + 1088;
  *((float *)this + 278) = 0.0;
  v34 = 0;
  *((float *)this + 280) = 0.0;
  *((float *)this + 281) = 0.0;
  *((float *)this + 282) = 0.0;
  *((float *)this + 284) = 0.0;
  *((float *)this + 285) = 0.0;
  *((float *)this + 286) = 0.0;
  memset(v27, v28, v29);
  sub_101786E0(1.0);
  *((float *)this + 287) = 1.0;
  *((_DWORD *)this + 289) = 0;
  *((_DWORD *)this + 290) = 0;
  *((_DWORD *)this + 291) = 0;
  LOBYTE(v34) = 1;
  v3 = operator new(8u);
  if ( v3 )
  {
    *v3 = &PrefabAsyncReport::`vftable';
    v3[1] = this;
  }
  else
  {
    v3 = 0;
  }
  v29 = 0;
  *((float *)this + 267) = 0.0;
  v28 = 1;
  *((float *)this + 271) = 0.0;
  *((float *)this + 207) = 1.0;
  *((float *)this + 264) = 1.0;
  v20 = "Physics's Group: PG_GHOST(0), PG_STATIC(1), PG_DYNAMIC(2), PG_TERRAIN(3), PG_STATE(4), PG_CONTROLLER(5), PG_WATE"
        "R(6), PG_CUSTOM0(6)";
  *((float *)this + 265) = 1.0;
  *((_DWORD *)this + 268) = v3;
  *((_DWORD *)this + 269) = -1;
  *((_BYTE *)this + 696) = 1;
  *((_BYTE *)this + 725) = 1;
  *((_BYTE *)this + 726) = 1;
  *((_BYTE *)this + 353) = 1;
  *((_DWORD *)this + 182) = 1;
  *((_BYTE *)this + 1052) = 0;
  *((_BYTE *)this + 1053) = 0;
  *((_DWORD *)this + 266) = 1;
  *((_BYTE *)this + 1080) = 0;
  std::string::string(&v21, v20);
  v31 = &v14;
  LOBYTE(v34) = 2;
  std::string::string(&v14, "Collision");
  v13 = (int)this + 1064;
  v32 = &v6;
  LOBYTE(v34) = 3;
  std::string::string(&v6, "PhysicsGroup");
  LOBYTE(v34) = 1;
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
                             (int)v27,
                             v28,
                             v29);
  LOBYTE(v34) = 4;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v4);
  LOBYTE(v34) = 1;
  EditorVar::~EditorVar((EditorVar *)v33);
  return this;
}
