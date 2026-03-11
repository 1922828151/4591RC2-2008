/*
 * func-name: ?ReadyRightClickContextMenu@Editor@@QAE_NXZ
 * func-address: 0x1007fb70
 * callers: none
 * callees: 0x100db0e0
 */

bool __thiscall Editor::ReadyRightClickContextMenu(Editor *this)
{
  return Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 14), 0);
}
