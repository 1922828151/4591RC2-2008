/*
 * func-name: ??0?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@QAE@I@Z
 * func-address: 0x1002bbd0
 * callers: none
 * callees: 0x100092d0, 0x10009550, 0x10025860
 */

_DWORD *__thiscall std::vector<EditorVar>::vector<EditorVar>(_DWORD *this, unsigned int a2)
{
  struct EditorVar *v3; // eax
  _BYTE v5[96]; // [esp+4h] [ebp-6Ch] BYREF
  int v6; // [esp+6Ch] [ebp-4h]

  v3 = EditorVar::EditorVar((EditorVar *)v5);
  v6 = 0;
  std::vector<EditorVar>::_Construct_n(this, a2, v3);
  v6 = -1;
  EditorVar::~EditorVar((EditorVar *)v5);
  return this;
}
