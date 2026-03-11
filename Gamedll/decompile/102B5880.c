/*
 * func-name: ?SetCursorDrawn@Game@@QAEX_N@Z_0
 * func-address: 0x102b5880
 * callers: 0x1000e566
 * callees: none
 */

void __thiscall Game::SetCursorDrawn(Game *this, bool a2)
{
  char v2; // dl

  v2 = *((_BYTE *)this + 4);
  *((_BYTE *)this + 5) = a2;
  Game::SetCursorVisible(this, v2);
}
