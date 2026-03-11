/*
 * func-name: ?push_back@?$vector@PAVActor@@V?$allocator@PAVActor@@@std@@@std@@QAEXABQAVActor@@@Z
 * func-address: 0x10012a30
 * callers: 0x10030c20, 0x10043960, 0x10050780, 0x100507a0, 0x100507e0, 0x10050870, 0x10084120, 0x10084160, 0x10084530, 0x10084f60, 0x100853c0, 0x10087570, 0x10087a10, 0x10088400, 0x1008c3e0, 0x1008e470, 0x100debd0, 0x10104050, 0x101042c0, 0x1010a6c0, 0x1010ab60, 0x10128c50, 0x10139890, 0x1013a940, 0x10140310, 0x10169d00
 * callees: 0x10011750
 */

_DWORD *__thiscall std::vector<Actor *>::push_back(_DWORD *this, int *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  int *v5; // eax
  _DWORD *result; // eax
  char *v7; // edi
  int v8; // [esp+4h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) >> 2;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) >> 2 )
  {
    v5 = (int *)this[2];
    *v5 = *a2;
    result = v5 + 1;
    this[2] = result;
  }
  else
  {
    v7 = (char *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return std::vector<Actor *>::insert(this, &v8, this, v7, a2);
  }
  return result;
}
