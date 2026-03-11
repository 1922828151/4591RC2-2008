/*
 * func-name: ?clear@?$vector@VBBox@@V?$allocator@VBBox@@@std@@@std@@QAEXXZ
 * func-address: 0x100217a0
 * callers: 0x10025190, 0x1009f270
 * callees: 0x10021730
 */

_DWORD *__thiscall std::vector<BBox>::clear(int *this)
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
  return std::vector<BBox>::erase(this, &v5, (int)this, v3, (int)this, v2);
}
