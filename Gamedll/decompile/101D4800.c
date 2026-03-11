/*
 * func-name: sub_101D4800
 * func-address: 0x101d4800
 * callers: 0x1000befb
 * callees: 0x1000516e, 0x1000d6de
 */

char __thiscall sub_101D4800(void *this, int a2)
{
  char v3; // [esp-20h] [ebp-30h] BYREF
  int v4; // [esp-1Ch] [ebp-2Ch]
  int v5; // [esp-18h] [ebp-28h]
  int v6; // [esp-14h] [ebp-24h]
  int v7; // [esp-10h] [ebp-20h]
  int v8; // [esp-Ch] [ebp-1Ch]
  int v9; // [esp-8h] [ebp-18h]
  int v10; // [esp-4h] [ebp-14h]
  int v11; // [esp+Ch] [ebp-4h]

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 8))(this);
  v10 = *(_DWORD *)(a2 + 4);
  std::string::string(&v3, (void *)(a2 + 8));
  v11 = 0;
  Game::Instance();
  v11 = -1;
  Game::NewMap(v3, v4, v5, v6, v7, v8, v9, v10);
  return 1;
}
