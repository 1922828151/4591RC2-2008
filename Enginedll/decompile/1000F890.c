/*
 * func-name: ?clear@?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@QAEXXZ
 * func-address: 0x1000f890
 * callers: 0x1002bc70
 * callees: 0x1000f820
 */

_DWORD *__thiscall std::vector<EditorVar>::clear(int *this)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  int v5; // [esp+10h] [ebp-8h] BYREF

  v2 = this[2];
  if ( this[1] > v2 )
    invalid_parameter_noinfo();
  v3 = this[1];
  if ( v3 > this[2] )
    invalid_parameter_noinfo();
  return std::vector<EditorVar>::erase(this, &v5, (int)this, v3, (int)this, v2);
}
