/*
 * func-name: ?SetCursorVisible@Game@@QAEX_N@Z_0
 * func-address: 0x102b5820
 * callers: 0x10006384
 * callees: none
 */

void __thiscall Game::SetCursorVisible(Game *this, int a2)
{
  int v3; // ecx
  char v4; // bl
  int v5; // eax
  int v6; // ecx

  if ( Engine::HasRenderSystem(*(Engine **)this) )
  {
    v4 = a2;
    if ( !(_BYTE)a2 || (LOBYTE(a2) = 1, !*((_BYTE *)this + 5)) )
      LOBYTE(a2) = 0;
    v5 = RenderDevice::Instance(v3);
    LOBYTE(v6) = v4 == 0;
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 372))(v5, a2, v6);
    *((_BYTE *)this + 4) = v4;
  }
  else
  {
    *((_BYTE *)this + 4) = a2;
  }
}
