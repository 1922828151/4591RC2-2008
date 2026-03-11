/*
 * func-name: ?IsInGame@Game@@IAE_NXZ_0
 * func-address: 0x102b5a00
 * callers: 0x1001563b
 * callees: none
 */

BOOL __thiscall Game::IsInGame(Game *this)
{
  return *((_BYTE *)this + 32) || !byte_103B80F1;
}
