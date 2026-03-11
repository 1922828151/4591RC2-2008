/*
 * func-name: ?erase@?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@QAE?AV?$_Vector_iterator@VEditorVar@@V?$allocator@VEditorVar@@@std@@@2@V32@0@Z
 * func-address: 0x1000f820
 * callers: 0x1000f890, 0x10011a10, 0x1002be20, 0x100e4800, 0x100e68a0
 * callees: 0x1000b840, 0x1000cc00
 */

_DWORD *__thiscall std::vector<EditorVar>::erase(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = sub_1000B840(a6, this[2], a4);
    sub_1000CC00(v7, this[2]);
    this[2] = v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
