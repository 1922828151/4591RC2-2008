/*
 * func-name: ?_Buy@?$vector@PAVModel@@V?$allocator@PAVModel@@@std@@@std@@IAE_NI@Z
 * func-address: 0x1001ce30
 * callers: 0x10020000
 * callees: 0x10019720, 0x100dd410
 */

char __thiscall std::vector<Model *>::_Buy(_DWORD *this, unsigned int a2)
{
  int v4; // eax

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( !a2 )
    return 0;
  if ( a2 > 0x3FFFFFFF )
    std::vector<Model *>::_Xlen();
  v4 = sub_100DD410(a2);
  this[1] = v4;
  this[2] = v4;
  this[3] = v4 + 4 * a2;
  return 1;
}
