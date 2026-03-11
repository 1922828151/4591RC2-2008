/*
 * func-name: ?capacity@?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@QBEIXZ
 * func-address: 0x1000a260
 * callers: none
 * callees: none
 */

int __thiscall std::vector<EditorVar>::capacity(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[3] - result) / 96;
  return result;
}
