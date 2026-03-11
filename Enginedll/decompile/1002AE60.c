/*
 * func-name: ??0?$vector@PAVModel@@V?$allocator@PAVModel@@@std@@@std@@QAE@I@Z
 * func-address: 0x1002ae60
 * callers: none
 * callees: 0x100249d0
 */

_DWORD *__thiscall std::vector<Model *>::vector<Model *>(_DWORD *this, unsigned int a2)
{
  int v4; // [esp+4h] [ebp-4h] BYREF

  v4 = 0;
  std::vector<Model *>::_Construct_n(this, a2, &v4);
  return this;
}
