/*
 * func-name: ?end@?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@QBE?AV?$_Vector_const_iterator@VEditorVar@@V?$allocator@VEditorVar@@@std@@@2@XZ
 * func-address: 0x1001cf30
 * callers: 0x1002f5f0, 0x1002f7d0, 0x1002f9b0, 0x1002fbc0, 0x10031b20, 0x10032060, 0x100323b0, 0x10032db0
 * callees: none
 */

_DWORD *__thiscall std::vector<EditorVar>::end(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // ebx
  bool v4; // cc

  v3 = this[2];
  v4 = this[1] <= v3;
  *a2 = 0;
  if ( !v4 )
    invalid_parameter_noinfo();
  *a2 = this;
  a2[1] = v3;
  return a2;
}
