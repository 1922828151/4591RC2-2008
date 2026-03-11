/*
 * func-name: sub_101D4880
 * func-address: 0x101d4880
 * callers: 0x10009bec
 * callees: 0x1000516e
 */

char sub_101D4880()
{
  struct Game *v0; // eax

  if ( *((_DWORD *)Game::Instance() + 25) )
  {
    v0 = Game::Instance();
    World::UnLoad(*((World **)v0 + 25));
  }
  return 1;
}
