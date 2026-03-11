/*
 * func-name: ??A?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@QBEABVEditorVar@@I@Z
 * func-address: 0x10019ec0
 * callers: 0x10038ca0, 0x10045740
 * callees: none
 */

int __thiscall std::vector<EditorVar>::operator[](_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 96 )
    invalid_parameter_noinfo();
  return this[1] + 96 * a2;
}
