/*
 * func-name: ?empty@?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@QBE_NXZ
 * func-address: 0x10019e80
 * callers: none
 * callees: none
 */

bool __thiscall std::vector<EditorVar>::empty(_DWORD *this)
{
  int v1; // eax

  v1 = this[1];
  return !v1 || (this[2] - v1) / 96 == 0;
}
