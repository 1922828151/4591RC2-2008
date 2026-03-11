/*
 * func-name: ?size@?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@QBEIXZ
 * func-address: 0x1000a280
 * callers: 0x1000f8d0, 0x1002bc70, 0x1002f310, 0x100e3150, 0x100e31f0, 0x100e3340, 0x100e33d0, 0x100e35c0, 0x100e3840, 0x100e5360, 0x100e5d70, 0x100e8310
 * callees: none
 */

int __thiscall std::vector<EditorVar>::size(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 96;
  return result;
}
