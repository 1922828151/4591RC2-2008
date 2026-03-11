/*
 * func-name: ?SetEditorMode@Editor@@QAEX_N@Z
 * func-address: 0x100011f0
 * callers: none
 * callees: none
 */

void __thiscall Editor::SetEditorMode(Editor *this, bool a2)
{
  *((_BYTE *)this + 2056) = a2;
  *((_BYTE *)this + 60) = a2;
}
