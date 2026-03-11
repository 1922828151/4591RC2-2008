/*
 * func-name: ?PopRedo@Editor@@QAE_NXZ
 * func-address: 0x1008f350
 * callers: none
 * callees: 0x1008e470
 */

char __thiscall Editor::PopRedo(Editor *this)
{
  return Editor::PopUndoRedo(this, (int)this + 2156, (_DWORD *)this + 536);
}
