/*
 * func-name: ?back@?$vector@VBBox@@V?$allocator@VBBox@@@std@@@std@@QBEABVBBox@@XZ
 * func-address: 0x1001d350
 * callers: none
 * callees: none
 */

unsigned int __thiscall std::vector<BBox>::back(_DWORD *this)
{
  unsigned int v2; // edi

  v2 = this[2];
  if ( this[1] > v2 )
    invalid_parameter_noinfo();
  if ( v2 - 40 > this[2] || v2 - 40 < this[1] )
    invalid_parameter_noinfo();
  if ( v2 - 40 >= this[2] )
    invalid_parameter_noinfo();
  return v2 - 40;
}
