/*
 * func-name: ?at@?$vector@VBBox@@V?$allocator@VBBox@@@std@@@std@@QBEABVBBox@@I@Z
 * func-address: 0x1001d070
 * callers: none
 * callees: 0x10019d80
 */

unsigned int __thiscall std::vector<BBox>::at(_DWORD *this, unsigned int a2)
{
  unsigned int v3; // esi
  unsigned int v4; // esi

  v3 = this[1];
  if ( !v3 || (int)(this[2] - v3) / 40 <= a2 )
    std::vector<BBox>::_Xran();
  if ( v3 > this[2] )
    invalid_parameter_noinfo();
  v4 = v3 + 40 * a2;
  if ( v4 > this[2] || v4 < this[1] )
    invalid_parameter_noinfo();
  if ( v4 >= this[2] )
    invalid_parameter_noinfo();
  return v4;
}
