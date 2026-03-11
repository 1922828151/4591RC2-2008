/*
 * func-name: ?pop_back@?$vector@PAVModel@@V?$allocator@PAVModel@@@std@@@std@@QAEXXZ
 * func-address: 0x1001e990
 * callers: none
 * callees: none
 */

void __thiscall std::vector<Model *>::pop_back(_DWORD *this)
{
  int v1; // edx
  int v2; // eax

  v1 = this[1];
  if ( v1 )
  {
    v2 = this[2];
    if ( (v2 - v1) >> 2 )
      this[2] = v2 - 4;
  }
}
