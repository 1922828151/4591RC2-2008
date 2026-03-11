/*
 * func-name: ?Initialize@LODManager@@QAEXXZ
 * func-address: 0x100e1dc0
 * callers: 0x10097ea0
 * callees: 0x100971c0, 0x1017c3a0
 */

void __thiscall LODManager::Initialize(LODManager *this)
{
  char v2; // [esp-38h] [ebp-50h] BYREF
  int v3; // [esp-34h] [ebp-4Ch]
  int v4; // [esp-30h] [ebp-48h]
  int v5; // [esp-2Ch] [ebp-44h]
  int v6; // [esp-28h] [ebp-40h]
  int v7; // [esp-24h] [ebp-3Ch]
  int v8; // [esp-20h] [ebp-38h]
  char v9; // [esp-1Ch] [ebp-34h] BYREF
  int v10; // [esp-18h] [ebp-30h]
  int v11; // [esp-14h] [ebp-2Ch]
  int v12; // [esp-10h] [ebp-28h]
  int v13; // [esp-Ch] [ebp-24h]
  int v14; // [esp-8h] [ebp-20h]
  int v15; // [esp-4h] [ebp-1Ch]
  float v16; // [esp+4h] [ebp-14h]
  char *v17; // [esp+8h] [ebp-10h]
  int v18; // [esp+14h] [ebp-4h]

  v16 = COERCE_FLOAT(&v9);
  std::string::string(&v9, &unk_101C6DF8);
  v17 = &v2;
  v18 = 0;
  std::string::string(&v2, "VisibleRange");
  LOBYTE(v18) = 1;
  Engine::Instance();
  v18 = -1;
  *(float *)this = sub_1017C3A0(v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15);
  v17 = &v9;
  std::string::string(&v9, &unk_101C6DF9);
  v16 = COERCE_FLOAT(&v2);
  v18 = 2;
  std::string::string(&v2, "LODRange");
  LOBYTE(v18) = 3;
  Engine::Instance();
  v18 = -1;
  v16 = sub_1017C3A0(v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15);
  *((float *)this + 1) = v16;
}
