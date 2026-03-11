/*
 * func-name: Game_NewMap_0
 * func-address: 0x102b5640
 * callers: 0x10005e39
 * callees: 0x1000516e, 0x1000d6de
 */

struct Game *__cdecl Game_NewMap_0(int a1)
{
  struct Game *result; // eax
  char v2; // [esp-20h] [ebp-24h] BYREF
  int v3; // [esp-1Ch] [ebp-20h]
  int v4; // [esp-18h] [ebp-1Ch]
  int v5; // [esp-14h] [ebp-18h]
  int v6; // [esp-10h] [ebp-14h]
  int v7; // [esp-Ch] [ebp-10h]
  int v8; // [esp-8h] [ebp-Ch]
  int v9; // [esp-4h] [ebp-8h]
  char *v10; // [esp+0h] [ebp-4h]

  v9 = -1;
  v10 = &v2;
  std::string::string(&v2, a1);
  Game::Instance();
  Game::NewMap(v2, v3, v4, v5, v6, v7, v8, v9);
  result = Game::Instance();
  *((_BYTE *)result + 36) = 0;
  return result;
}
