/*
 * func-name: ?back@?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@QBEABVEditorVar@@XZ
 * func-address: 0x1001ea30
 * callers: none
 * callees: none
 */

unsigned int __thiscall std::vector<EditorVar>::back(_DWORD *this)
{
  unsigned int v2; // edi

  v2 = this[2];
  if ( this[1] > v2 )
    invalid_parameter_noinfo();
  if ( v2 - 96 > this[2] || v2 - 96 < this[1] )
    invalid_parameter_noinfo();
  if ( v2 - 96 >= this[2] )
    invalid_parameter_noinfo();
  return v2 - 96;
}
