/*
 * func-name: sub_102B4CF0
 * func-address: 0x102b4cf0
 * callers: 0x10005d7b
 * callees: 0x1000516e
 */

void __cdecl sub_102B4CF0(char *String)
{
  struct Game *v1; // eax
  float v2; // [esp+4h] [ebp-4h]

  v2 = atof(String);
  v1 = Game::Instance();
  World::SetPartitionHeight(*((World **)v1 + 25), v2);
}
