/*
 * func-name: ?empty@?$vector@PAVModel@@V?$allocator@PAVModel@@@std@@@std@@QBE_NXZ
 * func-address: 0x101579b0
 * callers: 0x10152470
 * callees: none
 */

bool __thiscall std::vector<Model *>::empty(_DWORD *this)
{
  int v1; // edx

  v1 = this[1];
  return !v1 || (this[2] - v1) >> 2 == 0;
}
