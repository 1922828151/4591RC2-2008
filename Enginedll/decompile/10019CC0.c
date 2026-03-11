/*
 * func-name: ?empty@?$vector@VBBox@@V?$allocator@VBBox@@@std@@@std@@QBE_NXZ
 * func-address: 0x10019cc0
 * callers: none
 * callees: none
 */

bool __thiscall std::vector<BBox>::empty(_DWORD *this)
{
  int v1; // eax

  v1 = this[1];
  return !v1 || (this[2] - v1) / 40 == 0;
}
