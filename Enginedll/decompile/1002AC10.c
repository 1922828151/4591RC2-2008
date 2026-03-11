/*
 * func-name: ??0?$vector@PAUModelFrame@@V?$allocator@PAUModelFrame@@@std@@@std@@QAE@I@Z
 * func-address: 0x1002ac10
 * callers: none
 * callees: 0x100247a0
 */

_DWORD *__thiscall std::vector<ModelFrame *>::vector<ModelFrame *>(_DWORD *this, unsigned int a2)
{
  int v4; // [esp+4h] [ebp-4h] BYREF

  v4 = 0;
  std::vector<ModelFrame *>::_Construct_n(this, a2, &v4);
  return this;
}
