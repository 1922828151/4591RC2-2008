/*
 * func-name: ?size@?$vector@VBBox@@V?$allocator@VBBox@@@std@@@std@@QBEIXZ
 * func-address: 0x101190c0
 * callers: 0x10025190, 0x10025440, 0x100265d0, 0x1002c070, 0x10070bb0, 0x100aea60, 0x100d2120, 0x1011a5d0
 * callees: none
 */

int __thiscall std::vector<BBox>::size(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 40;
  return result;
}
