/*
 * func-name: ?back@?$vector@PAVModel@@V?$allocator@PAVModel@@@std@@@std@@QBEABQAVModel@@XZ
 * func-address: 0x1001cc90
 * callers: none
 * callees: none
 */

unsigned int __thiscall std::vector<Model *>::back(_DWORD *this)
{
  unsigned int v2; // edi

  v2 = this[2];
  if ( this[1] > v2 )
    invalid_parameter_noinfo();
  if ( v2 - 4 > this[2] || v2 - 4 < this[1] )
    invalid_parameter_noinfo();
  if ( v2 - 4 >= this[2] )
    invalid_parameter_noinfo();
  return v2 - 4;
}
