/*
 * func-name: ?resize@?$vector@VBBox@@V?$allocator@VBBox@@@std@@@std@@QAEXI@Z
 * func-address: 0x1002ed10
 * callers: none
 * callees: 0x10001440, 0x1002b7b0
 */

int __thiscall std::vector<BBox>::resize(int *this, unsigned int a2)
{
  int v4[12]; // [esp-28h] [ebp-30h] BYREF

  v4[11] = (int)v4;
  sub_10001440((float *)v4);
  return std::vector<BBox>::resize(this, a2, v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6], v4[7], v4[8], v4[9]);
}
