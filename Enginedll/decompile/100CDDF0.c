/*
 * func-name: ??A?$vector@VBBox@@V?$allocator@VBBox@@@std@@@std@@QBEABVBBox@@I@Z
 * func-address: 0x100cddf0
 * callers: 0x100aea60, 0x100efe90, 0x100f04f0, 0x101197c0
 * callees: none
 */

int __thiscall std::vector<BBox>::operator[](_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 40 )
    invalid_parameter_noinfo();
  return this[1] + 40 * a2;
}
