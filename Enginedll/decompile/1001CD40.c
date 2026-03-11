/*
 * func-name: ?front@?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@QBEABVEditorVar@@XZ
 * func-address: 0x1001cd40
 * callers: none
 * callees: none
 */

unsigned int __thiscall std::vector<EditorVar>::front(_DWORD *this)
{
  unsigned int v2; // edi
  bool v3; // cf

  v2 = this[1];
  v3 = v2 < this[2];
  if ( v2 > this[2] )
  {
    invalid_parameter_noinfo();
    v3 = v2 < this[2];
  }
  if ( !v3 )
    invalid_parameter_noinfo();
  return v2;
}
