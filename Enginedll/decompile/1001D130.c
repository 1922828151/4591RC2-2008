/*
 * func-name: ?at@?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@QBEABVEditorVar@@I@Z
 * func-address: 0x1001d130
 * callers: none
 * callees: 0x10019f00
 */

unsigned int __thiscall std::vector<EditorVar>::at(_DWORD *this, unsigned int a2)
{
  unsigned int v3; // esi
  unsigned int v4; // esi

  v3 = this[1];
  if ( !v3 || (int)(this[2] - v3) / 96 <= a2 )
    std::vector<EditorVar>::_Xran();
  if ( v3 > this[2] )
    invalid_parameter_noinfo();
  v4 = 96 * a2 + v3;
  if ( v4 > this[2] || v4 < this[1] )
    invalid_parameter_noinfo();
  if ( v4 >= this[2] )
    invalid_parameter_noinfo();
  return v4;
}
