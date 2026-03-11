/*
 * func-name: ?pop_back@?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@QAEXXZ
 * func-address: 0x10025a60
 * callers: none
 * callees: 0x1000cc00
 */

int __thiscall std::vector<EditorVar>::pop_back(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
  {
    result = (this[2] - result) / 96;
    if ( result )
    {
      result = sub_1000CC00(this[2] - 96, this[2]);
      this[2] -= 96;
    }
  }
  return result;
}
