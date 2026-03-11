/*
 * func-name: ?rbegin@?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@QBE?AV?$reverse_iterator@V?$_Vector_const_iterator@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@@2@XZ
 * func-address: 0x1001d1a0
 * callers: none
 * callees: none
 */

_DWORD *__thiscall std::vector<EditorVar>::rbegin(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // edi
  _DWORD *result; // eax

  v3 = this[2];
  if ( this[1] > v3 )
    invalid_parameter_noinfo();
  result = a2;
  a2[2] = v3;
  a2[1] = this;
  *a2 = 0;
  return result;
}
