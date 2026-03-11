/*
 * func-name: ?PopUndo@Editor@@QAE_NXZ
 * func-address: 0x1008f330
 * callers: none
 * callees: 0x1008e470
 */

char __thiscall Editor::PopUndo(Editor *this)
{
  return Editor::PopUndoRedo(this, (int)this + 2144, (_DWORD *)this + 539);
}
