/*
 * func-name: ??0?$vector@PAVActor@@V?$allocator@PAVActor@@@std@@@std@@QAE@I@Z
 * func-address: 0x1002aa50
 * callers: none
 * callees: 0x10024730
 */

_DWORD *__thiscall std::vector<Actor *>::vector<Actor *>(_DWORD *this, unsigned int a2)
{
  int v4; // [esp+4h] [ebp-4h] BYREF

  v4 = 0;
  std::vector<Actor *>::_Construct_n(this, a2, &v4);
  return this;
}
