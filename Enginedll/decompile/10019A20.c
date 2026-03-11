/*
 * func-name: ?capacity@?$vector@PAVModel@@V?$allocator@PAVModel@@@std@@@std@@QBEIXZ
 * func-address: 0x10019a20
 * callers: none
 * callees: none
 */

int __thiscall std::vector<Model *>::capacity(_DWORD *this)
{
  int v1; // edx

  v1 = this[1];
  if ( v1 )
    return (this[3] - v1) >> 2;
  else
    return 0;
}
