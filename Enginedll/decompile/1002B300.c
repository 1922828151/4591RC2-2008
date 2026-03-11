/*
 * func-name: ??0?$vector@PAVEditorVar@@V?$allocator@PAVEditorVar@@@std@@@std@@QAE@I@Z
 * func-address: 0x1002b300
 * callers: none
 * callees: 0x10024e30
 */

_DWORD *__thiscall std::vector<EditorVar *>::vector<EditorVar *>(_DWORD *this, unsigned int a2)
{
  int v4; // [esp+4h] [ebp-4h] BYREF

  v4 = 0;
  std::vector<EditorVar *>::_Construct_n(this, a2, &v4);
  return this;
}
