/*
 * func-name: sub_1024D1E0
 * func-address: 0x1024d1e0
 * callers: 0x1001787d
 * callees: 0x102bdcd0
 */

int __thiscall sub_1024D1E0(_DWORD *this)
{
  int v2; // eax
  _DWORD v4[7]; // [esp-38h] [ebp-54h] BYREF
  char v5; // [esp-1Ch] [ebp-38h] BYREF
  int v6; // [esp-18h] [ebp-34h]
  int v7; // [esp-14h] [ebp-30h]
  int v8; // [esp-10h] [ebp-2Ch]
  int v9; // [esp-Ch] [ebp-28h]
  int v10; // [esp-8h] [ebp-24h]
  int v11; // [esp-4h] [ebp-20h]
  char *v12; // [esp+8h] [ebp-14h]
  _DWORD *v13; // [esp+Ch] [ebp-10h]
  int v14; // [esp+18h] [ebp-4h]

  v12 = &v5;
  std::string::string(&v5, "Game.AIUser");
  v13 = v4;
  v14 = 0;
  std::string::string(v4, "AIUserRebornPointFunc");
  LOBYTE(v14) = 1;
  Engine::Instance(v4[0]);
  v14 = -1;
  v2 = sub_102BDCD0(v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6], v5, v6, v7, v8, v9, v10, v11);
  this[1] = v2;
  return (v2 != 0) - 1;
}
