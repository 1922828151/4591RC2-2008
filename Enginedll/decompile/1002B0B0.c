/*
 * func-name: ??0?$vector@PAVMatrix@@V?$allocator@PAVMatrix@@@std@@@std@@QAE@I@Z
 * func-address: 0x1002b0b0
 * callers: none
 * callees: 0x10024c00
 */

_DWORD *__thiscall std::vector<Matrix *>::vector<Matrix *>(_DWORD *this, unsigned int a2)
{
  int v4; // [esp+4h] [ebp-4h] BYREF

  v4 = 0;
  std::vector<Matrix *>::_Construct_n(this, a2, &v4);
  return this;
}
