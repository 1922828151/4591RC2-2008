/*
 * func-name: ?erase@?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@QAE?AV?$_Vector_iterator@VEditorVar@@V?$allocator@VEditorVar@@@std@@@2@V32@@Z
 * func-address: 0x10025ab0
 * callers: none
 * callees: 0x1000b840, 0x1000cc00
 */

_DWORD *__thiscall std::vector<EditorVar>::erase(int *this, _DWORD *a2, int a3, int a4)
{
  _DWORD *result; // eax

  sub_1000B840(a4 + 96, this[2], a4);
  sub_1000CC00(this[2] - 96, this[2]);
  result = a2;
  this[2] -= 96;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
