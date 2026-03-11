/*
 * func-name: ??0?$vector@PAVMaterial@@V?$allocator@PAVMaterial@@@std@@@std@@QAE@I@Z
 * func-address: 0x1002b550
 * callers: none
 * callees: 0x10025060
 */

_DWORD *__thiscall std::vector<Material *>::vector<Material *>(_DWORD *this, unsigned int a2)
{
  int v4; // [esp+4h] [ebp-4h] BYREF

  v4 = 0;
  std::vector<Material *>::_Construct_n(this, a2, &v4);
  return this;
}
