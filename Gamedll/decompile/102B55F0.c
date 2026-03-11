/*
 * func-name: Game_Initialize_0
 * func-address: 0x102b55f0
 * callers: 0x1000e10b
 * callees: 0x1000622b
 */

int __cdecl Game_Initialize_0(int a1, int a2, int a3, int a4)
{
  char v5; // [esp-1Ch] [ebp-20h] BYREF
  int v6; // [esp-18h] [ebp-1Ch]
  char v7; // [esp-14h] [ebp-18h]
  int v8; // [esp-10h] [ebp-14h]
  int v9; // [esp-Ch] [ebp-10h]
  int v10; // [esp-8h] [ebp-Ch]
  int v11; // [esp-4h] [ebp-8h]
  char *v12; // [esp+0h] [ebp-4h]

  v12 = &v5;
  std::string::string(&v5, a4);
  return Game::Initialize((Game *)&unk_103B80D0, a1, a2, a3, v5, v6, v7, v8, v9, v10, v11);
}
