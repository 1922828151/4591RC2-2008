/*
 * func-name: ?capacity@?$vector@VBBox@@V?$allocator@VBBox@@@std@@@std@@QBEIXZ
 * func-address: 0x1001a1e0
 * callers: none
 * callees: none
 */

int __thiscall std::vector<BBox>::capacity(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[3] - result) / 40;
  return result;
}
